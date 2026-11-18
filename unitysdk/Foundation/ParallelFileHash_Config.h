#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_PARALLELFILEHASH_CONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179C4360)
#define FOUNDATION_PARALLELFILEHASH_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x179C46C0)
#define FOUNDATION_PARALLELFILEHASH_CONFIG___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179C46E0)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileHash_Config_TypeDefinitionIndex = 51907;

	class ParallelFileHash_Config : public ::System::Object
	{
	public:
		::System::Int32 ioThreadCount; // 0x10
		::System::Int32 chunkSize; // 0x14
		::System::Int32 hashThreadCount; // 0x18
		::System::Int32 initialChunks; // 0x1C
		::System::Int32 timeSlice; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_CONFIG__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_CONFIG_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_CONFIG___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
