#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCFLLOLBCLC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define HJDNNLKBHBA_BEIJGJHDOAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x610DD0)
#define HJDNNLKBHBA_BEIJGJHDOAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x610D70)
#define HJDNNLKBHBA_BEIJGJHDOAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x610DE0)
#define HJDNNLKBHBA_BEIJGJHDOAA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x610E90)
#define HJDNNLKBHBA_BEIJGJHDOAA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x610E30)
#define HJDNNLKBHBA_BEIJGJHDOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int HJDNNLKBHBA_BEIJGJHDOAA_TypeDefinitionIndex = 81077;

struct alignas(4) HJDNNLKBHBA_BEIJGJHDOAA
{
	::CCFLLOLBCLC LMOPLCHJOOA; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x14

	::System::Void _ctor(::CCFLLOLBCLC CIAHAAKLADN, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::CCFLLOLBCLC, ::System::Int32))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA__CTOR_OFFSET))(this, CIAHAAKLADN, DKOFFFNEFJC);
	}

	/*
	::System::Boolean Equals(::HJDNNLKBHBA_BEIJGJHDOAA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HJDNNLKBHBA_BEIJGJHDOAA))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNNLKBHBA_BEIJGJHDOAA_HLPHPBAODIF_OFFSET))(this);
	}
};
