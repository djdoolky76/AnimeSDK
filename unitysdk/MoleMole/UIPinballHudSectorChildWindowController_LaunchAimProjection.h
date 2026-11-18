#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_GETDETERMINANT_OFFSET UNITYSDK_OFFSET(0x17BB8D10)
#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYAIMVECTORTOLOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x7B4C00)
#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x17BB87C0)
#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYSCREENPOINTTOAIMVECTOR_OFFSET UNITYSDK_OFFSET(0x7B4BF0)
#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYSOLVEPROJECTEDBASIS_OFFSET UNITYSDK_OFFSET(0x17BB8EE0)
#define MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballHudSectorChildWindowController_LaunchAimProjection_TypeDefinitionIndex = 41725;

	struct alignas(8) UIPinballHudSectorChildWindowController_LaunchAimProjection
	{
		::UnityEngine::Camera* _mainCamera; // 0x10
		::UnityEngine::Vector3 _anchorWorld; // 0x18
		::UnityEngine::Vector3 _tableForward; // 0x24
		::UnityEngine::Vector3 _tableRight; // 0x30
		::UnityEngine::Vector2 _anchorScreen; // 0x3C
		::UnityEngine::Vector2 _rightScreen; // 0x44
		::UnityEngine::Vector2 _forwardScreen; // 0x4C

		::System::Void _ctor(::UnityEngine::Camera* mainCamera, ::UnityEngine::Vector3 anchorWorld, ::UnityEngine::Vector3 tableForward, ::UnityEngine::Vector3 tableRight, ::UnityEngine::Vector2 anchorScreen, ::UnityEngine::Vector2 rightScreen, ::UnityEngine::Vector2 forwardScreen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION__CTOR_OFFSET))(this, mainCamera, anchorWorld, tableForward, tableRight, anchorScreen, rightScreen, forwardScreen);
		}

		/*
		static ::System::Boolean TryCreate(::UnityEngine::Camera* mainCamera, ::UnityEngine::Vector3 anchorWorld, ::UnityEngine::Vector3 tableForward, ::MoleMole::UIPinballHudSectorChildWindowController_LaunchAimProjection& projection)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::UIPinballHudSectorChildWindowController_LaunchAimProjection&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYCREATE_OFFSET))(mainCamera, anchorWorld, tableForward, projection);
		}
		*/

		::System::Boolean TryScreenPointToAimVector(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Vector2& aimVector)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYSCREENPOINTTOAIMVECTOR_OFFSET))(this, screenPoint, aimVector);
		}

		::System::Boolean TryAimVectorToLocalDirection(::UnityEngine::Vector2 aimVector, ::UnityEngine::RectTransform* localRoot, ::UnityEngine::Camera* uiCamera, ::UnityEngine::Vector2& localDirection)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYAIMVECTORTOLOCALDIRECTION_OFFSET))(this, aimVector, localRoot, uiCamera, localDirection);
		}

		static ::System::Single GetDeterminant(::UnityEngine::Vector2 rightScreen, ::UnityEngine::Vector2 forwardScreen)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_GETDETERMINANT_OFFSET))(rightScreen, forwardScreen);
		}

		static ::System::Boolean TrySolveProjectedBasis(::UnityEngine::Vector2 rightScreen, ::UnityEngine::Vector2 forwardScreen, ::UnityEngine::Vector2 aimScreen, ::UnityEngine::Vector2& direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLHUDSECTORCHILDWINDOWCONTROLLER_LAUNCHAIMPROJECTION_TRYSOLVEPROJECTEDBASIS_OFFSET))(rightScreen, forwardScreen, aimScreen, direction);
		}
	};
}
