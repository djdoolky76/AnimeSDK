#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class RollerCoasterMoveSettings_SpeedLineEffectParams; }
namespace System { class String; }

#define RPG_CLIENT_PROP_ROLLERCOASTERMOVESETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1745F1C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RollerCoasterMoveSettings_TypeDefinitionIndex = 81538;

	class RollerCoasterMoveSettings : public ::System::Object
	{
	public:
		::System::Boolean OrientToCurve; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single OrientationLerpHalfTime; // 0x14
		::System::Single MinSpeed; // 0x18
		::System::Single MaxSpeed; // 0x1C
		::System::Single InitialSpeed; // 0x20
		::System::Single UphillAcceleration; // 0x24
		::System::Single DownhillAcceleration; // 0x28
		::System::Single MaxAccelerationAngle; // 0x2C
		::System::Single SideOffset; // 0x30
		::System::Single NormOffset; // 0x34
		::System::Boolean EnableTurnTilt; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single TiltAngleRatio; // 0x3C
		::System::Single MaxTiltAngle; // 0x40
		::System::Single TiltLerpHalfTime; // 0x44
		::System::Single TiltPredictTime; // 0x48
		::System::Single TiltPredictMaxDistance; // 0x4C
		::System::Boolean InvertTilt; // 0x50
		::System::Boolean EnablePitchTilt; // 0x51
		::System::Byte _padding2[0x2];
		::System::Single PitchFullAcceleration; // 0x54
		::System::Single MaxPitchAngle; // 0x58
		::System::Single PitchLerpHalfTime; // 0x5C
		::System::Boolean InvertPitch; // 0x60
		::System::Byte _padding3[0x3];
		::System::Single VerticalAccelerationSmoothTime; // 0x64
		::System::String* CameraPath; // 0x68
		::Cinemachine::CinemachineBlendDefinition_Style CameraBlendType; // 0x70
		::System::Single CameraBlendTime; // 0x74
		::System::Boolean EnableCameraSwitchPoints; // 0x78
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector3 OpenFollowOffset; // 0x7C
		::UnityEngine::Vector3 ClosedFollowOffset; // 0x88
		::System::Single SwitchBlendDuration; // 0x94
		::System::Single OpenToCloseEarlyPercentage; // 0x98
		::System::Single CloseToOpenDelayTime; // 0x9C
		::System::Boolean EnableSpeedPoints; // 0xA0
		::System::Byte _padding5[0x3];
		::System::Single SpeedPointArriveEpsilon; // 0xA4
		::System::Boolean EnableEventPoints; // 0xA8
		::System::Boolean EnableSpeedLineEffect; // 0xA9
		::System::Byte _padding6[0x2];
		::System::Single SpeedLineThreshold; // 0xAC
		::RPG::Client::Prop::RollerCoasterMoveSettings_SpeedLineEffectParams* SpeedLineParams; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERMOVESETTINGS_CTOR_OFFSET))(this);
		}

	};
}
