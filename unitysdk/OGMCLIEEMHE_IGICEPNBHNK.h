#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OGMCLIEEMHE_IGICEPNBHNK_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OGMCLIEEMHE_IGICEPNBHNK_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define OGMCLIEEMHE_IGICEPNBHNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define OGMCLIEEMHE_IGICEPNBHNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int OGMCLIEEMHE_IGICEPNBHNK_TypeDefinitionIndex = 14609;

	struct alignas(4) OGMCLIEEMHE_IGICEPNBHNK
	{
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGMCLIEEMHE_IGICEPNBHNK_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMCLIEEMHE_IGICEPNBHNK_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OGMCLIEEMHE_IGICEPNBHNK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGMCLIEEMHE_IGICEPNBHNK))((::PBYTE)hIl2Cpp + OGMCLIEEMHE_IGICEPNBHNK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMCLIEEMHE_IGICEPNBHNK_GETHASHCODE_OFFSET))(this);
		}

	};
