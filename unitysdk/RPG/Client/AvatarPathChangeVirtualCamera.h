#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xC708020)

namespace RPG::Client
{
	class AvatarPathChangeVirtualCamera : public ::System::Object
	{
	public:
		::System::UInt32 BelongAvtarID; // 0x10
		::System::Byte _padding0[0x4];
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERA_CTOR_OFFSET))(this);
		}

	};
}
