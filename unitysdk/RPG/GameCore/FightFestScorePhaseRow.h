#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestScorePhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D677E30)
#define RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D677B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScorePhaseRow_TypeDefinitionIndex = 13277;

	class FightFestScorePhaseRow : public ::System::Object
	{
	public:
		::System::String* TargetAvatarMiniIcon; // 0x10
		::System::String* TargetAvatarIcon; // 0x18
		::RPG::Client::TextID TargetTip; // 0x20
		::RPG::Client::TextID TargetAvatarName; // 0x30
		::System::UInt32 RewardID; // 0x40
		::System::UInt32 PhaseID; // 0x44
		::System::UInt32 AvatarInfoID; // 0x48
		::System::UInt32 TargetScore; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestScorePhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestScorePhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
