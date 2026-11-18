#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class VRIK; }
namespace RootMotion::FinalIK { class VRIKCalibrator_CalibrationData; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F1F9390)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_CALIBRATE_1_OFFSET UNITYSDK_OFFSET(0x1F1F9A90)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_CALIBRATE_OFFSET UNITYSDK_OFFSET(0x1F1F94C0)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_GET_PELVISTARGETRIGHT_OFFSET UNITYSDK_OFFSET(0x1F1F9360)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1FA910)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1F9D70)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_SET_PELVISTARGETRIGHT_OFFSET UNITYSDK_OFFSET(0x1F1F9380)
#define ROOTMOTION_FINALIK_VRIKROOTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FAAD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKRootController_TypeDefinitionIndex = 36777;

	class VRIKRootController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 _pelvisTargetRight_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* pelvisTarget; // 0x28
		::UnityEngine::Transform* leftFootTarget; // 0x30
		::UnityEngine::Transform* rightFootTarget; // 0x38
		::RootMotion::FinalIK::VRIK* ik; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_pelvisTargetRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_GET_PELVISTARGETRIGHT_OFFSET))(this);
		}

		::System::Void set_pelvisTargetRight(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_SET_PELVISTARGETRIGHT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Calibrate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_CALIBRATE_OFFSET))(this);
		}

		::System::Void Calibrate_1(::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_CALIBRATE_1_OFFSET))(this, data);
		}

		::System::Void OnPreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_ONPREUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKROOTCONTROLLER_ONDESTROY_OFFSET))(this);
		}
	};
}
