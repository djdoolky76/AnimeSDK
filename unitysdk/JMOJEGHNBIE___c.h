#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JMOJEGHNBIE___C_CGHBAEBKLIO_OFFSET UNITYSDK_OFFSET(0x13CCF560)
#define JMOJEGHNBIE___C_PPHJHMJPICI_OFFSET UNITYSDK_OFFSET(0x13CCF550)
#define JMOJEGHNBIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CCF500)
#define JMOJEGHNBIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCF540)

inline static constexpr unsigned int JMOJEGHNBIE___c_TypeDefinitionIndex = 39601;

class JMOJEGHNBIE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__12_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JMOJEGHNBIE___c_TypeDefinitionIndex)->GetStaticField(0x326D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMOJEGHNBIE___c_TypeDefinitionIndex)->GetStaticField(0x326D8);
	}
	static ::System::Action** StaticGet___9__10_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JMOJEGHNBIE___c_TypeDefinitionIndex)->GetStaticField(0x326E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOJEGHNBIE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE___C__CTOR_OFFSET))(this);
	}

	::System::Void PPHJHMJPICI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE___C_PPHJHMJPICI_OFFSET))(this);
	}

	::System::Void CGHBAEBKLIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE___C_CGHBAEBKLIO_OFFSET))(this);
	}
};
