#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) ProjectileBGCurveExportData_SessionExportPoint
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single DistanceToSectionStart; // 0x1C
	};
}
