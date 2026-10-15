#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class BattleLineupConfig; }
namespace RPG::GameCore { class LineupGridFightConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLELINEUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45FE90)
#define RPG_GAMECORE_BATTLELINEUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45FC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupConfig_TypeDefinitionIndex = 18130;

	class BattleLineupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::System::String* SkillTreePreset; // 0x20
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* LineupConfigList; // 0x30
		::RPG::GameCore::LineupGridFightConfig* RLGridFightData; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleLineupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleLineupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
