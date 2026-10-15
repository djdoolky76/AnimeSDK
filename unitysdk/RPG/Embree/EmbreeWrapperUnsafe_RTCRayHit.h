#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RTCHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RTCRay.h"

namespace RPG::Embree
{
	struct alignas(4) EmbreeWrapperUnsafe_RTCRayHit
	{
		::RPG::Embree::EmbreeWrapperUnsafe_RTCRay ray; // 0x10
		::RPG::Embree::EmbreeWrapperUnsafe_RTCHit hit; // 0x40
	};
}
