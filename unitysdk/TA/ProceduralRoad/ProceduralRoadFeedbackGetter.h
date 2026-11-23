#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_PROCEDURALROAD_PROCEDURALROADFEEDBACKGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TA::ProceduralRoad
{
	inline static constexpr unsigned int ProceduralRoadFeedbackGetter_TypeDefinitionIndex = 16359;

	class ProceduralRoadFeedbackGetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADFEEDBACKGETTER__CTOR_OFFSET))(this);
		}
	};
}
