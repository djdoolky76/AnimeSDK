#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HAPI_ThriftSharedMemoryBufferType : ::System::Int32
	{
		HAPI_THRIFT_SHARED_MEMORY_FIXED_LENGTH_BUFFER = 0,
		HAPI_THRIFT_SHARED_MEMORY_RING_BUFFER = 1,
	};
}
