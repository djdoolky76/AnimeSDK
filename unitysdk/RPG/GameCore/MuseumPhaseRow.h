#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C7C50)
#define RPG_GAMECORE_MUSEUMPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C7430)

namespace RPG::GameCore
{
	class MuseumPhaseRow : public ::System::Object
	{
	public:
		::System::String* PhaseIconPath; // 0x10
		::RPG::Client::TextID PhaseName; // 0x18
		::RPG::Client::TextID PhaseTextID; // 0x28
		::System::UInt32 RenewPointCost; // 0x38
		::System::UInt32 PhaseFund; // 0x3C
		::System::UInt32 PhaseQuestID; // 0x40
		::System::UInt32 UnlockMissionID; // 0x44
		::System::UInt32 MuseumPhaseID; // 0x48
		::System::UInt32 UnlockAreaID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
