#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 8468;

	enum class Download_FailedReason : ::System::Int32
	{
		FileLenghCheckFaild = 4,
		NotReachable = 2,
		DiskNotEnough = 1,
		TimeOut = 8,
		RequestException = 6,
		CreateTempFileFailed = 11,
		HashCheckFaild = 3,
		Other = 7,
		None = 0,
		IOFailedInReceiveData = 10,
		IOFailedInCompleteContent = 12,
		NullBufferInReceiveData = 9,
		ServerException = 5,
	};
}
