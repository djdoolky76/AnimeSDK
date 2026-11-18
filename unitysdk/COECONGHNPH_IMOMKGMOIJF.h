#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define COECONGHNPH_IMOMKGMOIJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x145DA420)
#define COECONGHNPH_IMOMKGMOIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int COECONGHNPH_IMOMKGMOIJF_TypeDefinitionIndex = 66833;

struct alignas(8) COECONGHNPH_IMOMKGMOIJF
{
	static ::COECONGHNPH_IMOMKGMOIJF* StaticGet_GKPNFBIKEMO()
	{
		return (::COECONGHNPH_IMOMKGMOIJF*)Il2CppClass::FromTypeDefinitionIndex(COECONGHNPH_IMOMKGMOIJF_TypeDefinitionIndex)->GetStaticField(0x403F0);
	}
	static ::COECONGHNPH_IMOMKGMOIJF* StaticGet_BLEEGGOJEEN()
	{
		return (::COECONGHNPH_IMOMKGMOIJF*)Il2CppClass::FromTypeDefinitionIndex(COECONGHNPH_IMOMKGMOIJF_TypeDefinitionIndex)->GetStaticField(0x40400);
	}
	static ::COECONGHNPH_IMOMKGMOIJF* StaticGet_MCMFNMNFMKH()
	{
		return (::COECONGHNPH_IMOMKGMOIJF*)Il2CppClass::FromTypeDefinitionIndex(COECONGHNPH_IMOMKGMOIJF_TypeDefinitionIndex)->GetStaticField(0x40410);
	}
	::System::UInt64 ODAMAMPFFOA; // 0x10
	::System::String* KIHGNGKBADE; // 0x18

	::System::Void _ctor(::System::UInt64 ODAMAMPFFOA, ::System::String* KIHGNGKBADE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + COECONGHNPH_IMOMKGMOIJF__CTOR_OFFSET))(this, ODAMAMPFFOA, KIHGNGKBADE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COECONGHNPH_IMOMKGMOIJF__CCTOR_OFFSET))();
	}
};
