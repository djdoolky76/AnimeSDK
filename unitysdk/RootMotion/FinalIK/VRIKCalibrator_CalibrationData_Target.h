#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA_TARGET_SETTO_OFFSET UNITYSDK_OFFSET(0x1FAEADF0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA_TARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEAC50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKCalibrator_CalibrationData_Target_TypeDefinitionIndex = 36871;

	class VRIKCalibrator_CalibrationData_Target : public ::System::Object
	{
	public:
		::System::Boolean used; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 localPosition; // 0x14
		::UnityEngine::Quaternion localRotation; // 0x20

		::System::Void _ctor(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA_TARGET__CTOR_OFFSET))(this, t);
		}

		::System::Void SetTo(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA_TARGET_SETTO_OFFSET))(this, t);
		}
	};
}
