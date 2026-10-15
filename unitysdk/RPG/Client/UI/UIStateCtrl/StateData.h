#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class BaseAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_ADFBIFMIJHM_OFFSET UNITYSDK_OFFSET(0xE34C8B0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xE34C650)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE34CC20)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xE34C9A0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xE34CC00)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_HBFMDJAGMLL_OFFSET UNITYSDK_OFFSET(0xE34CB40)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xE34C140)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE34C6B0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xE34CC10)

namespace RPG::Client::UI::UIStateCtrl
{
	class StateData : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::BaseAction*>* Actions; // 0x18
		::RPG::Client::UIStateCtrl* _OwnerUIStateCtrl_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ADFBIFMIJHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_ADFBIFMIJHM_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_FNACALDOOIF_OFFSET))(this);
		}

		::System::Int32 HBFMDJAGMLL(::RPG::Client::UI::UIStateCtrl::BaseAction* a1, ::RPG::Client::UI::UIStateCtrl::BaseAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::BaseAction*, ::RPG::Client::UI::UIStateCtrl::BaseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_HBFMDJAGMLL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIStateCtrl* get_OwnerUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_OwnerUIStateCtrl(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET))(this, a1);
		}

	};
}
