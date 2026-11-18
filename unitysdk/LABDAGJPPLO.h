#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define LABDAGJPPLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x771D90)
#define LABDAGJPPLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x771D00)
#define LABDAGJPPLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x771DA0)
#define LABDAGJPPLO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x771E20)
#define LABDAGJPPLO_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x60E920)
#define LABDAGJPPLO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x771DB0)
#define LABDAGJPPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x3B58E0)

inline static constexpr unsigned int LABDAGJPPLO_TypeDefinitionIndex = 79376;

struct alignas(8) LABDAGJPPLO
{
	::System::String* ABFOABHBENH; // 0x10
	::MoleMole::LanguageType MBABHIFLICA; // 0x18

	::System::Void _ctor(::System::String* ABFOABHBENH, ::MoleMole::LanguageType MBABHIFLICA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + LABDAGJPPLO__CTOR_OFFSET))(this, ABFOABHBENH, MBABHIFLICA);
	}

	/*
	::System::Boolean Equals(::LABDAGJPPLO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LABDAGJPPLO))((::PBYTE)hIl2Cpp + LABDAGJPPLO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LABDAGJPPLO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABDAGJPPLO_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LABDAGJPPLO_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LABDAGJPPLO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABDAGJPPLO_HLPHPBAODIF_OFFSET))(this);
	}
};
