#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NOHGMPIMCEF___C_DJODCJJPDLD_OFFSET UNITYSDK_OFFSET(0xE0B2EA0)
#define NOHGMPIMCEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0B2E50)
#define NOHGMPIMCEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B2E90)

inline static constexpr unsigned int NOHGMPIMCEF___c_TypeDefinitionIndex = 90744;

class NOHGMPIMCEF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__76_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NOHGMPIMCEF___c_TypeDefinitionIndex)->GetStaticField(0x4ED60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOHGMPIMCEF___c_TypeDefinitionIndex)->GetStaticField(0x4ED68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHGMPIMCEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF___C__CTOR_OFFSET))(this);
	}

	::System::Void DJODCJJPDLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF___C_DJODCJJPDLD_OFFSET))(this);
	}
};
