#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6F1A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPerformanceDialogViewModel_TypeDefinitionIndex = 84824;

	class B51RacingPerformanceDialogViewModel : public ::System::Object
	{
	public:
		::System::UInt32 TeamID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
