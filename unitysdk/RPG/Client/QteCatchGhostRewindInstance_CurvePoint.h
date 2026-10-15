#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) QteCatchGhostRewindInstance_CurvePoint
	{
		::UnityEngine::Vector3 Position; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum ControlType; // 0x1C
		::UnityEngine::Vector3 ControlFirst; // 0x20
		::UnityEngine::Vector3 ControlSecond; // 0x2C
		::System::Single Distance; // 0x38
	};
}
