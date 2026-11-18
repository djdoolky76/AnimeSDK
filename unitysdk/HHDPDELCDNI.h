#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HHDPDELCDNI_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x10104490)
#define HHDPDELCDNI_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x101044A0)
#define HHDPDELCDNI_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x610D20)
#define HHDPDELCDNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x10104480)
#define HHDPDELCDNI__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int HHDPDELCDNI_TypeDefinitionIndex = 87076;

struct alignas(4) HHDPDELCDNI
{
	static ::HHDPDELCDNI* StaticGet_FGBLILBNEHG()
	{
		return (::HHDPDELCDNI*)Il2CppClass::FromTypeDefinitionIndex(HHDPDELCDNI_TypeDefinitionIndex)->GetStaticField(0xD720);
	}
	::System::Int32 MLNKCNJEOMI; // 0x10

	::System::Void _ctor(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHDPDELCDNI__CTOR_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHDPDELCDNI__CCTOR_OFFSET))();
	}

	/*
	static ::System::Int32 JCIODAGLLGB(::HHDPDELCDNI EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::HHDPDELCDNI))((::PBYTE)hIl2Cpp + HHDPDELCDNI_JCIODAGLLGB_OFFSET))(EGEGIMGMJHN);
	}
	*/

	/*
	static ::HHDPDELCDNI JPPEEOLOGGP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::HHDPDELCDNI(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHDPDELCDNI_JPPEEOLOGGP_OFFSET))(EGEGIMGMJHN);
	}
	*/

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDPDELCDNI_NKDCADABLCL_OFFSET))(this);
	}
};
