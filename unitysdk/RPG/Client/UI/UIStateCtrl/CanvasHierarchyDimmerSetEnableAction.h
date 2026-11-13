#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"
namespace RPG::Client { class CanvasHierarchyDimmer; }

#define RPG_CLIENT_UI_UISTATECTRL_CANVASHIERARCHYDIMMERSETENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C5810)
#define RPG_CLIENT_UI_UISTATECTRL_CANVASHIERARCHYDIMMERSETENABLEACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1C9C5770)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int CanvasHierarchyDimmerSetEnableAction_TypeDefinitionIndex = 76191;

	class CanvasHierarchyDimmerSetEnableAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::RPG::Client::CanvasHierarchyDimmer* Dimmer; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_CANVASHIERARCHYDIMMERSETENABLEACTION_CTOR_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_CANVASHIERARCHYDIMMERSETENABLEACTION_MGFLFCHMGPA_OFFSET))(this);
		}

	};
}
