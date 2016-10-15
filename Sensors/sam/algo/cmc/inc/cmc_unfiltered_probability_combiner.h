#ifndef CMC_UNFILTERED_PROBABILITY_COMBINER_H
#define CMC_UNFILTERED_PROBABILITY_COMBINER_H

/*=============================================================================
 Qualcomm Motion Classifier (CMC) unfiltered probability combiner block header

 Copyright (c) 2014 Qualcomm Technologies, Inc. All Rights Reserved.
 Qualcomm Technologies Proprietary and Confidential.
 =============================================================================*/

/*============================================================================
 * EDIT HISTORY
 *
 * This section contains comments describing changes made to the module.
 * Notice that changes are listed in reverse chronological order.
 *
 * when        who        what, where, why
 * ----------  ---        -----------------------------------------------------------
 * 2014-05-15  abhinand   Initial version
 *
 *============================================================================*/

#include "cmc.h"

#define CMC_STAT_DR_LR_STATIONARY_IDX 0
#define CMC_STAT_DR_LR_VEHICLE_IDX 1
#define CMC_WALK_BIKE_LR_WALK_IDX 0
#define CMC_WALK_BIKE_LR_BIKE_IDX 1

/**----------------------------------------------------------------------------
 * Function Prototypes
 * --------------------------------------------------------------------------*/

/*============================================================================

 FUNCTION:   cmc_combine_unfiltered_probabilities

 ============================================================================*/
/*!
 @brief Combine the unfiltered probabilities generated by the GMM and LR
 blocks.

* --------------------------------------------------------------------------*/

void cmc_combine_unfiltered_probabilities(cmc_state_s *cmc_state);

#endif //CMC_UNFILTERED_PROBABILITY_COMBINER_H
