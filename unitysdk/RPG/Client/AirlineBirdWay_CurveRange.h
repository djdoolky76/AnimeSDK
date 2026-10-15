#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE1020)
#define RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xE1080)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineBirdWay_CurveRange_TypeDefinitionIndex = 59798;

	struct alignas(8) AirlineBirdWay_CurveRange
	{
		::System::Int32 startPointIndex; // 0x10
		::System::Int32 endPointIndex; // 0x14
		::System::Single duration; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* curve; // 0x20
		::System::Single StartPosition; // 0x28
		::System::Single EndPosition; // 0x2C
		::System::Boolean KKKIONIDKFA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Single NINDHOGICJD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY_CURVERANGE_NINDHOGICJD_OFFSET))(this, a1);
		}

	};
}
