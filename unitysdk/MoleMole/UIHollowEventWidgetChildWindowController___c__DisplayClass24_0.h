#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187CA690)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHCHOICEDESC_B__0_OFFSET UNITYSDK_OFFSET(0x187CA6A0)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHCHOICEDESC_B__1_OFFSET UNITYSDK_OFFSET(0x187CA6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetChildWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 42042;

	class UIHollowEventWidgetChildWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Single oPosx1; // 0x10
		::System::Single oPosx2; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshChoiceDesc_b__0(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHCHOICEDESC_B__0_OFFSET))(this, rect);
		}

		::System::Void _RefreshChoiceDesc_b__1(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHCHOICEDESC_B__1_OFFSET))(this, rect);
		}
	};
}
