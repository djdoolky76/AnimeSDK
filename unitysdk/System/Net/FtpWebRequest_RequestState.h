#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class FtpWebRequest_RequestState : ::System::Int32
	{
		Before = 0,
		Scheduled = 1,
		Connecting = 2,
		Authenticating = 3,
		OpeningData = 4,
		TransferInProgress = 5,
		Finished = 6,
		Aborted = 7,
		Error = 8,
	};
}
