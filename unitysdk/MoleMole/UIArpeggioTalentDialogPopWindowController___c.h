#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886C900)
#define MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C940)
#define MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__ONTAKEREWARDSUCCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1886C950)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioTalentDialogPopWindowController___c_TypeDefinitionIndex = 59853;

	class UIArpeggioTalentDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIArpeggioTalentDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C030);
		}
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArpeggioTalentDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTakeRewardSuccess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOTALENTDIALOGPOPWINDOWCONTROLLER___C__ONTAKEREWARDSUCCESS_B__16_0_OFFSET))(this);
		}
	};
}
