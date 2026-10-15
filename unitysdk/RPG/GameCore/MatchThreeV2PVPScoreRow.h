#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2PVPScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85D1C0)
#define RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85CCA0)

namespace RPG::GameCore
{
	class MatchThreeV2PVPScoreRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FixedScoreMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* ParamMap; // 0x18
		::Il2CppArray<::RPG::GameCore::MultiPlayerGameMode>* GameModeList; // 0x20
		::RPG::Client::TextID Title; // 0x28
		::System::UInt32 ActivityID; // 0x38
		::RPG::GameCore::MatchThreeRarityType Rarity; // 0x3C
		::RPG::Client::TextID Title2; // 0x40
		::RPG::GameCore::MatchThreeScoreType Type; // 0x50
		::RPG::GameCore::MatchThreeScoreFinishType FinishType; // 0x54
		::RPG::Client::TextID Desc; // 0x58
		::System::UInt32 ScoreID; // 0x68
		::System::Int32 Param; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2PVPScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2PVPScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
