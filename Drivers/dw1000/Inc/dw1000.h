/**
 * \file            dw1000.h
 * \brief           Функции для работы с DW1000
 */
#ifndef TEST_DW1000_DW1000_H
#define TEST_DW1000_DW1000_H

#include <stdint.h>
#include "port.h"
#include "deca_device_api.h"
#include "terminal.h"
#include "deca_regs.h"

#define ANCHOR_TX_ANT_DLY_DTU 32966 // задержка антенны при TX. anchor 32966, tag 1
#define ANCHOR_RX_ANT_DLY_DTU 32966 // задержка антенны при RX. anchor 32966, tag 1

#define TAG_TX_ANT_DLY_DTU 1
#define TAG_RX_ANT_DLY_DTU 1

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

uint64
get_tx_timestamp_u64(void);

uint64
get_rx_timestamp_u64(void);

uint64
get_system_time_u64(void);

uint8_t
initialise_dw1000(void);

uint8_t
configure_dw1000(void);

uint8_t
uwb_receive_data(uint8_t rx_started, uint8_t *data, size_t *data_size, uint32_t rx_timeout);

uint8_t
uwb_transmit_data(uint8_t *data, size_t data_size, uint32_t tx_delay, uint32_t rx_delay,
                  uint8_t response_expected);

uint8_t
uwb_receive_data_after_transmit(uint8_t *data_to_transfer, size_t data_to_transfer_size, uint8_t *data_received,
                                size_t *data_received_size, uint32_t tx_delay, uint32_t rx_delay,
                                uint32_t rx_timeout);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif //TEST_DW1000_DW1000_H
