#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GET_POINTERDRAGDELTAMULTIPLATFORM_OFFSET UNITYSDK_OFFSET(0x785C00)
#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x785C10)
#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x785CE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraControlFlag_TypeDefinitionIndex = 43722;

	struct alignas(4) CameraControlFlag
	{
		::System::Boolean isRotateStart; // 0x10
		::System::Boolean isRotating; // 0x11
		::System::Boolean isOrderMoving; // 0x12
		::System::Boolean hasAnyControl; // 0x13
		::System::Boolean isControllerStateEnable; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 pointerDragDelta; // 0x18
		::System::Boolean isRecoveringFromLock; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single playerYawDragDelta; // 0x24
		::System::Single playerPitchDragDelta; // 0x28

		::UnityEngine::Vector2 get_pointerDragDeltaMultiPlatform()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GET_POINTERDRAGDELTAMULTIPLATFORM_OFFSET))(this);
		}

		/*
		::System::Void GIALDDHFBLF(::MoleMole::Cameras::CameraControlFlag HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraControlFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GIALDDHFBLF_OFFSET))(this, HODAIDNDKHD);
		}
		*/

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_NPOLNFDBOOD_OFFSET))(this);
		}
	};
}
