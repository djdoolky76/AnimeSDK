#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

	struct alignas(4) WaveInteract
	{
		::UnityEngine::Vector3 pos; // 0x10
		::System::Single radius; // 0x1C
		::System::Single maxDowheight; // 0x20
	};
