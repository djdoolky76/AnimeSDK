#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MMGJJEDNBCH___C_GGIIMBOBNLN_OFFSET UNITYSDK_OFFSET(0x151EBE10)
#define MMGJJEDNBCH___C_PDNJIJHDCHA_OFFSET UNITYSDK_OFFSET(0x151EBE20)
#define MMGJJEDNBCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151EBDC0)
#define MMGJJEDNBCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151EBE00)

inline static constexpr unsigned int MMGJJEDNBCH___c_TypeDefinitionIndex = 61742;

class MMGJJEDNBCH___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MMGJJEDNBCH___c_TypeDefinitionIndex)->GetStaticField(0x41830);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMGJJEDNBCH___c_TypeDefinitionIndex)->GetStaticField(0x41838);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MMGJJEDNBCH___c_TypeDefinitionIndex)->GetStaticField(0x41840);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMGJJEDNBCH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGJJEDNBCH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GGIIMBOBNLN(::System::UInt32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMGJJEDNBCH___C_GGIIMBOBNLN_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Int32 PDNJIJHDCHA(::System::UInt32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMGJJEDNBCH___C_PDNJIJHDCHA_OFFSET))(this, HBJOLKHGGDD);
	}
};
