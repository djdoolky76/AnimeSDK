#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyTeamRow; }

#define RPG_GAMECORE_TRAINPARTYTEAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC36340)
#define RPG_GAMECORE_TRAINPARTYTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC360B0)

namespace RPG::GameCore
{
	class TrainPartyTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PassengerList; // 0x10
		::System::UInt32 GridNum; // 0x18
		::System::UInt32 TeamID; // 0x1C
		::RPG::Client::TextID TeamName; // 0x20
		::System::UInt32 LeaderWorkingBuffID; // 0x30
		::System::UInt32 InitialMeetingSkill; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTEAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyTeamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyTeamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
