#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE348D30)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_ELPPOONIMFI_OFFSET UNITYSDK_OFFSET(0xE3499A0)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE3497C0)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_PNPAIJFMICP_OFFSET UNITYSDK_OFFSET(0xE3498B0)

namespace RPG::Client::UI::UIStateCtrl
{
	class InstantAction : public ::RPG::Client::UI::UIStateCtrl::BaseAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PNPAIJFMICP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_PNPAIJFMICP_OFFSET))(this);
		}

		::System::String* ELPPOONIMFI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_ELPPOONIMFI_OFFSET))(this);
		}

	};
}
