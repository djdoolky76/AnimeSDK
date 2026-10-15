#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) ProjectileBGCurveExportData_KeyPathPointExPortData
	{
		::UnityEngine::Vector3 PointLocal; // 0x10
		::UnityEngine::Vector3 ControlFirstLocal; // 0x1C
		::UnityEngine::Vector3 ControlSecondLocal; // 0x28
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum ControlType; // 0x34
	};
}
