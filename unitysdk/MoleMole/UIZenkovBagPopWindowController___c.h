#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ACTIVATEBAG_B__21_0_OFFSET UNITYSDK_OFFSET(0x171BC020)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171BBFD0)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171BC010)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__TRYTRIGGEREQUIPMENTRELOADFORBAGCLOSE_B__247_0_OFFSET UNITYSDK_OFFSET(0x171BC1E0)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__TRYTRIGGEREQUIPMENTRELOADFORBAGCLOSE_B__247_1_OFFSET UNITYSDK_OFFSET(0x171BC1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c_TypeDefinitionIndex = 91350;

	class UIZenkovBagPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AE30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AE38);
		}
		static ::System::Action** StaticGet___9__247_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AE40);
		}
		static ::System::Action** StaticGet___9__247_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ActivateBag_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ACTIVATEBAG_B__21_0_OFFSET))(this);
		}

		::System::Void _TryTriggerEquipmentReloadForBagClose_b__247_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__TRYTRIGGEREQUIPMENTRELOADFORBAGCLOSE_B__247_0_OFFSET))(this);
		}

		::System::Void _TryTriggerEquipmentReloadForBagClose_b__247_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__TRYTRIGGEREQUIPMENTRELOADFORBAGCLOSE_B__247_1_OFFSET))(this);
		}
	};
}
