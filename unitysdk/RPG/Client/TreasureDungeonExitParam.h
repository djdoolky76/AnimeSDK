#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KENIHFGIDEO;
namespace RPG::Client { class TreasureDungeonLevel; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONEXITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6A680)
#define RPG_CLIENT_TREASUREDUNGEONEXITPARAM_SYNC_OFFSET UNITYSDK_OFFSET(0x1CE698C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonExitParam_TypeDefinitionIndex = 70134;

	class TreasureDungeonExitParam : public ::System::Object
	{
	public:
		::System::String* AttackExIcon; // 0x10
		::RPG::Client::TextID AttackExName; // 0x18
		::System::UInt32 TotalTrialAvatarFound; // 0x28
		::System::Boolean IsWin; // 0x2C
		::System::Boolean IsFinish; // 0x2D
		::System::Boolean IsAllDead; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 TotalBuffFound; // 0x30
		::System::UInt32 GroupID; // 0x34
		::System::UInt32 TotalUltraItemFound; // 0x38
		::System::UInt32 TotalDefenceItemFound; // 0x3C
		::System::UInt32 MaxFloor; // 0x40
		::System::UInt32 AttackExAdd; // 0x44
		::System::UInt32 TotalEnemyKilled; // 0x48
		::System::UInt32 AttackAdd; // 0x4C
		::System::UInt32 TotalAttackItemFound; // 0x50
		::System::UInt32 CurFloor; // 0x54
		::System::UInt32 TotalExploreUsed; // 0x58
		::System::UInt32 DefenceAdd; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONEXITPARAM_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::KENIHFGIDEO* a1, ::RPG::Client::TreasureDungeonLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KENIHFGIDEO*, ::RPG::Client::TreasureDungeonLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONEXITPARAM_SYNC_OFFSET))(this, a1, a2);
		}

	};
}
