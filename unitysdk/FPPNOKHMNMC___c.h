#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FPPNOKHMNMC___C_GCMJNFKIMNF_OFFSET UNITYSDK_OFFSET(0x15E7E300)
#define FPPNOKHMNMC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E7E2B0)
#define FPPNOKHMNMC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7E2F0)

inline static constexpr unsigned int FPPNOKHMNMC___c_TypeDefinitionIndex = 81892;

class FPPNOKHMNMC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FPPNOKHMNMC___c_TypeDefinitionIndex)->GetStaticField(0x462A0);
	}
	static ::System::Action** StaticGet___9__2_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FPPNOKHMNMC___c_TypeDefinitionIndex)->GetStaticField(0x462A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPNOKHMNMC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNOKHMNMC___C__CTOR_OFFSET))(this);
	}

	::System::Void GCMJNFKIMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNOKHMNMC___C_GCMJNFKIMNF_OFFSET))(this);
	}
};
