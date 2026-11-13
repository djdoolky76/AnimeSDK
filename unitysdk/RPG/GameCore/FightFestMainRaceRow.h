#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTMAINRACEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9B630)
#define RPG_GAMECORE_FIGHTFESTMAINRACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC9AE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestMainRaceRow_TypeDefinitionIndex = 13344;

	class FightFestMainRaceRow : public ::System::Object
	{
	public:
		::System::String* RaceBgFigurePath; // 0x10
		::System::UInt32 EventID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::RPG::Client::TextID StageName; // 0x20
		::System::UInt32 BlueAvatarID; // 0x30
		::System::UInt32 FightPhaseID; // 0x34
		::System::UInt32 TutorialID; // 0x38
		::System::UInt32 MainRaceID; // 0x3C
		::System::UInt32 RedAvatarID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StageEndDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestMainRaceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
