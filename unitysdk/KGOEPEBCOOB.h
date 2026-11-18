#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define KGOEPEBCOOB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1770F240)
#define KGOEPEBCOOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7AB730)
#define KGOEPEBCOOB_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7AB910)
#define KGOEPEBCOOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7AB810)
#define KGOEPEBCOOB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7AB8B0)
#define KGOEPEBCOOB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7AB960)
#define KGOEPEBCOOB_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x7AB860)
#define KGOEPEBCOOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1770F130)
#define KGOEPEBCOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int KGOEPEBCOOB_TypeDefinitionIndex = 83280;

struct alignas(4) KGOEPEBCOOB
{
	static ::KGOEPEBCOOB* StaticGet_JHMGAOKMFIF()
	{
		return (::KGOEPEBCOOB*)Il2CppClass::FromTypeDefinitionIndex(KGOEPEBCOOB_TypeDefinitionIndex)->GetStaticField(0xCAF0);
	}
	::System::Int32 ACHBBPJIBIE; // 0x10
	::System::Int32 MAEPEMGPJPL; // 0x14

	::System::Void _ctor(::System::Int32 ACHBBPJIBIE, ::System::Int32 MAEPEMGPJPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KGOEPEBCOOB__CTOR_OFFSET))(this, ACHBBPJIBIE, MAEPEMGPJPL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGOEPEBCOOB__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Boolean PADHEHLKBDO(::KGOEPEBCOOB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KGOEPEBCOOB))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_FFCPIEDHBDP_OFFSET))(this);
	}

	/*
	static ::KGOEPEBCOOB COKNIICCODC(::System::Int32 BJHBBAEHBIJ)
	{
		return ((::KGOEPEBCOOB(*)(::System::Int32))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_COKNIICCODC_OFFSET))(BJHBBAEHBIJ);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGOEPEBCOOB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
