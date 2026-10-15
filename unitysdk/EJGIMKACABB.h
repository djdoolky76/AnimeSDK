#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }

#define EJGIMKACABB_BOFJIFJLFJF_OFFSET UNITYSDK_OFFSET(0x154CF7F0)
#define EJGIMKACABB_CTOR_OFFSET UNITYSDK_OFFSET(0x154CFA60)
#define EJGIMKACABB_DHBABKMMHKC_OFFSET UNITYSDK_OFFSET(0x154CF970)
#define EJGIMKACABB_FCGFGCICKCD_OFFSET UNITYSDK_OFFSET(0x154CF8A0)
#define EJGIMKACABB_FPOOACMAEPJ_OFFSET UNITYSDK_OFFSET(0x154CF8F0)
#define EJGIMKACABB_GET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x154CFA00)
#define EJGIMKACABB_GET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x154CF9C0)
#define EJGIMKACABB_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x154CFA20)
#define EJGIMKACABB_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x154CF9E0)
#define EJGIMKACABB_GET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x154CFA40)
#define EJGIMKACABB_HJKJIPCBCHE_OFFSET UNITYSDK_OFFSET(0x154CF680)
#define EJGIMKACABB_JIIGKOHLFAO_OFFSET UNITYSDK_OFFSET(0x154CF780)
#define EJGIMKACABB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x154CF840)
#define EJGIMKACABB_SET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x154CFA10)
#define EJGIMKACABB_SET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x154CF9D0)
#define EJGIMKACABB_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x154CFA30)
#define EJGIMKACABB_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x154CF9F0)
#define EJGIMKACABB_SET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x154CFA50)

inline static constexpr unsigned int EJGIMKACABB_TypeDefinitionIndex = 74068;

	class EJGIMKACABB : public ::System::Object
	{
	public:
		::System::Action* _OnUIStatePlayCompletedAction_k__BackingField; // 0x10
		::RPG::Client::UI::UIStateCtrl::StateData* _CurrentStateData_k__BackingField; // 0x18
		::RPG::Client::UIStateCtrl* _ParentUIStateCtrl_k__BackingField; // 0x20
		::System::Single _CurrentPlayTime_k__BackingField; // 0x28
		::RPG::Client::UIStateCtrlStatus _CurrentStatus_k__BackingField; // 0x2C
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
