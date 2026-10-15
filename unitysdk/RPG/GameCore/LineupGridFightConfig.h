#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class LineupGridFightAvatarData; }
namespace RPG::GameCore { class LineupGridFightConfig; }
namespace RPG::GameCore { class LineupGridFightTraitParam; }

#define RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D56D0)
#define RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupGridFightConfig_TypeDefinitionIndex = 18129;

	class LineupGridFightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LineupGridFightAvatarData*>* RoleList; // 0x10
		::Il2CppArray<::RPG::GameCore::LineupGridFightTraitParam*>* TraitParamList; // 0x18
		::System::UInt32 GlobalHp; // 0x20
		::System::UInt32 PlayerLevel; // 0x24
		::System::UInt32 WaveIndex; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* BackendAvatarList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupGridFightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupGridFightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
