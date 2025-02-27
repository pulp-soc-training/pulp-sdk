/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __ARCHI_PULPISSIMO_PROPERTIES_H__
#define __ARCHI_PULPISSIMO_PROPERTIES_H__

/*
 * FPGA
 */

#define ARCHI_FPGA_FREQUENCY 5000000


/*
 * MEMORIES
 */ 

#define ARCHI_HAS_L2                   1
#define ARCHI_HAS_L2_MULTI             1

#define ARCHI_L2_PRIV0_ADDR  0x1c000000
#define ARCHI_L2_PRIV0_SIZE  0x00008000

#define ARCHI_L2_PRIV1_ADDR  0x1c008000
#define ARCHI_L2_PRIV1_SIZE  0x00008000

#define ARCHI_L2_SHARED_ADDR  0x1c010000
#define ARCHI_L2_SHARED_SIZE  0x001E0000

#define ARCHI_HAS_L2_PRIV2      1

#if defined(ARCHI_HAS_L2_PRIV2)
#define ARCHI_L2_PRIV2_ADDR  0x1b000000
#define ARCHI_L2_PRIV2_SIZE  0x00008000
#endif

/*
 * MEMORY ALIAS
 */

#define ARCHI_HAS_L2_ALIAS             1



/*
 * IP VERSIONS
 */

#define UDMA_VERSION        3
#define PERIPH_VERSION      2
#define TIMER_VERSION       2
#define SOC_EU_VERSION      2
#define APB_SOC_VERSION     3
#define STDOUT_VERSION      2
#define GPIO_VERSION        2
#define ITC_VERSION         1
#define FLL_VERSION         1
#define RISCV_VERSION       4
#define HWME_VERSION        1
#define PADS_VERSION        2


/*
 * CORE IDS
 */

#define ARCHI_FC_CID        31
#define ARCHI_HAS_FC_ITC    1
#define ARCHI_HAS_FC        1
#ifndef ARCHI_HAS_CLUSTER
#define ARCHI_NB_CLUSTER    0
#endif

/*
 * CLOCKS
 */

#define ARCHI_REF_CLOCK_LOG2 15
#define ARCHI_REF_CLOCK      (1<<ARCHI_REF_CLOCK_LOG2)



/*
 * UDMA
 */

#define ARCHI_UDMA_HAS_SPIM   1
#define ARCHI_UDMA_HAS_UART   1
#define ARCHI_UDMA_HAS_SDIO      1
#define ARCHI_UDMA_HAS_I2C    1
#define ARCHI_UDMA_HAS_I2S    1
#define ARCHI_UDMA_HAS_CAM    1
#define ARCHI_UDMA_HAS_TRACER 1
#define ARCHI_UDMA_HAS_FILTER    1

#define ARCHI_UDMA_NB_SPIM   1
#define ARCHI_UDMA_NB_UART   1
#define ARCHI_UDMA_NB_SDIO      1
#define ARCHI_UDMA_NB_I2C    1
#define ARCHI_UDMA_NB_I2S    1
#define ARCHI_UDMA_NB_CAM    1
#define ARCHI_UDMA_NB_TRACER 1
#define ARCHI_UDMA_NB_FILTER    1

#define ARCHI_UDMA_UART_ID(id)            0
#define ARCHI_UDMA_SPIM_ID(id)            1
#define ARCHI_UDMA_I2C_ID(id)             (2 + (id))
#define ARCHI_UDMA_SDIO_ID(id)            (4   + (id))
#define ARCHI_UDMA_I2S_ID(id)             5
#define ARCHI_UDMA_CAM_ID(id)             6
#define ARCHI_UDMA_FILTER_ID(id)          (7  + (id))
#define ARCHI_UDMA_TRACER_ID(id)          8
#define ARCHI_UDMA_TGEN_ID(id)            9

#define ARCHI_NB_PERIPH                   10



/*
 * FLLS
*/

#define ARCHI_NB_FLL  2



/*
 * SOC EVENTS
 */

#define ARCHI_SOC_EVENT_PERIPH_EVT_NB     160

#define ARCHI_SOC_EVENT_SW_NB      (8)

#define ARCHI_SOC_EVENT_NB_TOTAL     256

#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2 2
#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT (1<<ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2)
#define ARCHI_SOC_EVENT_UDMA_FIRST_EVT   0
#define ARCHI_SOC_EVENT_UDMA_NB_EVT       (ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_NB_PERIPH)
#define ARCHI_SOC_EVENT_UDMA_NB_TGEN_EVT 6

#define ARCHI_SOC_EVENT_PERIPH_FIRST_EVT(x)     ((x)*ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)

#define ARCHI_SOC_EVENT_UART0_RX          0
#define ARCHI_SOC_EVENT_UART0_TX          1
#define ARCHI_SOC_EVENT_UART0_EOT         2
#define ARCHI_SOC_EVENT_UART0_RX_DATA     3

#define ARCHI_SOC_EVENT_SPIM0_RX          4
#define ARCHI_SOC_EVENT_SPIM0_TX          5
#define ARCHI_SOC_EVENT_SPIM0_CMD         6
#define ARCHI_SOC_EVENT_SPIM0_EOT         7

#define ARCHI_SOC_EVENT_I2C0_RX           8
#define ARCHI_SOC_EVENT_I2C0_TX           9

#define ARCHI_SOC_EVENT_I2C1_RX           12
#define ARCHI_SOC_EVENT_I2C1_TX           13

#define ARCHI_SOC_EVENT_SDIO0_RX          16
#define ARCHI_SOC_EVENT_SDIO0_TX          17

#define ARCHI_SOC_EVENT_I2S0_RX           20
#define ARCHI_SOC_EVENT_I2S0_TX           21

#define ARCHI_SOC_EVENT_CPI0_RX           24

#define ARCHI_SOC_EVENT_FILTER0_RX        28
#define ARCHI_SOC_EVENT_FILTER0_TX        29

#define ARCHI_SOC_EVENT_CLUSTER_ON_OFF   31
#define ARCHI_SOC_EVENT_MSP              37
#define ARCHI_SOC_EVENT_ICU_MODE_CHANGED 37
#define ARCHI_SOC_EVENT_ICU_OK           37
#define ARCHI_SOC_EVENT_ICU_DELAYED      37
#define ARCHI_SOC_EVENT_CLUSTER_CG_OK    35
#define ARCHI_SOC_EVENT_PICL_OK          36
#define ARCHI_SOC_EVENT_SCU_OK           37
#define ARCHI_SOC_EVENT_PMU_FIRST_EVENT  ARCHI_SOC_EVENT_CLUSTER_ON_OFF
#define ARCHI_SOC_EVENT_PMU_NB_EVENTS    7

#define ARCHI_SOC_EVENT_GPIO         42


#define ARCHI_SOC_EVENT_NB_I2S_CHANNELS  4
#define ARCHI_SOC_EVENT_NB_UDMA_CHANNELS 19

#define ARCHI_SOC_EVENT_FCHWPE0 140
#define ARCHI_SOC_EVENT_FCHWPE1 141

#define ARCHI_SOC_EVENT_SW_EVENT0    48
#define ARCHI_SOC_EVENT_SW_EVENT1    49
#define ARCHI_SOC_EVENT_SW_EVENT2    50
#define ARCHI_SOC_EVENT_SW_EVENT3    51
#define ARCHI_SOC_EVENT_SW_EVENT4    52
#define ARCHI_SOC_EVENT_SW_EVENT5    53
#define ARCHI_SOC_EVENT_SW_EVENT6    54
#define ARCHI_SOC_EVENT_SW_EVENT7    55

#define ARCHI_SOC_EVENT_NB           8

#define ARCHI_SOC_EVENT_REF_CLK_RISE 56



/*
 * FC EVENTS
 */

#define ARCHI_FC_EVT_FIRST_SW         0
#define ARCHI_FC_EVT_NB_SW            8
#define ARCHI_FC_EVT_TIMER0_LO           10
#define ARCHI_FC_EVT_TIMER0_HI           11
#define ARCHI_FC_EVT_CLK_REF          14
#define ARCHI_FC_EVT_GPIO             15
#define ARCHI_FC_EVT_RTC              16
#define ARCHI_FC_EVT_ADV_TIMER0       17
#define ARCHI_FC_EVT_ADV_TIMER1       18
#define ARCHI_FC_EVT_ADV_TIMER2       19
#define ARCHI_FC_EVT_ADV_TIMER3       20
#define ARCHI_FC_EVT_CLUSTER_NOT_BUSY 21
#define ARCHI_FC_EVT_CLUSTER_POK      22
#define ARCHI_FC_EVT_CLUSTER_CG_OK    23
#define ARCHI_FC_EVT_PICL_OK          24
#define ARCHI_FC_EVT_SCU_OK           25
#define ARCHI_FC_EVT_SOC_EVT          26
#define ARCHI_FC_EVT_QUEUE_ERROR      29


#endif
