#ifndef USER_API_H
#define USER_API_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "ZDApp.h"
#include "AF.h"

void user_show_info(void);
afStatus_t user_send_data( afAddrMode_t mode, uint16 addr, char *data_buf );
afStatus_t user_send_data1( afAddrMode_t mode, uint8 addr, char *data_buf );
void user_state_change( devStates_t state );

#ifdef __cplusplus
}
#endif
uint8 DestMacC[8]={0x6A,0XAA,0XAA,0X04,0X00,0X4B,0X12,0X00};
uint8 DestMacR1[8]={0x97,0X7C,0XDD,0X18,0X00,0X4B,0X12,0X00};
uint8 DestMacR2[8]={0x9C,0X7C,0XDD,0X18,0X00,0X4B,0X12,0X00};
#endif /* USER_API_H */
