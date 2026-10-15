#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"

namespace RPG::Client
{
	struct alignas(4) MissionModule_FinishPerformance
	{
		::System::Boolean UseSpecifiedLoading; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LoadingStratageType StratageType; // 0x14
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x18
	};
}
