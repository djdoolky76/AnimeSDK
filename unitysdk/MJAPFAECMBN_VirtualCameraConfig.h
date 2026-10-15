#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }

#define MJAPFAECMBN_VIRTUALCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB95CEF0)
#define MJAPFAECMBN_VIRTUALCAMERACONFIG_GET_PREFERREDVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xB95CAD0)

inline static constexpr unsigned int MJAPFAECMBN_VirtualCameraConfig_TypeDefinitionIndex = 78475;

	class MJAPFAECMBN_VirtualCameraConfig : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera16X9; // 0x10
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera4X3; // 0x18
		::Cinemachine::CinemachineBlendDefinition_Style BlendType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x28
		::System::Single BlendTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPFAECMBN_VIRTUALCAMERACONFIG_CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_PreferredVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPFAECMBN_VIRTUALCAMERACONFIG_GET_PREFERREDVIRTUALCAMERA_OFFSET))(this);
		}

	};
