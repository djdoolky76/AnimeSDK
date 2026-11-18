#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

class LGINJIKKBJA;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x15630C80)
#define MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x15630C70)
#define MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x15630C50)
#define MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x15630C30)
#define MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15630C90)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfSpeedUpChildWindowController_TypeDefinitionIndex = 51347;

	class UISurfSpeedUpChildWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_SkillButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSPEEDUPCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
