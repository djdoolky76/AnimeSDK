#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LGEOAAADCIJ___C_KOILDBFLIGB_OFFSET UNITYSDK_OFFSET(0x158D2310)
#define LGEOAAADCIJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158D22C0)
#define LGEOAAADCIJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158D2300)

inline static constexpr unsigned int LGEOAAADCIJ___c_TypeDefinitionIndex = 76699;

class LGEOAAADCIJ___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LGEOAAADCIJ___c_TypeDefinitionIndex)->GetStaticField(0x38450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LGEOAAADCIJ___c_TypeDefinitionIndex)->GetStaticField(0x38458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEOAAADCIJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOAAADCIJ___C__CTOR_OFFSET))(this);
	}

	::System::Void KOILDBFLIGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOAAADCIJ___C_KOILDBFLIGB_OFFSET))(this);
	}
};
