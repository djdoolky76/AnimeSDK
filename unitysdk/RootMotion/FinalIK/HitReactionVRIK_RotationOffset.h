#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/HitReactionVRIK_Offset.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class VRIK; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1FC4AEA0)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1FC4AD90)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_HIT_OFFSET UNITYSDK_OFFSET(0x1FC4A930)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ONAPPLY_OFFSET UNITYSDK_OFFSET(0x1FC4AF10)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4B4C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_RotationOffset_TypeDefinitionIndex = 36847;

	class HitReactionVRIK_RotationOffset : public ::RootMotion::FinalIK::HitReactionVRIK_Offset
	{
	public:
		::System::Int32 curveIndex; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* offsetLinks; // 0x50
		::UnityEngine::Rigidbody* rigidbody; // 0x58
		::UnityEngine::Vector3 comAxis; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Vector3 force, ::Il2CppArray<::UnityEngine::AnimationCurve*>* curves, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_HIT_OFFSET))(this, force, curves, point);
		}

		::System::Single GetLength(::Il2CppArray<::UnityEngine::AnimationCurve*>* curves)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_GETLENGTH_OFFSET))(this, curves);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_CROSSFADESTART_OFFSET))(this);
		}

		::System::Void OnApply(::RootMotion::FinalIK::VRIK* ik, ::Il2CppArray<::UnityEngine::AnimationCurve*>* curves, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ONAPPLY_OFFSET))(this, ik, curves, weight);
		}
	};
}
