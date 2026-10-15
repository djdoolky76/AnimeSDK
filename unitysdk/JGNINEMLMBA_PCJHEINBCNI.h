#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define JGNINEMLMBA_PCJHEINBCNI_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define JGNINEMLMBA_PCJHEINBCNI_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define JGNINEMLMBA_PCJHEINBCNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define JGNINEMLMBA_PCJHEINBCNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36B70)

inline static constexpr unsigned int JGNINEMLMBA_PCJHEINBCNI_TypeDefinitionIndex = 13389;

	struct alignas(4) JGNINEMLMBA_PCJHEINBCNI
	{
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNINEMLMBA_PCJHEINBCNI_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNINEMLMBA_PCJHEINBCNI_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::JGNINEMLMBA_PCJHEINBCNI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGNINEMLMBA_PCJHEINBCNI))((::PBYTE)hIl2Cpp + JGNINEMLMBA_PCJHEINBCNI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNINEMLMBA_PCJHEINBCNI_GETHASHCODE_OFFSET))(this);
		}

	};
