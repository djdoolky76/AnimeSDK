#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYFINISHPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B12F890)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGamePlayFinishPageViewModel_TypeDefinitionIndex = 84817;

	class B51RacingGamePlayFinishPageViewModel : public ::System::Object
	{
	public:
		::System::Int32 PlayerRank; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYFINISHPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
