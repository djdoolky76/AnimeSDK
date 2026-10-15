#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define AJKNMKCMKHB_JBALOANPPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AJKNMKCMKHB_JBALOANPPIG_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define AJKNMKCMKHB_JBALOANPPIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define AJKNMKCMKHB_JBALOANPPIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36B70)

inline static constexpr unsigned int AJKNMKCMKHB_JBALOANPPIG_TypeDefinitionIndex = 13300;

	struct alignas(4) AJKNMKCMKHB_JBALOANPPIG
	{
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJKNMKCMKHB_JBALOANPPIG_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKNMKCMKHB_JBALOANPPIG_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::AJKNMKCMKHB_JBALOANPPIG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJKNMKCMKHB_JBALOANPPIG))((::PBYTE)hIl2Cpp + AJKNMKCMKHB_JBALOANPPIG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKNMKCMKHB_JBALOANPPIG_GETHASHCODE_OFFSET))(this);
		}

	};
