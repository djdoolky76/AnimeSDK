#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LIBOIKJGAIH_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x15DFEC00)
#define LIBOIKJGAIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DFEBB0)
#define LIBOIKJGAIH__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int LIBOIKJGAIH_TypeDefinitionIndex = 84259;

struct alignas(8) LIBOIKJGAIH
{
	static ::LIBOIKJGAIH* StaticGet_FDJHEBHLJLD()
	{
		return (::LIBOIKJGAIH*)Il2CppClass::FromTypeDefinitionIndex(LIBOIKJGAIH_TypeDefinitionIndex)->GetStaticField(0x44DD0);
	}
	::ICEBNIECGBK DIGFNJPEALG; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* AMJIHFDPIFH; // 0x18

	::System::Void _ctor(::ICEBNIECGBK IOKOLJDCKPN, ::System::String* AMJIHFDPIFH)
	{
		return ((::System::Void(*)(::PVOID, ::ICEBNIECGBK, ::System::String*))((::PBYTE)hIl2Cpp + LIBOIKJGAIH__CTOR_OFFSET))(this, IOKOLJDCKPN, AMJIHFDPIFH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIBOIKJGAIH__CCTOR_OFFSET))();
	}

	/*
	static ::LIBOIKJGAIH JPPEEOLOGGP(::ICEBNIECGBK DIGFNJPEALG)
	{
		return ((::LIBOIKJGAIH(*)(::ICEBNIECGBK))((::PBYTE)hIl2Cpp + LIBOIKJGAIH_JPPEEOLOGGP_OFFSET))(DIGFNJPEALG);
	}
	*/
};
