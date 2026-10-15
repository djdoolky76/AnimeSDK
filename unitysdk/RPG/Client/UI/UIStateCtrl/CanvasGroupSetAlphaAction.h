#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"
namespace RPG::Client::UI::UIStateCtrl { class CanvasGroupAlphaData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPSETALPHAACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE348CE0)
#define RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPSETALPHAACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE348B90)

namespace RPG::Client::UI::UIStateCtrl
{
	class CanvasGroupSetAlphaAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::CanvasGroupAlphaData*>* CanvasGroupAlphaDatas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPSETALPHAACTION_CTOR_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_CANVASGROUPSETALPHAACTION_MGFLFCHMGPA_OFFSET))(this);
		}

	};
}
