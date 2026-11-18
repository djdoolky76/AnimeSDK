#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKLMEMBPANH;
namespace System { template <typename T> class Comparison_1; }

#define PECMIBGENCL___C_GNNDDHOKJHA_OFFSET UNITYSDK_OFFSET(0x119637F0)
#define PECMIBGENCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119637A0)
#define PECMIBGENCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119637E0)

inline static constexpr unsigned int PECMIBGENCL___c_TypeDefinitionIndex = 41038;

class PECMIBGENCL___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::FKLMEMBPANH*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::FKLMEMBPANH*>**)Il2CppClass::FromTypeDefinitionIndex(PECMIBGENCL___c_TypeDefinitionIndex)->GetStaticField(0x42980);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PECMIBGENCL___c_TypeDefinitionIndex)->GetStaticField(0x42988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PECMIBGENCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECMIBGENCL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GNNDDHOKJHA(::FKLMEMBPANH* DPGFPHIMDEL, ::FKLMEMBPANH* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::FKLMEMBPANH*, ::FKLMEMBPANH*))((::PBYTE)hIl2Cpp + PECMIBGENCL___C_GNNDDHOKJHA_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
