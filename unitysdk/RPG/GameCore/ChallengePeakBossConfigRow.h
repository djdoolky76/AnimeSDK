#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakBossConfigRow; }

#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D533F70)
#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D533CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakBossConfigRow_TypeDefinitionIndex = 12981;

	class ChallengePeakBossConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HardTagList; // 0x10
		::Il2CppArray<::System::UInt32>* HardEventIDList; // 0x18
		::Il2CppArray<::System::UInt32>* BuffList; // 0x20
		::RPG::Client::TextID HardTitle; // 0x28
		::System::UInt32 HardTarget; // 0x38
		::System::UInt32 ColorMedalTarget; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengePeakBossConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengePeakBossConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
