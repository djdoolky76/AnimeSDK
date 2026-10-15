#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRailBallConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C2110)
#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C1D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallConfigRow_TypeDefinitionIndex = 12099;

	class ParkourRailBallConfigRow : public ::System::Object
	{
	public:
		::System::String* UI3DPrefabPath; // 0x10
		::System::String* ResPath; // 0x18
		::System::String* BigResPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::UInt32 UpgradeBallID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x38
		::System::Single SpeedDisplay; // 0x48
		::System::UInt32 SkillID; // 0x4C
		::System::UInt32 UpgradeSubMission; // 0x50
		::System::UInt32 ID; // 0x54
		::System::Single StabilityDisplay; // 0x58
		::System::Single SkillChargeDisplay; // 0x5C
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
