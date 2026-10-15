#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/ActionStatus.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE348AF0)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xE3484E0)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xE348B00)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xE348B60)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE348B40)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xE348630)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xE348B70)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xE348B50)

namespace RPG::Client::UI::UIStateCtrl
{
	class BaseAction : public ::System::Object
	{
	public:
		::System::Single StartTime; // 0x10
		::RPG::Client::UI::UIStateCtrl::ActionStatus _Status_k__BackingField; // 0x14
		::RPG::Client::UIStateCtrl* _OwnerUIStateCtrl_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_CTOR_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::RPG::Client::UI::UIStateCtrl::ActionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::ActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_FNACALDOOIF_OFFSET))(this);
		}

		::RPG::Client::UI::UIStateCtrl::ActionStatus get_Status()
		{
			return ((::RPG::Client::UI::UIStateCtrl::ActionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::UI::UIStateCtrl::ActionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::ActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::UIStateCtrl* get_OwnerUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_OWNERUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_OwnerUIStateCtrl(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_OWNERUISTATECTRL_OFFSET))(this, a1);
		}

	};
}
