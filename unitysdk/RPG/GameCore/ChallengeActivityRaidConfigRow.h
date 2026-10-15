#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeActivityRaidConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C900)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D52C230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityRaidConfigRow_TypeDefinitionIndex = 12948;

	class ChallengeActivityRaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ScoringGroupID; // 0x20
		::System::UInt32 ChallengeID; // 0x24
		::System::UInt32 ScheduleDataID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeActivityRaidConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeActivityRaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
