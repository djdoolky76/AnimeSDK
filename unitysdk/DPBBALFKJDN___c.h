#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DPBBALFKJDN___C_AENIKKLCHLM_OFFSET UNITYSDK_OFFSET(0x106105D0)
#define DPBBALFKJDN___C_MKOIPEIACJF_OFFSET UNITYSDK_OFFSET(0x106105E0)
#define DPBBALFKJDN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10610580)
#define DPBBALFKJDN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106105C0)

inline static constexpr unsigned int DPBBALFKJDN___c_TypeDefinitionIndex = 90241;

class DPBBALFKJDN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPBBALFKJDN___c_TypeDefinitionIndex)->GetStaticField(0x405A0);
	}
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DPBBALFKJDN___c_TypeDefinitionIndex)->GetStaticField(0x405A8);
	}
	static ::System::Action** StaticGet___9__14_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DPBBALFKJDN___c_TypeDefinitionIndex)->GetStaticField(0x405B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBBALFKJDN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBBALFKJDN___C__CTOR_OFFSET))(this);
	}

	::System::Void AENIKKLCHLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBBALFKJDN___C_AENIKKLCHLM_OFFSET))(this);
	}

	::System::Void MKOIPEIACJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBBALFKJDN___C_MKOIPEIACJF_OFFSET))(this);
	}
};
