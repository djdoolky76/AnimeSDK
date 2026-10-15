#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC724F40)

namespace RPG::Client::B51Racing
{
	class B51RacingComPopUpDialogViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingPartType PartType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BuffDesc; // 0x18
		::RPG::Client::TextID BuffName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
