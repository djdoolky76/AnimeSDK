#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

class LGINJIKKBJA;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x164C2690)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x164C2680)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x164C2660)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x164C2640)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164C26A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfResetChildWindowController_TypeDefinitionIndex = 83708;

	class UISurfResetChildWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_SkillButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
