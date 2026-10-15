#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusChallengeRewardRow; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75DFB0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75D910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRewardRow_TypeDefinitionIndex = 13769;

	class HeliobusChallengeRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ChallengePhaseID; // 0x18
		::System::UInt32 UnlockQuest; // 0x1C
		::System::UInt32 ChallengeRewardTabID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChallengeRewardTabName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusChallengeRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusChallengeRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
