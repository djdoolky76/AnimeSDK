#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWeeklyChallengeRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC55640)
#define RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC552A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournWeeklyChallengeRow_TypeDefinitionIndex = 15135;

	class RogueTournWeeklyChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WeeklyContentList; // 0x10
		::Il2CppArray<::System::UInt32>* WeeklyContentDetailList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups3; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups2; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups1; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayFinalMonsterGroups; // 0x38
		::RPG::Client::TextID WeeklyName; // 0x40
		::System::UInt32 ChallengeID; // 0x50
		::System::UInt32 RewardID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournWeeklyChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournWeeklyChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
