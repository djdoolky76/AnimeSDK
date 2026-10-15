#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OFFEJCGMAOP_CCLGICPHPFA_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OFFEJCGMAOP_CCLGICPHPFA_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define OFFEJCGMAOP_CCLGICPHPFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define OFFEJCGMAOP_CCLGICPHPFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

	struct alignas(4) OFFEJCGMAOP_CCLGICPHPFA
	{
		::System::UInt32 HNPDLANHONH; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFEJCGMAOP_CCLGICPHPFA_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFEJCGMAOP_CCLGICPHPFA_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OFFEJCGMAOP_CCLGICPHPFA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFFEJCGMAOP_CCLGICPHPFA))((::PBYTE)hIl2Cpp + OFFEJCGMAOP_CCLGICPHPFA_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFEJCGMAOP_CCLGICPHPFA_GETHASHCODE_OFFSET))(this);
		}

	};
