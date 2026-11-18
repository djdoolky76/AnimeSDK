#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/RootMotion/FinalIK/InteractionObject_WeightCurve_Type.h"
#include "unitysdk/RootMotion/FinalIK/InteractionTarget_RotationMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONTARGET_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F7BCAE0)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1F7BCB30)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F7BC900)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL1_OFFSET UNITYSDK_OFFSET(0x1F7BC950)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL2_OFFSET UNITYSDK_OFFSET(0x1F7BC9A0)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL3_OFFSET UNITYSDK_OFFSET(0x1F7BC9F0)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL4_OFFSET UNITYSDK_OFFSET(0x1F7BCA40)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F7BC8B0)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_RESETROTATION_OFFSET UNITYSDK_OFFSET(0x1F7BCBA0)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_ROTATETO_OFFSET UNITYSDK_OFFSET(0x1F7BCD00)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F7BCA90)
#define ROOTMOTION_FINALIK_INTERACTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BDA40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTarget_TypeDefinitionIndex = 36973;

	class InteractionTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effectorType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* multipliers; // 0x20
		::System::Single interactionSpeedMlp; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* pivot; // 0x30
		::RootMotion::FinalIK::InteractionTarget_RotationMode rotationMode; // 0x38
		::UnityEngine::Vector3 twistAxis; // 0x3C
		::System::Single twistWeight; // 0x48
		::System::Single swingWeight; // 0x4C
		::System::Single threeDOFWeight; // 0x50
		::System::Boolean rotateOnce; // 0x54
		::System::Byte _padding2[0x3];
		::UnityEngine::Quaternion defaultLocalRotation; // 0x58
		::UnityEngine::Transform* lastPivot; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenTutorial1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL1_OFFSET))(this);
		}

		::System::Void OpenTutorial2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL2_OFFSET))(this);
		}

		::System::Void OpenTutorial3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL3_OFFSET))(this);
		}

		::System::Void OpenTutorial4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_OPENTUTORIAL4_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_ASTHREAD_OFFSET))(this);
		}

		::System::Single GetValue(::RootMotion::FinalIK::InteractionObject_WeightCurve_Type curveType)
		{
			return ((::System::Single(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_GETVALUE_OFFSET))(this, curveType);
		}

		::System::Void ResetRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_RESETROTATION_OFFSET))(this);
		}

		::System::Void RotateTo(::UnityEngine::Transform* bone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTARGET_ROTATETO_OFFSET))(this, bone);
		}
	};
}
