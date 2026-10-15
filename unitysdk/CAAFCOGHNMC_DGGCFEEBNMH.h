#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CAAFCOGHNMC_DGGCFEEBNMH_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define CAAFCOGHNMC_DGGCFEEBNMH_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define CAAFCOGHNMC_DGGCFEEBNMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define CAAFCOGHNMC_DGGCFEEBNMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int CAAFCOGHNMC_DGGCFEEBNMH_TypeDefinitionIndex = 14376;

	struct alignas(4) CAAFCOGHNMC_DGGCFEEBNMH
	{
		::System::UInt32 HNPDLANHONH; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAAFCOGHNMC_DGGCFEEBNMH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFCOGHNMC_DGGCFEEBNMH_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::CAAFCOGHNMC_DGGCFEEBNMH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAAFCOGHNMC_DGGCFEEBNMH))((::PBYTE)hIl2Cpp + CAAFCOGHNMC_DGGCFEEBNMH_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFCOGHNMC_DGGCFEEBNMH_GETHASHCODE_OFFSET))(this);
		}

	};
