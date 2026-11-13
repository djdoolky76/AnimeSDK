#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumStuffRow; }

#define RPG_GAMECORE_MUSEUMSTUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48D690)
#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E48D100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 14382;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::System::UInt32 SceneGroupID; // 0x10
		::System::UInt32 RecruitUnlockMission; // 0x14
		::System::UInt32 StatsA; // 0x18
		::System::UInt32 ScenePropID; // 0x1C
		::System::UInt32 CollectedReward; // 0x20
		::System::UInt32 UnlockPhase; // 0x24
		::System::UInt32 DisplayOrder; // 0x28
		::System::UInt32 RecruitPrice; // 0x2C
		::System::UInt32 ItemID; // 0x30
		::RPG::GameCore::StuffType Type; // 0x34
		::System::Boolean IsTargetReward; // 0x38
		::System::Boolean IsInitial; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 StatsC; // 0x3C
		::System::UInt32 StatsB; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID EvidenceInfoTextID; // 0x48
		::RPG::Client::TextID MuseumStuffDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumStuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumStuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
