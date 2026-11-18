#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraOutElevation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMAXPITCH_OFFSET UNITYSDK_OFFSET(0x1C5AEC60)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMINPITCH_OFFSET UNITYSDK_OFFSET(0x1C5AEC50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AEC70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraConfig_TypeDefinitionIndex = 46512;

	class OverShoulderCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Boolean useOffsetBasePoint; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* basePointAttachPoint; // 0x20
		::UnityEngine::Vector3 followOffset; // 0x28
		::UnityEngine::Vector3 cameraOffset; // 0x34
		::System::Single nearClipPlane; // 0x40
		::System::Single fieldOfView; // 0x44
		::System::Single rollAngle; // 0x48
		::System::Boolean enableInitPitchYawFollow; // 0x4C
		::System::Boolean enableInitPitch; // 0x4D
		::System::Byte _padding1[0x2];
		::System::Single initPitchAngle; // 0x50
		::System::Single blendInDuration; // 0x54
		::System::String* blendInCurveKey; // 0x58
		::System::Boolean IgnoreFovBlend; // 0x60
		::System::Byte _padding2[0x3];
		::System::Single blendInFovDuration; // 0x64
		::System::String* blendInFovCurveKey; // 0x68
		::System::Single blendOutDuration; // 0x70
		::System::Byte _padding3[0x4];
		::System::String* blendOutCurveKey; // 0x78
		::MoleMole::Cameras::OverShoulderCameraOutElevation OutElevation; // 0x80
		::System::Boolean EnablePositionDamping; // 0x90
		::System::Boolean EnableOldPosDampingMethod; // 0x91
		::System::Boolean EnableLagPosDampingMethod; // 0x92
		::System::Byte _padding4[0x1];
		::System::Single PositionDampingParamXZ; // 0x94
		::System::Single PositionDampingParamY; // 0x98
		::System::Boolean EnableListenRotateInput; // 0x9C
		::System::Byte _padding5[0x3];
		::System::Single ListenRotateInputSensitivityX; // 0xA0
		::System::Single ListenRotateInputSensitivityY; // 0xA4
		::System::Single MobileTouchSensitivityScale; // 0xA8
		::System::Boolean EnableRotateInputSmooth; // 0xAC
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector2 AccelTime; // 0xB0
		::UnityEngine::Vector2 DecelTime; // 0xB8
		::System::Boolean ApplyCameraFowardAsAimDir; // 0xC0
		::System::Boolean IgnoreLookAtScreenOffset; // 0xC1
		::System::Boolean EnableStretchPosOffsetY; // 0xC2
		::System::Boolean forceUseActCameraFOV; // 0xC3
		::System::Boolean forceUseActCameraRollAngle; // 0xC4
		::System::Boolean MuteCameraCollision; // 0xC5
		::System::Byte _padding7[0x2];
		::System::Single OverrideCollisionInterpToSpeed; // 0xC8
		::System::Boolean EnableShake; // 0xCC
		::System::Byte _padding8[0x3];
		::System::Single ShakeScale; // 0xD0
		::System::Boolean EnableZoom; // 0xD4
		::System::Boolean EnablePipelineOverrideZoom; // 0xD5
		::System::Byte _padding9[0x2];
		::System::Single ZoomScale; // 0xD8
		::System::Boolean EnableStretch; // 0xDC
		::System::Byte _padding10[0x3];
		::System::Single StretchScale; // 0xE0
		::System::Boolean isFirstPersonView; // 0xE4
		::System::Byte _padding11[0x3];
		::System::Single animatorPitchMinAngle; // 0xE8
		::System::Single animatorPitchMaxAngle; // 0xEC
		::System::String* animatorBlendTreeParam; // 0xF0
		::System::Single exitFirstPersonPolarAngle; // 0xF8
		::System::Boolean summonedAnimatorBlend; // 0xFC
		::System::Byte _padding12[0x3];
		::System::Collections::Generic::List_1<::System::String*>* setRenderVisibleList; // 0x100
		::System::Boolean isVisible; // 0x108
		::System::Boolean isApplyAllRender; // 0x109

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_RuntimeMinPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMINPITCH_OFFSET))(this);
		}

		::System::Single get_RuntimeMaxPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMAXPITCH_OFFSET))(this);
		}
	};
}
