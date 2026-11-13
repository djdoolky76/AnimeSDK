#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingPreFillSource.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B119570)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatItemViewModel_TypeDefinitionIndex = 84799;

	class B51RacingCarStatItemViewModel : public ::System::Object
	{
	public:
		::System::Single CurrentValue; // 0x10
		::RPG::GameCore::B51RacingStatType StatType; // 0x14
		::System::Single TargetValue; // 0x18
		::System::Boolean IsFinished; // 0x1C
		::System::Boolean ShowTargetIcon; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single PreFillValue; // 0x20
		::RPG::Client::B51Racing::B51RacingPreFillSource PreFillSource; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
