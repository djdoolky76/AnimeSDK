#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/FFED6E71A507E5FE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_E135C7C34FCDECA5_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D8A6B0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TrafficLane_E135C7C34FCDECA5_TypeDefinitionIndex = 18863;

	struct alignas(8) TrafficLane_E135C7C34FCDECA5
	{
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::Unity::Mathematics::float3> BCA545127B307DA8; // 0x10
		::System::Byte _padding0[0x8];
		::FFED6E71A507E5FE<::System::Int32> FBB013A923C54E53; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Mathematics::float3 A398F165DF4AD4D5; // 0x30

		::System::Void BAF1A5AD9A18D2CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_E135C7C34FCDECA5_BAF1A5AD9A18D2CF_OFFSET))(this);
		}
	};
}
