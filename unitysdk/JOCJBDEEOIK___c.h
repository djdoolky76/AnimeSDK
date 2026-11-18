#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JOCJBDEEOIK___C_DDHJFOGLGGK_OFFSET UNITYSDK_OFFSET(0x13CD2870)
#define JOCJBDEEOIK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD2820)
#define JOCJBDEEOIK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD2860)

inline static constexpr unsigned int JOCJBDEEOIK___c_TypeDefinitionIndex = 52495;

class JOCJBDEEOIK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOCJBDEEOIK___c_TypeDefinitionIndex)->GetStaticField(0x3E410);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JOCJBDEEOIK___c_TypeDefinitionIndex)->GetStaticField(0x3E418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCJBDEEOIK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCJBDEEOIK___C__CTOR_OFFSET))(this);
	}

	::System::Void DDHJFOGLGGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCJBDEEOIK___C_DDHJFOGLGGK_OFFSET))(this);
	}
};
