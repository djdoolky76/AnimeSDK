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

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB6FD850)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB70B7B0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0xB70DE60)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0xB70B820)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0xB70E0F0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0xB70B790)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0xB70BBF0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0xB70DAE0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0xB7028A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 47028;

	class GroundingThread : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* legs; // 0x10
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x18
		::RootMotion::IKJob::IKTransformRef root; // 0x48
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0x58
		::System::Single IKPositionWeight; // 0x7C
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0x80
		::System::Boolean isGrounded; // 0x98
		::System::Boolean rotateSolver; // 0x99
		::System::Byte _padding0[0x2];
		::System::Single liftPelvisWeight; // 0x9C
		::UnityEngine::Vector3 deltaRootPosition; // 0xA0
		::System::Single heightOffset; // 0xAC
		::System::Single maxFootRotationRollAngle; // 0xB0
		::System::Single footSpeed; // 0xB4
		::UnityEngine::Quaternion lastRootRotation; // 0xB8
		::System::Single footRotationSpeed; // 0xC8
		::System::Single prediction; // 0xCC
		::System::Single maxStep; // 0xD0
		::UnityEngine::Quaternion deltaRootRotation; // 0xD4
		::System::Single rootSphereCastRadius; // 0xE4
		::System::Single maxFootRotationAngle; // 0xE8
		::System::Single lowerPelvisWeight; // 0xEC
		::System::Single IKRotationWeight; // 0xF0
		::UnityEngine::LayerMask layers; // 0xF4
		::System::Single pelvisDamper; // 0xF8
		::System::Boolean IsRootMove; // 0xFC
		::System::Boolean stayOriginIfNoGround; // 0xFD
		::System::Boolean useToeBone; // 0xFE
		::System::Boolean bUseStepUp; // 0xFF
		::UnityEngine::Vector3 lastRootPosition; // 0x100
		::System::Single pelvisSpeed; // 0x10C
		::System::Single footRadius; // 0x110
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
