#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MinimapImage; }

namespace RPG::Client
{
	struct alignas(8) MinimapImage___c__DisplayClass8_0
	{
		::RPG::Client::MinimapImage* __4__this; // 0x10
		::System::Single radius; // 0x18
		::UnityEngine::Vector3 center; // 0x1C
	};
}
