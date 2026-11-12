#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HAMCAOCNLGB;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftControlBinder; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0639B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_BTNEXIT_OFFSET UNITYSDK_OFFSET(0xE062760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE060850)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_FADEINPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0xE0625A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE060830)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xE0628F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONELOADING_OFFSET UNITYSDK_OFFSET(0xE062C10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xE062A80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE0608F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xE062DA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE060890)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xE060840)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftControl_TypeDefinitionIndex = 82681;

	class MechCraftCraftControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* _Owner_k__BackingField; // 0x18
		::HAMCAOCNLGB* LFGMLJCCPCH; // 0x20
		::RPG::Client::MechCraft::View::MechCraftCraftControlBinder* _Binder; // 0x28
		::System::String* _AnimEventSettle; // 0x30
		::System::String* _AnimEventCloseTileVfx; // 0x38
		::RPG::Client::TextID TextIDConfirmExit; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Owner()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_OWNER_OFFSET))(this, a1);
		}

		::HAMCAOCNLGB* get_Content()
		{
			return ((::HAMCAOCNLGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::HAMCAOCNLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAMCAOCNLGB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Single get_FadeInProtectSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_FADEINPROTECTSECONDS_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExit()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_BTNEXIT_OFFSET))(this);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_ZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_ZoneLoading()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_GET_ZONELOADING_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::HAMCAOCNLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAMCAOCNLGB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
