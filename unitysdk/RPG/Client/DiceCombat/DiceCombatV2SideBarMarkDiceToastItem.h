#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastItem.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace System { class Object; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA5840)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET UNITYSDK_OFFSET(0xCCA57B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_JONEGLMIINF_OFFSET UNITYSDK_OFFSET(0xCCA5680)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCCA50B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarMarkDiceToastItem_TypeDefinitionIndex = 76207;

	class DiceCombatV2SideBarMarkDiceToastItem : public ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem
	{
	public:
		::UnityEngine::UI::Image* _DiceIcon; // 0x30
		::RPG::Client::LocalizedText* _HintTitle; // 0x38
		::RPG::Client::LocalizedText* _HintDetail; // 0x40
		::UnityEngine::Sprite* PLJHFIECCII; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_CTOR_OFFSET))(this);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_SETUPVIEW_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetSupportedMessageTypes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_GETSUPPORTEDMESSAGETYPES_OFFSET))(this);
		}

		::System::Void JONEGLMIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARMARKDICETOASTITEM_JONEGLMIINF_OFFSET))(this);
		}

	};
}
