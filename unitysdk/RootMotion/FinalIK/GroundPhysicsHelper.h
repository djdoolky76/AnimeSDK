#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RootMotion::FinalIK { class GroundPhysicsHelper_CapsuleCastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_RaycastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_SphereCastDelegate; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1F0AB8C0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0AC450)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSCAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1F0ABCB0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSRAYCAST_OFFSET UNITYSDK_OFFSET(0x1F0AAE60)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSSPHERECAST_OFFSET UNITYSDK_OFFSET(0x1F0AB590)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F0AAC20)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1F0AB250)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundPhysicsHelper_TypeDefinitionIndex = 47016;

	class GroundPhysicsHelper : public ::System::Object
	{
	public:
		static ::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate** StaticGet_OverrideSphereCastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate**)UnitySDK::FromName("RootMotion.FinalIK", "GroundPhysicsHelper")->GetStaticField(0x31510);
		}

		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::UnityEngine::RaycastHit>*>** StaticGet_HitCaches()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::UnityEngine::RaycastHit>*>**)UnitySDK::FromName("RootMotion.FinalIK", "GroundPhysicsHelper")->GetStaticField(0x31518);
		}

		static ::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate** StaticGet_OverrideCapsuleCastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate**)UnitySDK::FromName("RootMotion.FinalIK", "GroundPhysicsHelper")->GetStaticField(0x31520);
		}

		static ::RootMotion::FinalIK::GroundPhysicsHelper_RaycastDelegate** StaticGet_OverrideRaycastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_RaycastDelegate**)UnitySDK::FromName("RootMotion.FinalIK", "GroundPhysicsHelper")->GetStaticField(0x31528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CCTOR_OFFSET))();
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RootMotion::FinalIK::GroundRaycastHit a3, ::System::Single a4, ::UnityEngine::LayerMask a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCAST_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean SphereCast(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::RootMotion::FinalIK::GroundRaycastHit a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean CapsuleCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::RootMotion::FinalIK::GroundRaycastHit a5, ::System::Single a6, ::UnityEngine::LayerMask a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean PhysicsRaycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RootMotion::FinalIK::GroundRaycastHit a4, ::UnityEngine::LayerMask a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSRAYCAST_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean PhysicsSphereCast(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RootMotion::FinalIK::GroundRaycastHit a5, ::UnityEngine::LayerMask a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSSPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean PhysicsCapsuleCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::RootMotion::FinalIK::GroundRaycastHit a6, ::UnityEngine::LayerMask a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSCAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
}
