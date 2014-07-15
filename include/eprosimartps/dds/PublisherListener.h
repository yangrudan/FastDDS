/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/**
 * @file PublisherListener.h	
 */

#ifndef PUBLISHERLISTENER_H_
#define PUBLISHERLISTENER_H_

#include "eprosimartps/common/types/common_types.h"
#include "eprosimartps/dds/MatchingInfo.h"

namespace eprosima {
namespace dds {

/**
 * Class PublisherListener, it should be used by the end user to implement specific callbacks to certain actions.
 * @ingroup DDSMODULE
 * @snippet dds_example.cpp ex_PublisherListener
 */
class RTPS_DllAPI PublisherListener
{
public:
	PublisherListener();
	virtual ~PublisherListener();

	virtual void onPublicationMatched(MatchingInfo info);

	virtual void onHistoryFull();
};

} /* namespace rtps */
} /* namespace eprosima */

#endif /* PUBLISHERLISTENER_H_ */
