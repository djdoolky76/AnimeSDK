#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AudienceLayoutConfig; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) AudienceGroupInstance_Area
	{
		::UnityEngine::Transform* origin; // 0x10
		::RPG::Client::AudienceLayoutConfig* layoutConfig; // 0x18
	};
}
