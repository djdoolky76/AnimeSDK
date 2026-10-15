#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTeamRow; }
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTEAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4351D0)
#define RPG_GAMECORE_B51RACINGTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D434FD0)

namespace RPG::GameCore
{
	class B51RacingTeamRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 InitialPoint; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTEAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingTeamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingTeamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
