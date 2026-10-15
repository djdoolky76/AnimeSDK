#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubChallengeSeasonConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47C790)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D47B7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeSeasonConfigRow_TypeDefinitionIndex = 12912;

	class BoxingClubChallengeSeasonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityQuestID; // 0x10
		::System::String* SeasonTabPath; // 0x18
		::Il2CppArray<::System::UInt32>* ChallengeIDList; // 0x20
		::System::String* SeasonIconPath; // 0x28
		::System::String* ActivityTitle; // 0x30
		::RPG::GameCore::BoxingClubActivityType SeasonType; // 0x38
		::System::UInt32 SeasonID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
