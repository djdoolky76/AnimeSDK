#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusChallengeRaidRow; }

#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72F640)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D72EFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRaidRow_TypeDefinitionIndex = 13767;

	class HeliobusChallengeRaidRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x10
		::System::UInt32 UnlockQuestID; // 0x18
		::System::UInt32 ChallengeRaidID; // 0x1C
		::System::UInt32 RaidID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID UnlockTips; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusChallengeRaidRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusChallengeRaidRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
