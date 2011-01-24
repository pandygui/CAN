#ifndef __MCP2510_REGS__
#define __MCP2510_REGS__

#define FIELD_MASK(w)   ((1 << w) - 1)

#define CANSTAT		0x0E
#define OPMOD		5
#define ICOD		1

#define CANCTRL		0x0F
#define REQOP		5
#define REQOP_MASK	(FIELD_MASK(3) << REQOP)
#define ABAT		4
#define CLKEN		2
#define CLKPRE		0

#define CNF3		0x28
#define PHSEG2		0
#define WAKFIL		6

#define CNF2		0x29
#define PRSEG		0
#define PHSEG1		3
#define SAM		6
#define BTLMODE		7

#define CNF1		0x2A
#define BRP		0
#define SJW		6

#define CANINTF		0x2C
#define MERRF		7
#define WAKIF		6
#define ERRIF		5
#define TX2IF		4
#define TX1IF		3
#define TX0IF		2
#define RX1IF		1
#define RX0IF		0

#define REG(d,n,r)	((d + (n << 4)) | r)
#define TX		0x30
#define RX		0x60

#define CTRL		0x00
#define SIDH		0x01
#define SIDL		0x02
#define EID8		0x03
#define EID0		0x04
#define DLC		0x05
#define D0		0x06
#define D1		0x07
#define D2		0x08
#define D3		0x09
#define D4		0x0A
#define D5		0x0B
#define D6		0x0C
#define D7		0x0D

/* TX CTRL bits */
#define ABTF		6
#define MLOA		5
#define TXERR		4
#define TXREQ		3
#define TXP		0

/* TXB SIDL bits */
#define EXIDE		3

/* TX DLC bits */
#define RTR		6
#define DLC0	0

/* RX CTRL bits */
#define RXM		5
#define RXRTR		3
#define BUKT		2
#define BUKT1		1
#define FILHIT0		0

/* RXB SIDL bits */
#define IDE		3

/* RX DLC bits */
#define RTR		6
#define RB		4
// #define DLC0	0  // Duplicate of TX

#endif