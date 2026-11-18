#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

class LGINJIKKBJA;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x13B1DA90)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x13B1DA80)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x13B1DA60)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x13B1DA40)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1DAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfSlowDownChildWindowController_TypeDefinitionIndex = 43452;

	class UISurfSlowDownChildWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_SkillButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
