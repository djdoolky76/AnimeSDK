#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNHAEMFHHEB;
namespace System { template <typename T> class Action_1; }

#define JFDEDHKHPLK___C_BGCKIPKKPAC_OFFSET UNITYSDK_OFFSET(0x13ACBAE0)
#define JFDEDHKHPLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ACBA90)
#define JFDEDHKHPLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACBAD0)

inline static constexpr unsigned int JFDEDHKHPLK___c_TypeDefinitionIndex = 65759;

class JFDEDHKHPLK___c : public ::System::Object
{
public:
	static ::System::Action_1<::PNHAEMFHHEB*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::PNHAEMFHHEB*>**)Il2CppClass::FromTypeDefinitionIndex(JFDEDHKHPLK___c_TypeDefinitionIndex)->GetStaticField(0x49EF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JFDEDHKHPLK___c_TypeDefinitionIndex)->GetStaticField(0x49EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDEDHKHPLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDHKHPLK___C__CTOR_OFFSET))(this);
	}

	::System::Void BGCKIPKKPAC(::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::PVOID, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK___C_BGCKIPKKPAC_OFFSET))(this, KNENMPAIHBJ);
	}
};
