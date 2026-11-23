#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BAA202CEB3DE943A_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x260A530)
#define BAA202CEB3DE943A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2623CA0)

inline static constexpr unsigned int BAA202CEB3DE943A_TypeDefinitionIndex = 5906;

struct alignas(4) BAA202CEB3DE943A
{
	::System::Single BB8C609F76620E45; // 0x10
	::System::Single A0A0D02932F12CFD; // 0x14

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BAA202CEB3DE943A& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BAA202CEB3DE943A&))((::PBYTE)hIl2Cpp + BAA202CEB3DE943A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::UnityEngine::Vector2& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + BAA202CEB3DE943A_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
