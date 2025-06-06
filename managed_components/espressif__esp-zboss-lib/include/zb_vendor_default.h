/*
 * Copyright (c) 2021 Espressif Systems (Shanghai) CO LTD
 * All rights reserved.
 *
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Espressif Systems
 *    integrated circuit in a product or a software update for such product,
 *    must reproduce the above copyright notice, this list of conditions and
 *    the following disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * 4. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* Number of buttons supported */
#define ZB_N_BUTTONS 5
#define ZB_ENABLE_HA
#define ZB_ENABLE_ZCL
#define ZB_TEST_PROFILE
/* Enable Rejoin Backoff (used in Smart Plug and IAS Zone samples). */
#define ZB_REJOIN_BACKOFF
#define ZB_USE_SLEEP
#define ZB_CERTIFICATION_HACKS    /*Special modes for testing see zb_config.h*/
#ifdef ZB_USE_SLEEP
#define ZB_MEMORY_COMPACT
#endif

/* ZB3.0 BDB mode */
#define ZB_BDB_MODE
#define ZB_BDB_ENABLE_FINDING_BINDING
#define ZB_DISTRIBUTED_SECURITY_ON
#define ZB_SECURITY_INSTALLCODES

/* ZGP */
#ifdef CONFIG_ZB_GP_ENABLED
#define ZB_ENABLE_ZGP
#define ZB_ENABLE_ZGP_COMBO
#define ZB_ENABLE_ZGP_GPCB
#define ZB_ZGP_SINK_TBL_SIZE 10
// #define ZB_ZGP_SIMPLE_COMBO_START_AS_ZR
#define ZB_ZGP_TRANSL_CMD_PLD_MAX_SIZE 3
#define ZGP_CLUSTER_TEST
#define ZB_ZGP_SKIP_GPDF_ON_NWK_LAYER
#define ZB_ZGP_RUNTIME_WORK_MODE_WITH_PROXIES
#define ZB_ZGP_PROXY_TBL_SIZE 8
#endif /* CONFIG_ZB_GP_ENABLED */

/* Device support */
#define ZB_ALL_DEVICE_SUPPORT

/* OOM detection */
#define ZB_CHECK_OOM_STATUS
#define ZB_SEND_OOM_STATUS

#define ZB_NO_NVRAM_VER_MIGRATION

#define ZB_LIMIT_VISIBILITY

#define ZB_TEST_GROUP_ZCP_R22_APS
#define ZB_TEST_GROUP_ZCP_R22_BDB
#define ZB_TEST_GROUP_ZCP_R22_NWK
#define ZB_TEST_GROUP_ZCP_R22_PED
#define ZB_TEST_GROUP_ZCP_R22_PRO
#define ZB_TEST_GROUP_ZCP_R22_R20
#define ZB_TEST_GROUP_ZCP_R22_R21
#define ZB_TEST_GROUP_ZCP_R22_R22
#define ZB_TEST_GROUP_ZCP_R22_SEC
#define ZB_TEST_GROUP_ZCP_R22_ZDO

#ifdef CONFIG_ZB_ZCZR
#define ZB_COORDINATOR_ROLE
#define ZB_ROUTER_ROLE
#else
#define ZB_ED_ROLE
#define ZB_ED_FUNC
#endif

/* APS GROUP TABLE SIZE */
#ifndef ZB_ED_ROLE
#define ZB_APS_GROUP_TABLE_SIZE 32
#define ZB_APS_ENDPOINTS_IN_GROUP_TABLE 64U
#else
#define ZB_APS_GROUP_TABLE_SIZE 32
#define ZB_APS_ENDPOINTS_IN_GROUP_TABLE 64U
#endif
#define ZB_MULTITEST_CONSOLE_SLEEP_TIMEOUT 1000000

/* TRACE FILE ID NO NEED */
#define ZB_DONT_NEED_TRACE_FILE_ID

/* Support Max Endpoint Number */
#define ZB_MAX_EP_NUMBER 64U

/* Interrupt Safe */
#define ZB_INTERRUPT_SAFE_ALARMS
#define ZB_INTERRUPT_SAFE_CALLBACKS

/* Touchlink */
#define ZB_BDB_TOUCHLINK
#ifdef ZB_BDB_TOUCHLINK
#define ZB_ENABLE_ZLL
#define ZB_ENABLE_INTER_PAN_EXCHANGE
#endif // ZB_BDB_TOUCHLINK
/* Add dependency to the Inter-Pan exchange */
#ifdef  ZB_ENABLE_INTER_PAN_NON_DEFAULT_CHANNEL
#ifndef ZB_ENABLE_INTER_PAN_EXCHANGE
#define ZB_ENABLE_INTER_PAN_EXCHANGE
#endif
#endif

/* Enable APS Fragmentation */
#define APS_FRAGMENTATION