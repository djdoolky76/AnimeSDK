#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }

#define RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608800)
#define RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFeverSkillLevelConfig_TypeDefinitionIndex = 18461;

	class ElfFeverSkillLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Combo; // 0x14
		::System::UInt32 AbilityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFeverSkillLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFeverSkillLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
