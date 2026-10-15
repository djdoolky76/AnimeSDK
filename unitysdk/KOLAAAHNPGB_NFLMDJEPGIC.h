#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define KOLAAAHNPGB_NFLMDJEPGIC_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define KOLAAAHNPGB_NFLMDJEPGIC_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define KOLAAAHNPGB_NFLMDJEPGIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define KOLAAAHNPGB_NFLMDJEPGIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

	struct alignas(4) KOLAAAHNPGB_NFLMDJEPGIC
	{
		::System::UInt32 EFINCEDPKFL; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOLAAAHNPGB_NFLMDJEPGIC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLAAAHNPGB_NFLMDJEPGIC_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::KOLAAAHNPGB_NFLMDJEPGIC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOLAAAHNPGB_NFLMDJEPGIC))((::PBYTE)hIl2Cpp + KOLAAAHNPGB_NFLMDJEPGIC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLAAAHNPGB_NFLMDJEPGIC_GETHASHCODE_OFFSET))(this);
		}

	};
