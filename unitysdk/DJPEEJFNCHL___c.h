#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKMCFFKLLKE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DJPEEJFNCHL___C_GKOFBFMLGKA_OFFSET UNITYSDK_OFFSET(0xFDC1E20)
#define DJPEEJFNCHL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC1DD0)
#define DJPEEJFNCHL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC1E10)

inline static constexpr unsigned int DJPEEJFNCHL___c_TypeDefinitionIndex = 73767;

class DJPEEJFNCHL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJPEEJFNCHL___c_TypeDefinitionIndex)->GetStaticField(0x404E0);
	}
	static ::System::Func_2<::JKMCFFKLLKE*, ::System::Int32>** StaticGet___9__55_1()
	{
		return (::System::Func_2<::JKMCFFKLLKE*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DJPEEJFNCHL___c_TypeDefinitionIndex)->GetStaticField(0x404E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPEEJFNCHL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPEEJFNCHL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GKOFBFMLGKA(::JKMCFFKLLKE* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::JKMCFFKLLKE*))((::PBYTE)hIl2Cpp + DJPEEJFNCHL___C_GKOFBFMLGKA_OFFSET))(this, IPMMCGDMODG);
	}
};
