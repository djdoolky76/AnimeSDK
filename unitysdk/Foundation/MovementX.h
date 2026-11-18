#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_MOVEMENTX_MOVEBYFORCEPUSHING_WITHPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19B60)
#define FOUNDATION_MOVEMENTX_MOVEBYVELOCITY_WITHPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19C00)
#define FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_1_OFFSET UNITYSDK_OFFSET(0x1DB19840)
#define FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_2_OFFSET UNITYSDK_OFFSET(0x1DB198E0)
#define FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_3_OFFSET UNITYSDK_OFFSET(0x1DB19730)
#define FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19650)
#define FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_1_OFFSET UNITYSDK_OFFSET(0x1DB19450)
#define FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_2_OFFSET UNITYSDK_OFFSET(0x1DB19560)
#define FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_3_OFFSET UNITYSDK_OFFSET(0x1DB193C0)
#define FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19280)
#define FOUNDATION_MOVEMENTX_MOVETOWARDS_WITHPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19CA0)
#define FOUNDATION_MOVEMENTX_TELEPORTFORWARD_NOPHYSICS_1_OFFSET UNITYSDK_OFFSET(0x1DB19A00)
#define FOUNDATION_MOVEMENTX_TELEPORTFORWARD_NOPHYSICS_OFFSET UNITYSDK_OFFSET(0x1DB19990)

namespace Foundation
{
	inline static constexpr unsigned int MovementX_TypeDefinitionIndex = 8307;

	class MovementX : public ::System::Object
	{
	public:
		static ::System::Void MoveTowards_NoPhysics(::UnityEngine::GameObject* go, ::UnityEngine::GameObject* destGO, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_OFFSET))(go, destGO, speed);
		}

		static ::System::Void MoveTowards_NoPhysics_1(::UnityEngine::Transform* goTrans, ::UnityEngine::Transform* destTrans, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_1_OFFSET))(goTrans, destTrans, speed);
		}

		static ::System::Void MoveTowards_NoPhysics_2(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 destV, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_2_OFFSET))(go, destV, speed);
		}

		static ::System::Void MoveTowards_NoPhysics_3(::UnityEngine::Transform* goTrans, ::UnityEngine::Vector3 destV, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDS_NOPHYSICS_3_OFFSET))(goTrans, destV, speed);
		}

		static ::System::Void MoveTowardsInterpolate_NoPhysics(::UnityEngine::GameObject* go, ::UnityEngine::GameObject* destGo, ::System::Single lerpPct)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_OFFSET))(go, destGo, lerpPct);
		}

		static ::System::Void MoveTowardsInterpolate_NoPhysics_1(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 destV, ::System::Single lerpPct)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_1_OFFSET))(go, destV, lerpPct);
		}

		static ::System::Void MoveTowardsInterpolate_NoPhysics_2(::UnityEngine::Transform* go, ::UnityEngine::Transform* destTrans, ::System::Single lerpPct)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_2_OFFSET))(go, destTrans, lerpPct);
		}

		static ::System::Void MoveTowardsInterpolate_NoPhysics_3(::UnityEngine::Transform* goTrans, ::UnityEngine::Vector3 destV, ::System::Single lerpPct)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDSINTERPOLATE_NOPHYSICS_3_OFFSET))(goTrans, destV, lerpPct);
		}

		static ::System::Void TeleportForward_NoPhysics(::UnityEngine::GameObject* go, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_TELEPORTFORWARD_NOPHYSICS_OFFSET))(go, speed);
		}

		static ::System::Void TeleportForward_NoPhysics_1(::UnityEngine::Transform* go, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_TELEPORTFORWARD_NOPHYSICS_1_OFFSET))(go, speed);
		}

		static ::System::Void MoveByForcePushing_WithPhysics(::UnityEngine::Rigidbody* go, ::UnityEngine::Vector3 moveDirection, ::System::Single force)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVEBYFORCEPUSHING_WITHPHYSICS_OFFSET))(go, moveDirection, force);
		}

		static ::System::Void MoveByVelocity_WithPhysics(::UnityEngine::Rigidbody* go, ::UnityEngine::Vector3 movementDirection, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVEBYVELOCITY_WITHPHYSICS_OFFSET))(go, movementDirection, speed);
		}

		static ::System::Void MoveTowards_WithPhysics(::UnityEngine::Rigidbody* go, ::UnityEngine::Vector3 movementDirection, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOVEMENTX_MOVETOWARDS_WITHPHYSICS_OFFSET))(go, movementDirection, speed);
		}
	};
}
