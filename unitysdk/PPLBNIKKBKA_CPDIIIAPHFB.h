#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PPLBNIKKBKA_CPDIIIAPHFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7507B0)
#define PPLBNIKKBKA_CPDIIIAPHFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x750740)
#define PPLBNIKKBKA_CPDIIIAPHFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7507C0)
#define PPLBNIKKBKA_CPDIIIAPHFB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x750820)
#define PPLBNIKKBKA_CPDIIIAPHFB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x750890)
#define PPLBNIKKBKA_CPDIIIAPHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x750720)

inline static constexpr unsigned int PPLBNIKKBKA_CPDIIIAPHFB_TypeDefinitionIndex = 86513;

struct alignas(4) PPLBNIKKBKA_CPDIIIAPHFB
{
	::System::UInt32 AHNMELBMGKL; // 0x10
	::System::UInt32 OGBHHKDIPKH; // 0x14
	::System::Int32 BOJHKAOLNJJ; // 0x18

	::System::Void _ctor(::System::UInt32 EJCBEJMGFAJ, ::System::UInt32 EBFCACIEKBC, ::System::Int32 PIPGGOOELKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB__CTOR_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, PIPGGOOELKG);
	}

	/*
	::System::Boolean Equals(::PPLBNIKKBKA_CPDIIIAPHFB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPLBNIKKBKA_CPDIIIAPHFB))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPLBNIKKBKA_CPDIIIAPHFB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
