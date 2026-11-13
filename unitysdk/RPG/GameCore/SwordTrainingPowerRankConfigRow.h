#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68E650)
#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68E2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPowerRankConfigRow_TypeDefinitionIndex = 12502;

	class SwordTrainingPowerRankConfigRow : public ::System::Object
	{
	public:
		::System::String* RankIcon; // 0x10
		::System::UInt32 RankGroupID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::RPG::Client::TextID RankGroupName; // 0x20
		::System::UInt32 RankID; // 0x30
		::System::UInt32 PowerRequire; // 0x34
		::RPG::Client::TextID RankProgressName; // 0x38
		::RPG::Client::TextID RankSubName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingPowerRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
