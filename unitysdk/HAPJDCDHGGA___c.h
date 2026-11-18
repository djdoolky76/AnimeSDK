#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HAPJDCDHGGA___C_CIEFBNAPMDG_OFFSET UNITYSDK_OFFSET(0x15B39BF0)
#define HAPJDCDHGGA___C_EJBMMHJJGBB_OFFSET UNITYSDK_OFFSET(0x15B39E30)
#define HAPJDCDHGGA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B39BA0)
#define HAPJDCDHGGA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B39BE0)

inline static constexpr unsigned int HAPJDCDHGGA___c_TypeDefinitionIndex = 77848;

class HAPJDCDHGGA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HAPJDCDHGGA___c_TypeDefinitionIndex)->GetStaticField(0x47FE0);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HAPJDCDHGGA___c_TypeDefinitionIndex)->GetStaticField(0x47FE8);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HAPJDCDHGGA___c_TypeDefinitionIndex)->GetStaticField(0x47FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPJDCDHGGA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPJDCDHGGA___C__CTOR_OFFSET))(this);
	}

	::System::Void CIEFBNAPMDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPJDCDHGGA___C_CIEFBNAPMDG_OFFSET))(this);
	}

	::System::Void EJBMMHJJGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPJDCDHGGA___C_EJBMMHJJGBB_OFFSET))(this);
	}
};
