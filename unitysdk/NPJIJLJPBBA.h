#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDNPMMAAGNF.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPJIJLJPBBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x777910)
#define NPJIJLJPBBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x777860)
#define NPJIJLJPBBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7777A0)
#define NPJIJLJPBBA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x777990)
#define NPJIJLJPBBA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x777920)

inline static constexpr unsigned int NPJIJLJPBBA_TypeDefinitionIndex = 63402;

struct alignas(4) NPJIJLJPBBA
{
	::System::Int32 OCOJAHKMHOL; // 0x10
	::System::UInt32 PEKGLKGHHNI; // 0x14
	::System::UInt32 MOHFFHFHCIO; // 0x18
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x1C
	::HDNPMMAAGNF BIOHODJJHFO; // 0x20
	::System::UInt32 PCACPODBCBO; // 0x24

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJIJLJPBBA_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::NPJIJLJPBBA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPJIJLJPBBA))((::PBYTE)hIl2Cpp + NPJIJLJPBBA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPJIJLJPBBA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPJIJLJPBBA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJIJLJPBBA_HLPHPBAODIF_OFFSET))(this);
	}
};
