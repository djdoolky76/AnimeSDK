#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD0862A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingComPopUpDialogViewModel_TypeDefinitionIndex = 84803;

	class B51RacingComPopUpDialogViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID BuffDesc; // 0x10
		::RPG::Client::TextID BuffName; // 0x20
		::RPG::GameCore::B51RacingPartType PartType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
