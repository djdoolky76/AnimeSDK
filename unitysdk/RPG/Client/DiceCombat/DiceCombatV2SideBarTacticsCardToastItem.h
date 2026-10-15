#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastItem.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace System { class Object; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_CANIOAAGNPE_OFFSET UNITYSDK_OFFSET(0xCCA5A80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA5FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET UNITYSDK_OFFSET(0xCCA5CE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_JONEGLMIINF_OFFSET UNITYSDK_OFFSET(0xCCA5D80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCCA5860)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarTacticsCardToastItem_TypeDefinitionIndex = 76208;

	class DiceCombatV2SideBarTacticsCardToastItem : public ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem
	{
	public:
		::RPG::Client::UIStateCtrl* _MonoUIStateCtrlRoot; // 0x30
		::UnityEngine::UI::Image* _TacticsCardIcon; // 0x38
		::RPG::Client::LocalizedText* _TacticsCardName; // 0x40
		::RPG::Client::LocalizedText* _ToastText; // 0x48
		::UnityEngine::Sprite* PLJHFIECCII; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_CTOR_OFFSET))(this);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_SETUPVIEW_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetSupportedMessageTypes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET))(this);
		}

		::System::Void JONEGLMIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_JONEGLMIINF_OFFSET))(this);
		}

		::System::Void CANIOAAGNPE(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTACTICSCARDTOASTITEM_CANIOAAGNPE_OFFSET))(this, a1);
		}

	};
}
