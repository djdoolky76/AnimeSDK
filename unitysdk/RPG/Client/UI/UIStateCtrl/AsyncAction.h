#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C5510)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1C9C4E80)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_ELPPOONIMFI_OFFSET UNITYSDK_OFFSET(0x1C9C5330)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_GET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1C9C54F0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C9C50B0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_LJCLGKCBKLE_OFFSET UNITYSDK_OFFSET(0x1C9C54B0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9C4F60)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_PNPAIJFMICP_OFFSET UNITYSDK_OFFSET(0x1C9C5270)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_SET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1C9C5500)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int AsyncAction_TypeDefinitionIndex = 76212;

	class AsyncAction : public ::RPG::Client::UI::UIStateCtrl::BaseAction
	{
	public:
		::System::Single Duration; // 0x20
		::System::Single _CurrentCostTime_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PNPAIJFMICP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_PNPAIJFMICP_OFFSET))(this);
		}

		::System::String* ELPPOONIMFI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_ELPPOONIMFI_OFFSET))(this);
		}

		::System::Boolean LJCLGKCBKLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_LJCLGKCBKLE_OFFSET))(this);
		}

		::System::Single get_CurrentCostTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_GET_CURRENTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCostTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_SET_CURRENTCOSTTIME_OFFSET))(this, a1);
		}

	};
}
