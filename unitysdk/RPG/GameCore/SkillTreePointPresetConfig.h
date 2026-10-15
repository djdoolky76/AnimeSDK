#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillTreePointPreset; }
namespace RPG::GameCore { class SkillTreePointPresetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2BC0)
#define RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreePointPresetConfig_TypeDefinitionIndex = 18137;

	class SkillTreePointPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* DisplayName; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillTreePointPreset*>* PresetList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillTreePointPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillTreePointPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
