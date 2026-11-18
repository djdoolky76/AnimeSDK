#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_Leg; }
namespace RootMotion::FinalIK { class VRIK; }
namespace RootMotion::FinalIK { class VRIKCalibrator_CalibrationData; }
namespace RootMotion::FinalIK { class VRIKCalibrator_Settings; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEBODY_OFFSET UNITYSDK_OFFSET(0x1F515900)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHANDS_OFFSET UNITYSDK_OFFSET(0x1F5154A0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHAND_OFFSET UNITYSDK_OFFSET(0x1F515EF0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHEAD_OFFSET UNITYSDK_OFFSET(0x1F5144B0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATELEG_1_OFFSET UNITYSDK_OFFSET(0x1F513DD0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATELEG_OFFSET UNITYSDK_OFFSET(0x1F510F50)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATESCALE_1_OFFSET UNITYSDK_OFFSET(0x1F50D7D0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATESCALE_OFFSET UNITYSDK_OFFSET(0x1F50D9D0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_1_OFFSET UNITYSDK_OFFSET(0x1F511EE0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_2_OFFSET UNITYSDK_OFFSET(0x1F514240)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_OFFSET UNITYSDK_OFFSET(0x1F50D9F0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_GUESSPALMTOTHUMBAXIS_OFFSET UNITYSDK_OFFSET(0x1F516BF0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_GUESSWRISTTOPALMAXIS_OFFSET UNITYSDK_OFFSET(0x1F5168A0)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_RECALIBRATESCALE_1_OFFSET UNITYSDK_OFFSET(0x1F50D750)
#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_RECALIBRATESCALE_OFFSET UNITYSDK_OFFSET(0x1F50D6D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKCalibrator_TypeDefinitionIndex = 36869;

	class VRIKCalibrator : public ::System::Object
	{
	public:
		static ::System::Void RecalibrateScale(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, ::RootMotion::FinalIK::VRIKCalibrator_Settings* settings)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*, ::RootMotion::FinalIK::VRIKCalibrator_Settings*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_RECALIBRATESCALE_OFFSET))(ik, data, settings);
		}

		static ::System::Void RecalibrateScale_1(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, ::System::Single scaleMlp)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_RECALIBRATESCALE_1_OFFSET))(ik, data, scaleMlp);
		}

		static ::System::Void CalibrateScale(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator_Settings* settings)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator_Settings*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATESCALE_OFFSET))(ik, settings);
		}

		static ::System::Void CalibrateScale_1(::RootMotion::FinalIK::VRIK* ik, ::System::Single scaleMlp)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATESCALE_1_OFFSET))(ik, scaleMlp);
		}

		static ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker, ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker)
		{
			return ((::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*(*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator_Settings*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_OFFSET))(ik, settings, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
		}

		static ::System::Void CalibrateLeg(::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::IKSolverVR_Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIKCalibrator_Settings*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverVR_Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATELEG_OFFSET))(settings, tracker, leg, lastBone, rootForward, isLeft);
		}

		static ::System::Void Calibrate_1(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker, ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_1_OFFSET))(ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
		}

		static ::System::Void CalibrateLeg_1(::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::IKSolverVR_Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverVR_Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATELEG_1_OFFSET))(data, tracker, leg, lastBone, rootForward, isLeft);
		}

		static ::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* Calibrate_2(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Transform* centerEyeAnchor, ::UnityEngine::Transform* leftHandAnchor, ::UnityEngine::Transform* rightHandAnchor, ::UnityEngine::Vector3 centerEyePositionOffset, ::UnityEngine::Vector3 centerEyeRotationOffset, ::UnityEngine::Vector3 handPositionOffset, ::UnityEngine::Vector3 handRotationOffset, ::System::Single scaleMlp)
		{
			return ((::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*(*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATE_2_OFFSET))(ik, centerEyeAnchor, leftHandAnchor, rightHandAnchor, centerEyePositionOffset, centerEyeRotationOffset, handPositionOffset, handRotationOffset, scaleMlp);
		}

		static ::System::Void CalibrateHead(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Transform* centerEyeAnchor, ::UnityEngine::Vector3 anchorPositionOffset, ::UnityEngine::Vector3 anchorRotationOffset)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHEAD_OFFSET))(ik, centerEyeAnchor, anchorPositionOffset, anchorRotationOffset);
		}

		static ::System::Void CalibrateBody(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Transform* pelvisTracker, ::UnityEngine::Vector3 trackerPositionOffset, ::UnityEngine::Vector3 trackerRotationOffset)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEBODY_OFFSET))(ik, pelvisTracker, trackerPositionOffset, trackerRotationOffset);
		}

		static ::System::Void CalibrateHands(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Transform* leftHandAnchor, ::UnityEngine::Transform* rightHandAnchor, ::UnityEngine::Vector3 anchorPositionOffset, ::UnityEngine::Vector3 anchorRotationOffset)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHANDS_OFFSET))(ik, leftHandAnchor, rightHandAnchor, anchorPositionOffset, anchorRotationOffset);
		}

		static ::System::Void CalibrateHand(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Transform* anchor, ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 rotationOffset, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATEHAND_OFFSET))(ik, anchor, positionOffset, rotationOffset, isLeft);
		}

		static ::UnityEngine::Vector3 GuessWristToPalmAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_GUESSWRISTTOPALMAXIS_OFFSET))(hand, forearm);
		}

		static ::UnityEngine::Vector3 GuessPalmToThumbAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_GUESSPALMTOTHUMBAXIS_OFFSET))(hand, forearm);
		}
	};
}
