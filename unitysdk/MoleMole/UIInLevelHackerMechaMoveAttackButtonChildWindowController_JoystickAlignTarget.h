#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELHACKERMECHAMOVEATTACKBUTTONCHILDWINDOWCONTROLLER_JOYSTICKALIGNTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0x187D9020)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelHackerMechaMoveAttackButtonChildWindowController_JoystickAlignTarget_TypeDefinitionIndex = 68570;

	struct alignas(8) UIInLevelHackerMechaMoveAttackButtonChildWindowController_JoystickAlignTarget
	{
		::UnityEngine::RectTransform* Rect; // 0x10
		::UnityEngine::Vector2 OriginLocalPos; // 0x18

		/*
		static ::MoleMole::UIInLevelHackerMechaMoveAttackButtonChildWindowController_JoystickAlignTarget Create(::UnityEngine::RectTransform* rect)
		{
			return ((::MoleMole::UIInLevelHackerMechaMoveAttackButtonChildWindowController_JoystickAlignTarget(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELHACKERMECHAMOVEATTACKBUTTONCHILDWINDOWCONTROLLER_JOYSTICKALIGNTARGET_CREATE_OFFSET))(rect);
		}
		*/
	};
}
