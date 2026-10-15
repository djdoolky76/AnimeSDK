#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }

#define EJGIMKACABB_BOFJIFJLFJF_OFFSET UNITYSDK_OFFSET(0x154DB610)
#define EJGIMKACABB_CTOR_OFFSET UNITYSDK_OFFSET(0x154DB880)
#define EJGIMKACABB_DHBABKMMHKC_OFFSET UNITYSDK_OFFSET(0x154DB790)
#define EJGIMKACABB_FCGFGCICKCD_OFFSET UNITYSDK_OFFSET(0x154DB6C0)
#define EJGIMKACABB_FPOOACMAEPJ_OFFSET UNITYSDK_OFFSET(0x154DB710)
#define EJGIMKACABB_GET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x154DB820)
#define EJGIMKACABB_GET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x154DB7E0)
#define EJGIMKACABB_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x154DB840)
#define EJGIMKACABB_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x154DB800)
#define EJGIMKACABB_GET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x154DB860)
#define EJGIMKACABB_HJKJIPCBCHE_OFFSET UNITYSDK_OFFSET(0x154DB4A0)
#define EJGIMKACABB_JIIGKOHLFAO_OFFSET UNITYSDK_OFFSET(0x154DB5A0)
#define EJGIMKACABB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x154DB660)
#define EJGIMKACABB_SET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x154DB830)
#define EJGIMKACABB_SET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x154DB7F0)
#define EJGIMKACABB_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x154DB850)
#define EJGIMKACABB_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x154DB810)
#define EJGIMKACABB_SET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x154DB870)

inline static constexpr unsigned int EJGIMKACABB_TypeDefinitionIndex = 74069;

	class EJGIMKACABB : public ::System::Object
	{
	public:
		::RPG::Client::UI::UIStateCtrl::StateData* _CurrentStateData_k__BackingField; // 0x10
		::RPG::Client::UIStateCtrl* _ParentUIStateCtrl_k__BackingField; // 0x18
		::System::Action* _OnUIStatePlayCompletedAction_k__BackingField; // 0x20
		::RPG::Client::UIStateCtrlStatus _CurrentStatus_k__BackingField; // 0x28
		::System::Single _CurrentPlayTime_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_CTOR_OFFSET))(this);
		}

		::System::Void HJKJIPCBCHE(::RPG::Client::UIStateCtrlStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + EJGIMKACABB_HJKJIPCBCHE_OFFSET))(this, a1);
		}

		::System::Void BOFJIFJLFJF(::RPG::Client::UI::UIStateCtrl::StateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + EJGIMKACABB_BOFJIFJLFJF_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJGIMKACABB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void FCGFGCICKCD(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + EJGIMKACABB_FCGFGCICKCD_OFFSET))(this, a1);
		}

		::System::Void FPOOACMAEPJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJGIMKACABB_FPOOACMAEPJ_OFFSET))(this, a1);
		}

		::System::Void DHBABKMMHKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_DHBABKMMHKC_OFFSET))(this);
		}

		::System::Void JIIGKOHLFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_JIIGKOHLFAO_OFFSET))(this);
		}

		::RPG::Client::UI::UIStateCtrl::StateData* get_CurrentStateData()
		{
			return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_GET_CURRENTSTATEDATA_OFFSET))(this);
		}

		::System::Void set_CurrentStateData(::RPG::Client::UI::UIStateCtrl::StateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + EJGIMKACABB_SET_CURRENTSTATEDATA_OFFSET))(this, a1);
		}

		::System::Action* get_OnUIStatePlayCompletedAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this);
		}

		::System::Void set_OnUIStatePlayCompletedAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJGIMKACABB_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this, a1);
		}

		::System::Single get_CurrentPlayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_GET_CURRENTPLAYTIME_OFFSET))(this);
		}

		::System::Void set_CurrentPlayTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJGIMKACABB_SET_CURRENTPLAYTIME_OFFSET))(this, a1);
		}

		::RPG::Client::UIStateCtrlStatus get_CurrentStatus()
		{
			return ((::RPG::Client::UIStateCtrlStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::RPG::Client::UIStateCtrlStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + EJGIMKACABB_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::UIStateCtrl* get_ParentUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGIMKACABB_GET_PARENTUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_ParentUIStateCtrl(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + EJGIMKACABB_SET_PARENTUISTATECTRL_OFFSET))(this, a1);
		}

	};
