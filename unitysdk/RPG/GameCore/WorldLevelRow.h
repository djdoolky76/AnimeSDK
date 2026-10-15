#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WorldLevelRow; }

#define RPG_GAMECORE_WORLDLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCABF00)
#define RPG_GAMECORE_WORLDLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCAB790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelRow_TypeDefinitionIndex = 14502;

	class WorldLevelRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID LevelUpMissionTips; // 0x10
		::RPG::Client::TextID Breaktips1; // 0x20
		::System::UInt32 LevelUpMission; // 0x30
		::System::UInt32 Level; // 0x34
		::System::UInt32 MaxPlayerLevel; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Breaktips2; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::WorldLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WorldLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
