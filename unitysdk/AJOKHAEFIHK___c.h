#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AJOKHAEFIHK___C_MDLIGFAPCFA_OFFSET UNITYSDK_OFFSET(0x14215750)
#define AJOKHAEFIHK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14215700)
#define AJOKHAEFIHK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14215740)

inline static constexpr unsigned int AJOKHAEFIHK___c_TypeDefinitionIndex = 42288;

class AJOKHAEFIHK___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__11_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AJOKHAEFIHK___c_TypeDefinitionIndex)->GetStaticField(0x47B40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AJOKHAEFIHK___c_TypeDefinitionIndex)->GetStaticField(0x47B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJOKHAEFIHK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOKHAEFIHK___C__CTOR_OFFSET))(this);
	}

	::System::Void MDLIGFAPCFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOKHAEFIHK___C_MDLIGFAPCFA_OFFSET))(this);
	}
};
