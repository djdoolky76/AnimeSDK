#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC723E40)

namespace RPG::Client::B51Racing
{
	class B51RacingCarDevelopResultValueUpToastViewModel : public ::System::Object
	{
	public:
		::System::UInt32 BoostLevel; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ResultText; // 0x18
		::System::UInt32 DeltaValue; // 0x28
		::RPG::GameCore::B51RacingStatType StatType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
