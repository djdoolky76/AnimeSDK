#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateMgr_CmdType.h"

namespace RPGCamera
{
	struct alignas(4) CameraStateMgr_CameraStateCmd
	{
		::RPGCamera::CameraStateMgr_CmdType cmdType; // 0x10
		::System::Int32 stateId; // 0x14
	};
}
