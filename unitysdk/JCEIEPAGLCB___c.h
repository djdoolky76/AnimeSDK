#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JCEIEPAGLCB___C_FJEHFMEHCMG_OFFSET UNITYSDK_OFFSET(0x1306BB70)
#define JCEIEPAGLCB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1306BB20)
#define JCEIEPAGLCB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1306BB60)

inline static constexpr unsigned int JCEIEPAGLCB___c_TypeDefinitionIndex = 76666;

class JCEIEPAGLCB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__52_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JCEIEPAGLCB___c_TypeDefinitionIndex)->GetStaticField(0x48190);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCEIEPAGLCB___c_TypeDefinitionIndex)->GetStaticField(0x48198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCEIEPAGLCB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEIEPAGLCB___C__CTOR_OFFSET))(this);
	}

	::System::Void FJEHFMEHCMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEIEPAGLCB___C_FJEHFMEHCMG_OFFSET))(this);
	}
};
