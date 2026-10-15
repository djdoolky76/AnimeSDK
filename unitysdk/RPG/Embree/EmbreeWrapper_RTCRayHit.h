#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRay.h"

namespace RPG::Embree
{
	struct alignas(4) EmbreeWrapper_RTCRayHit
	{
		::RPG::Embree::EmbreeWrapper_RTCRay ray; // 0x10
		::RPG::Embree::EmbreeWrapper_RTCHit hit; // 0x40
	};
}
