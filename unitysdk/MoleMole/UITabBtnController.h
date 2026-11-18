#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x13BBB540)
#define MOLEMOLE_UITABBTNCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBB550)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnController_TypeDefinitionIndex = 87753;

	class UITabBtnController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::UI::Extension::UITabButton* _AIEMNMPMELA_k__BackingField; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}
	};
}
