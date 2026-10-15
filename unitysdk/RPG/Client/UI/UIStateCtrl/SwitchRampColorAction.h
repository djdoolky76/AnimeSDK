#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"
namespace RPG::Client::UI::UIStateCtrl { class SwitchRampColorData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class IRampColor; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE3503E0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE34F9D0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_NHGKDJCCNKB_OFFSET UNITYSDK_OFFSET(0xE34FB90)

namespace RPG::Client::UI::UIStateCtrl
{
	class SwitchRampColorAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::SwitchRampColorData*>* SwitchRampColorDatas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_CTOR_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void NHGKDJCCNKB(::UnityEngine::UI::IRampColor* a1, ::RPG::Client::UI::UIStateCtrl::SwitchRampColorData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::IRampColor*, ::RPG::Client::UI::UIStateCtrl::SwitchRampColorData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_NHGKDJCCNKB_OFFSET))(this, a1, a2);
		}

	};
}
