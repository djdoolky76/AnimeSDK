#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/RootMotion/NativeCurve.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0AF390)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F0BCFF0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0x1F0BF680)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x1F0BD060)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x1F0BF910)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x1F0BCFD0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x1F0BD430)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1F0BF300)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F0B43E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 47028;

	class GroundingThread : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* legs; // 0x10
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x18
		::RootMotion::IKJob::IKTransformRef root; // 0x48
		::System::Boolean stayOriginIfNoGround; // 0x58
		::System::Boolean rotateSolver; // 0x59
		::System::Byte _padding0[0x2];
		::System::Single maxStep; // 0x5C
		::System::Single pelvisDamper; // 0x60
		::System::Boolean isGrounded; // 0x64
		::System::Boolean IsRootMove; // 0x65
		::System::Boolean bUseStepUp; // 0x66
		::System::Boolean useToeBone; // 0x67
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0x68
		::System::Single lowerPelvisWeight; // 0x8C
		::System::Single footRotationSpeed; // 0x90
		::UnityEngine::LayerMask layers; // 0x94
		::System::Single rootSphereCastRadius; // 0x98
		::System::Single IKRotationWeight; // 0x9C
		::System::Single heightOffset; // 0xA0
		::System::Single prediction; // 0xA4
		::UnityEngine::Quaternion deltaRootRotation; // 0xA8
		::System::Single pelvisSpeed; // 0xB8
		::UnityEngine::Vector3 deltaRootPosition; // 0xBC
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0xC8
		::System::Single footSpeed; // 0xE0
		::System::Single maxFootRotationRollAngle; // 0xE4
		::System::Single IKPositionWeight; // 0xE8
		::System::Single liftPelvisWeight; // 0xEC
		::UnityEngine::Vector3 lastRootPosition; // 0xF0
		::System::Single footRadius; // 0xFC
		::System::Single maxFootRotationAngle; // 0x100
		::UnityEngine::Quaternion lastRootRotation; // 0x104
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_CTOR_OFFSET))(this);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET))(this, a1);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET))(this);
		}

	};
}
