#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

	struct alignas(4) HAGAFPDHLCK_SectionPoint
	{
		::UnityEngine::Vector2 Pos; // 0x10
		::System::Single U; // 0x18
	};
