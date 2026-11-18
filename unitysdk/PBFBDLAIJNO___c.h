#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PBFBDLAIJNO___C_EJICFECIHGO_OFFSET UNITYSDK_OFFSET(0x1A7E2A00)
#define PBFBDLAIJNO___C_MIHFLNDAKIL_OFFSET UNITYSDK_OFFSET(0x1A7E29F0)
#define PBFBDLAIJNO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7E29A0)
#define PBFBDLAIJNO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E29E0)

inline static constexpr unsigned int PBFBDLAIJNO___c_TypeDefinitionIndex = 57121;

class PBFBDLAIJNO___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__172_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBFBDLAIJNO___c_TypeDefinitionIndex)->GetStaticField(0x3CED0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBFBDLAIJNO___c_TypeDefinitionIndex)->GetStaticField(0x3CED8);
	}
	static ::System::Action** StaticGet___9__173_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBFBDLAIJNO___c_TypeDefinitionIndex)->GetStaticField(0x3CEE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFBDLAIJNO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO___C__CTOR_OFFSET))(this);
	}

	::System::Void MIHFLNDAKIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO___C_MIHFLNDAKIL_OFFSET))(this);
	}

	::System::Void EJICFECIHGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO___C_EJICFECIHGO_OFFSET))(this);
	}
};
