#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198E7180)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198E71C0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__84_0_OFFSET UNITYSDK_OFFSET(0x198E73F0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__45_0_OFFSET UNITYSDK_OFFSET(0x198E71D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c_TypeDefinitionIndex = 91007;

	class UIAbyssEntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x46DD0);
		}
		static ::System::Action** StaticGet___9__84_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x46DD8);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssEntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x46DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEndTimeTip_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__SHOWENDTIMETIP_B__45_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__84_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__84_0_OFFSET))(this);
		}
	};
}
