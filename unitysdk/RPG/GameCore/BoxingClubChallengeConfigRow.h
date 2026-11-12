#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubChallengeConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68AA80)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68A010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeConfigRow_TypeDefinitionIndex = 12986;

	class BoxingClubChallengeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StageGroupList; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* StageBuffAndGroupMap; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x28
		::System::String* IconPath; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ActivityModuleID; // 0x48
		::System::UInt32 PerfectTurn; // 0x4C
		::System::UInt32 ChallengeTurnLimit; // 0x50
		::System::UInt32 ChallengeID; // 0x54
		::System::UInt32 FirstPassRewardID; // 0x58
		::System::UInt32 ChallengeBuff; // 0x5C
		::System::UInt32 SpecialAvatarActivityModule; // 0x60
		::System::UInt32 PreChallengeID; // 0x64
		::RPG::Client::TextID ChallengeTip; // 0x68
		::System::Boolean IsSpecialChallenge; // 0x78
		::System::Byte _padding0[0x3];
		::RPG::GameCore::BoxingClubActivityType Type; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubChallengeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubChallengeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
