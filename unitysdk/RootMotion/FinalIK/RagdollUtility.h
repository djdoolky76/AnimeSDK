#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IK; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1F6B6BE0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERLASTIK_OFFSET UNITYSDK_OFFSET(0x1F6B7030)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLLSMOOTH_OFFSET UNITYSDK_OFFSET(0x1F6B5F30)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F6B5C30)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ENABLERAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F6B5B80)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6B6A00)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F6B6AF0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_IKUSED_OFFSET UNITYSDK_OFFSET(0x1F6B6D70)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_ISRAGDOLL_OFFSET UNITYSDK_OFFSET(0x1F6B5BB0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6B6B70)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F6B7510)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONFINALPOSE_OFFSET UNITYSDK_OFFSET(0x1F6B6FA0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RAGDOLLENABLER_OFFSET UNITYSDK_OFFSET(0x1F6B70D0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RECORDVELOCITIES_OFFSET UNITYSDK_OFFSET(0x1F6B7060)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_START_OFFSET UNITYSDK_OFFSET(0x1F6B5F80)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_STORELOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F6B5E20)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6B6680)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B76E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility_TypeDefinitionIndex = 36903;

	class RagdollUtility : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::IK* ik; // 0x18
		::System::Single ragdollToAnimationTime; // 0x20
		::System::Boolean applyIkOnRagdoll; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single applyVelocity; // 0x28
		::System::Single applyAngularVelocity; // 0x2C
		::UnityEngine::Animator* animator; // 0x30
		::Il2CppArray<::System::Object*>* rigidbones; // 0x38
		::Il2CppArray<::System::Object*>* children; // 0x40
		::System::Boolean enableRagdollFlag; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::AnimatorUpdateMode animatorUpdateMode; // 0x4C
		::Il2CppArray<::RootMotion::FinalIK::IK*>* allIKComponents; // 0x50
		::Il2CppArray<::System::Boolean>* fixTransforms; // 0x58
		::System::Single ragdollWeight; // 0x60
		::System::Single ragdollWeightV; // 0x64
		::System::Boolean fixedFrame; // 0x68
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Boolean>* disabledIKComponents; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__CTOR_OFFSET))(this);
		}

		::System::Void EnableRagdoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ENABLERAGDOLL_OFFSET))(this);
		}

		::System::Void DisableRagdoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DisableRagdollSmooth()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_DISABLERAGDOLLSMOOTH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AfterLastIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERLASTIK_OFFSET))(this);
		}

		::System::Void AfterAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_AFTERANIMATION_OFFSET))(this);
		}

		::System::Void OnFinalPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONFINALPOSE_OFFSET))(this);
		}

		::System::Void RagdollEnabler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RAGDOLLENABLER_OFFSET))(this);
		}

		::System::Boolean get_isRagdoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_ISRAGDOLL_OFFSET))(this);
		}

		::System::Void RecordVelocities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RECORDVELOCITIES_OFFSET))(this);
		}

		::System::Boolean get_ikUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_GET_IKUSED_OFFSET))(this);
		}

		::System::Void StoreLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_STORELOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_FIXTRANSFORMS_OFFSET))(this, weight);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_ONDESTROY_OFFSET))(this);
		}
	};
}
