#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

class LGINJIKKBJA;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x188DD0F0)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x188DD100)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x188DD0E0)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x188DD0C0)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x188DD0A0)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188DD110)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfTurnLeftChildWindowController_TypeDefinitionIndex = 76079;

	class UISurfTurnLeftChildWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_SkillButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}
	};
}
