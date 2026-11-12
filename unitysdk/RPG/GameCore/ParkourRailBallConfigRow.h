#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRailBallConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB090A0)
#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB08CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallConfigRow_TypeDefinitionIndex = 12156;

	class ParkourRailBallConfigRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::System::String* BigResPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* UI3DPrefabPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::Single SkillChargeDisplay; // 0x40
		::System::UInt32 SkillID; // 0x44
		::System::Single SpeedDisplay; // 0x48
		::System::UInt32 UpgradeSubMission; // 0x4C
		::System::Single StabilityDisplay; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 UpgradeBallID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourRailBallConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourRailBallConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
