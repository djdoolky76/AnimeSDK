#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_UTILITIES_23EAFA4805F40AE7_GETMAXSIZEFORBUCKET_OFFSET UNITYSDK_OFFSET(0x20070A10)
#define SYSTEM_BUFFERS_UTILITIES_23EAFA4805F40AE7_SELECTBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x200709A0)

namespace System::Buffers
{
	inline static constexpr unsigned int Utilities_23EAFA4805F40AE7_TypeDefinitionIndex = 6536;

	class Utilities_23EAFA4805F40AE7 : public ::System::Object
	{
	public:
		static ::System::Int32 SelectBucketIndex(::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_23EAFA4805F40AE7_SELECTBUCKETINDEX_OFFSET))(bufferSize);
		}

		static ::System::Int32 GetMaxSizeForBucket(::System::Int32 binIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_23EAFA4805F40AE7_GETMAXSIZEFORBUCKET_OFFSET))(binIndex);
		}
	};
}
