#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE33E1C0)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_ELPPOONIMFI_OFFSET UNITYSDK_OFFSET(0xE33EE30)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE33EC50)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_PNPAIJFMICP_OFFSET UNITYSDK_OFFSET(0xE33ED40)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int InstantAction_TypeDefinitionIndex = 74067;

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
