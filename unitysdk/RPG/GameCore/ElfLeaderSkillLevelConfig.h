#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfLeaderSkillLevelConfig; }

#define RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D609090)
#define RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfLeaderSkillLevelConfig_TypeDefinitionIndex = 18463;

	class ElfLeaderSkillLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 MaxUse; // 0x14
		::System::Single Duration; // 0x18
		::System::Single CD; // 0x1C
		::System::UInt32 AbilityID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfLeaderSkillLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfLeaderSkillLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
