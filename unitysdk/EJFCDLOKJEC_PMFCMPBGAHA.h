#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EJFCDLOKJEC_PMFCMPBGAHA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define EJFCDLOKJEC_PMFCMPBGAHA_JJNDABAEJMH_OFFSET UNITYSDK_OFFSET(0x744DF0)
#define EJFCDLOKJEC_PMFCMPBGAHA_LNAOGMCNGHJ_OFFSET UNITYSDK_OFFSET(0x3E3C80)
#define EJFCDLOKJEC_PMFCMPBGAHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A9F9A0)
#define EJFCDLOKJEC_PMFCMPBGAHA__CTOR_OFFSET UNITYSDK_OFFSET(0x744DE0)

inline static constexpr unsigned int EJFCDLOKJEC_PMFCMPBGAHA_TypeDefinitionIndex = 91947;

struct alignas(8) EJFCDLOKJEC_PMFCMPBGAHA
{
	static ::EJFCDLOKJEC_PMFCMPBGAHA* StaticGet_FDJHEBHLJLD()
	{
		return (::EJFCDLOKJEC_PMFCMPBGAHA*)Il2CppClass::FromTypeDefinitionIndex(EJFCDLOKJEC_PMFCMPBGAHA_TypeDefinitionIndex)->GetStaticField(0x51390);
	}
	::System::String* DCMBIDPPKGG; // 0x10
	::System::Boolean _MECHDBEHDIN_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* DCMBIDPPKGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EJFCDLOKJEC_PMFCMPBGAHA__CTOR_OFFSET))(this, DCMBIDPPKGG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFCDLOKJEC_PMFCMPBGAHA__CCTOR_OFFSET))();
	}

	::System::Void LNAOGMCNGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJFCDLOKJEC_PMFCMPBGAHA_LNAOGMCNGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JJNDABAEJMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFCDLOKJEC_PMFCMPBGAHA_JJNDABAEJMH_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFCDLOKJEC_PMFCMPBGAHA_JDAPDDEOCEA_OFFSET))(this);
	}
};
