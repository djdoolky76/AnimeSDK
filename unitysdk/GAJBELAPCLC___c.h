#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define GAJBELAPCLC___C_JJLGADGNDKC_OFFSET UNITYSDK_OFFSET(0x132456D0)
#define GAJBELAPCLC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13245680)
#define GAJBELAPCLC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132456C0)

inline static constexpr unsigned int GAJBELAPCLC___c_TypeDefinitionIndex = 58986;

class GAJBELAPCLC___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(GAJBELAPCLC___c_TypeDefinitionIndex)->GetStaticField(0x31B90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAJBELAPCLC___c_TypeDefinitionIndex)->GetStaticField(0x31B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJBELAPCLC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBELAPCLC___C__CTOR_OFFSET))(this);
	}

	::System::Void JJLGADGNDKC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GAJBELAPCLC___C_JJLGADGNDKC_OFFSET))(this, KECKGDFIALJ);
	}
};
