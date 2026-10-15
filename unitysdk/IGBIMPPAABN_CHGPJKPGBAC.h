#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define IGBIMPPAABN_CHGPJKPGBAC_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define IGBIMPPAABN_CHGPJKPGBAC_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define IGBIMPPAABN_CHGPJKPGBAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define IGBIMPPAABN_CHGPJKPGBAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int IGBIMPPAABN_CHGPJKPGBAC_TypeDefinitionIndex = 14379;

	struct alignas(4) IGBIMPPAABN_CHGPJKPGBAC
	{
		::System::UInt32 HNPDLANHONH; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGBIMPPAABN_CHGPJKPGBAC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBIMPPAABN_CHGPJKPGBAC_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::IGBIMPPAABN_CHGPJKPGBAC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGBIMPPAABN_CHGPJKPGBAC))((::PBYTE)hIl2Cpp + IGBIMPPAABN_CHGPJKPGBAC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBIMPPAABN_CHGPJKPGBAC_GETHASHCODE_OFFSET))(this);
		}

	};
