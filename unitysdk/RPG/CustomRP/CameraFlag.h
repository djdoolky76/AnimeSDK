#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class CameraFlag : ::System::Int32
	{
		DebugDrawCollider = 1,
		EnableHiZOC = 2,
		EnableDebugOC = 4,
		RecordCameraPos = 8,
		EnableDeformation = 16,
	};
}
