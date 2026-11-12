#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTMAINRACEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0190)
#define RPG_GAMECORE_FIGHTFESTMAINRACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8AF960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestMainRaceRow_TypeDefinitionIndex = 13344;

	class FightFestMainRaceRow : public ::System::Object
	{
	public:
		::System::String* RaceBgFigurePath; // 0x10
		::RPG::Client::TextID StageEndDesc; // 0x18
		::System::UInt32 BlueAvatarID; // 0x28
		::System::UInt32 MainRaceID; // 0x2C
		::System::UInt32 RedAvatarID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StageName; // 0x38
		::System::UInt32 FightPhaseID; // 0x48
		::System::UInt32 TutorialID; // 0x4C
		::System::UInt32 RewardID; // 0x50
		::System::UInt32 EventID; // 0x54
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
