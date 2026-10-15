#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyChallengePackRow; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D591890)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5916E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyChallengePackRow_TypeDefinitionIndex = 14103;

	class ChenLingGameBoyChallengePackRow : public ::System::Object
	{
	public:
		::System::UInt32 GameBoyChallengePackID; // 0x10
		::System::UInt32 HardChallengeID; // 0x14
		::System::UInt32 CheatChallengeID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingGameBoyChallengePackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
