#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BJBNFGBPPJH___C_PHHPPGMJJII_OFFSET UNITYSDK_OFFSET(0x113ED290)
#define BJBNFGBPPJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113ED240)
#define BJBNFGBPPJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113ED280)

inline static constexpr unsigned int BJBNFGBPPJH___c_TypeDefinitionIndex = 46916;

class BJBNFGBPPJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BJBNFGBPPJH___c_TypeDefinitionIndex)->GetStaticField(0x3A440);
	}
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BJBNFGBPPJH___c_TypeDefinitionIndex)->GetStaticField(0x3A448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJBNFGBPPJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNFGBPPJH___C__CTOR_OFFSET))(this);
	}

	::System::Void PHHPPGMJJII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNFGBPPJH___C_PHHPPGMJJII_OFFSET))(this);
	}
};
