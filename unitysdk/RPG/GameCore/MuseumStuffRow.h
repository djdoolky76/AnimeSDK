#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumStuffRow; }

#define RPG_GAMECORE_MUSEUMSTUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4030)
#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAE3AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 14382;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MuseumStuffDesc; // 0x10
		::System::UInt32 ScenePropID; // 0x20
		::System::UInt32 UnlockPhase; // 0x24
		::System::UInt32 DisplayOrder; // 0x28
		::System::UInt32 StatsB; // 0x2C
		::System::UInt32 StatsC; // 0x30
		::System::UInt32 StatsA; // 0x34
		::RPG::GameCore::StuffType Type; // 0x38
		::System::UInt32 RecruitPrice; // 0x3C
		::System::UInt32 SceneGroupID; // 0x40
		::System::UInt32 RecruitUnlockMission; // 0x44
		::System::Boolean IsInitial; // 0x48
		::System::Boolean IsTargetReward; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 ItemID; // 0x4C
		::RPG::Client::TextID EvidenceInfoTextID; // 0x50
		::System::UInt32 CollectedReward; // 0x60
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
