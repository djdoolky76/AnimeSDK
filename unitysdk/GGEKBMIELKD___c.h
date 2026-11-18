#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define GGEKBMIELKD___C_NAKALAHNBGL_OFFSET UNITYSDK_OFFSET(0x13D492A0)
#define GGEKBMIELKD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D49250)
#define GGEKBMIELKD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D49290)

inline static constexpr unsigned int GGEKBMIELKD___c_TypeDefinitionIndex = 64797;

class GGEKBMIELKD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GGEKBMIELKD___c_TypeDefinitionIndex)->GetStaticField(0x4B970);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(GGEKBMIELKD___c_TypeDefinitionIndex)->GetStaticField(0x4B978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGEKBMIELKD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGEKBMIELKD___C__CTOR_OFFSET))(this);
	}

	::System::Void NAKALAHNBGL(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + GGEKBMIELKD___C_NAKALAHNBGL_OFFSET))(this, MNDIBLLFAJI);
	}
};
