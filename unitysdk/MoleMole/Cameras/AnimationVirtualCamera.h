#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCamera.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ANFODOPJJKG_OFFSET UNITYSDK_OFFSET(0x12757E50)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_BLENDCAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x12757750)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x12757720)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12757990)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_JFIOGGEDFHB_OFFSET UNITYSDK_OFFSET(0x12757E40)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x12757AA0)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12757AF0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AnimationVirtualCamera_TypeDefinitionIndex = 57796;

	class AnimationVirtualCamera : public ::Cinemachine::CinemachineVirtualCamera
	{
	public:
		::Cinemachine::CameraState JBDIJLLGBKA; // 0x1C8
		::Cinemachine::CinemachineBlend* NGPKLFDGNBK; // 0x2B0
		::UnityEngine::AnimationCurve* NEELHAEEJNN; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void BlendCameraOverride(::Cinemachine::ICinemachineCamera* ONMMJBIJBJJ, ::Cinemachine::ICinemachineCamera* CBIEBJOONOL, ::System::Single IMDNDAMHPAL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_BLENDCAMERAOVERRIDE_OFFSET))(this, ONMMJBIJBJJ, CBIEBJOONOL, IMDNDAMHPAL, PMNLNNGEIFM);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 NFLNBCPPJGL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, NFLNBCPPJGL, PMNLNNGEIFM);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void JFIOGGEDFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_JFIOGGEDFHB_OFFSET))(this);
		}

		::System::Void ANFODOPJJKG(::UnityEngine::Vector3 MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ANFODOPJJKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
