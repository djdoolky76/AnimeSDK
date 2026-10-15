#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreePVPScoreRow; }

#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8588F0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D857FB0)

namespace RPG::GameCore
{
	class MatchThreePVPScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 ScoreID; // 0x10
		::RPG::GameCore::MatchThreeScoreType Type; // 0x14
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 Param2; // 0x38
		::RPG::GameCore::MatchThreeRarityType Rarity; // 0x3C
		::System::UInt32 Param1; // 0x40
		::System::UInt32 FixedScore; // 0x44
		::RPG::GameCore::MatchThreeScoreFinishType FinishType; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title2; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreePVPScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreePVPScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
