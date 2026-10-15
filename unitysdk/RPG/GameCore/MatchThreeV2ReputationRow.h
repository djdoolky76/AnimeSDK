#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2ReputationRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85D570)
#define RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85D1D0)

namespace RPG::GameCore
{
	class MatchThreeV2ReputationRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* ChallengerList; // 0x18
		::System::String* BgPath; // 0x20
		::RPG::Client::TextID Title; // 0x28
		::RPG::Client::TextID LevelUpDesc; // 0x38
		::System::UInt32 LevelUpReward; // 0x48
		::System::UInt32 Reputation; // 0x4C
		::RPG::Client::TextID TabName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2ReputationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2ReputationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
