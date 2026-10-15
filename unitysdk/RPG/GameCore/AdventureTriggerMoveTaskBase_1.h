#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class CameraBlendCurve; }

namespace RPG::GameCore
{
	template <typename T>
	class AdventureTriggerMoveTaskBase_1
	{
	public:
		::RPG::Client::CameraBlendCurve* _SpeedCurve; // 0x0
		::RPG::Client::CameraBlendCurve* _SteerCurve; // 0x0
		::System::Boolean _ApplyRunSpeedRatio; // 0x0
	};
}
