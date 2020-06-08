// ToC
// Status Registers – [0x0000-0x001B]
// Frame Format Description – [0x0040-0x0047]
// Analogue Gain Description Registers – [0x0080-0x0093]
// Data Format Description – [0x00C0-0x00D1]
// General Set-up Registers – [0x0100-0x0106]
// Output Set-up Registers – [0x0110-0x0147]
// Frame Bank Control Registers - [0x0150-0x0153]

// Status Registers – [0x0000-0x001B] (Read Only Dynamic Registers)
// model id
#define MODEL_ID 0x0000
// Lot_ID of the sensor Copied from NVM 
#define Lot_ID 0x0004 
// Wafer Number of the Sensor in the Lot. Value 0x01-0x19 is available. 
#define Wafer_Num 0x0007 
// Chip ID in the wafer
#define Chip_Number 0x00d 
#define FRM_CNT 0x0018
#define PX_ORDER 0x0019
#define DT_PEDESTAL 0x001b

// Frame Format Description – [0x0040-0x0047]
// frame_format_model_type
#define FRM_FMT_TYPE 0x0040 
// frame_format_model_subtype
#define FRM_FMT_SUBTYPE 0x0041 
// frame format descriptor 0
#define FRM_FMT_DESC0 0x0042 
// frame format descriptor 1
#define FRM_FMT_DESC1 0x0044 
// frame format_descriptor 2
#define FRM_FMT_DESC2 0x0046 

// Analogue Gain Description Registers – [0x0080-0x0093]
// Analogue Gain Description Registers
#define analogue_gain_capability 0x0081 
// Analogue Gain Description Registers
#define analogue_gain_code_min 0x0085 
// Analogue Gain Description Registers possible to setup up to E8 (HEX)
#define analogue_gain_code_max 0x0086 
// Analogue Gain Description Registers
#define analogue_gain_code_step 0x0088 
// Analogue Gain Description Registers
#define analogue_gain_type 0x008a 
// Analogue Gain Description Registers
#define analogue_gain_m0 0x008c 
// Analogue Gain Description Registers
#define analogue_gain_c0 0x008e 
// Analogue Gain Description Registers
#define analogue_gain_m1 0x0090 
// Analogue Gain Description Registers
#define analogue_gain_c1 0x0092 

// Data Format Description – [0x00C0-0x00D1]
// data_format_model_type
#define DT_FMT_TYPE 0x00c0 
// data_format_model_subtype
#define DT_FMT_SUBTYPE 0x0c1 
// data_format_descriptor_0
#define DT_FMT_DESC0 0x0c2 
// data_format_descriptor_1
#define DT_FMT_DESC1 0x00c4 

// General Set-up Registers – [0x0100-0x0106]
// [RW] Mode Select: 0: SW standby, 1: Streaming
#define mode_select 0x0100 
// [RW] Software reset
#define software_reset 0x0103 
// [RO-D] corrupted frame status
#define corrupted_frame_status 0x0104
// [RW] mask_corrupted_frames  
#define mask_corrupted_frames 0x0105 
// [RW] fast standby from streaming
#define fast_standby_enabl 0x0106 

// Output Set-up Registers – [0x0110-0x0147]
// [RW] CSI-2 channel ID
#define CSI_CH_ID 0x0110 
// [RO] CSI-2 signalling mode
#define CSI_SIG_MODE 0x0111 
 // [RW] CSI_lane_mode 0: Reserved, 1: 2-Lane, 2: Reserved, 3: 4-Lane
#define CSI_LANE_MODE 0x0114
// [RW] Global Timing Parameters 
#define TCLK_POST 0x0118 
// [RW] Global Timing Parameters 
#define THS_PREPARE 0x011a 
// [RW] Global Timing Parameters 
#define THS_ZERO_MIN 0x011c 
// [RW] Global Timing Parameters 
#define THS_TRAIL 0x011e 
// [RW] Global Timing Parameters 
#define TCLK_TRAIL_MIN 0x0120 
// [RW] Global Timing Parameters 
#define TCLK_PREPARE 0x0122 
// [RW] Global Timing Parameters 
#define TCLK_ZERO 0x0124
// [RW] Global Timing Parameters 
#define TLPX 0x0126
// MIPI Global timing setting 0: auto mode, 1: manual mode
#define DPHY_CTRL 0x0128
 // INCK frequency [MHz] 
#define EXCK_FREQ 0x012a
// start register to measure sensor temperature 
#define TEMPERATURE 0x0140 
// indicates current V-counter value for read-out 
#define READOUT_V_CNT 0x0142 
// defines polarity of V-sync signal. 0: Lo-active, 1: Hi-active
#define VSYNC_POL 0x0144 
// defines polarity of flash strobe signal. 0: Hi-active, 1: Lo-active 
#define FLASH_POL 0x0146 
// Vsync type control 0: Vsync, 1: Reserved
#define VSYNC_TYPE 0x0147 

// Frame Bank Control Registers - [0x0150-0x0153]
// [1] indicates frame bank applied in current frame 
// [0] defines Frame Bank to be applied in next frame (manual switching)  
#define FRAME_BANK_STATUS 0x0150 
// frame counter value for frame bank switching. 
#define FRAME_BANK_FRM_CNT 0x0151 
// When host changes frame_bank_enable register under ERS mode, 
// sensor immediately stops current V-blanking and start new exposure.
#define FRAME_BANK_FAST_TRACKING 0x152