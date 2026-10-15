#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillAIEffectConfig; }
namespace RPG::GameCore { class DiceCombatWeatherSkillConfig; }

#define RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6165B0)
#define RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D616480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatWeatherSkillConfig_TypeDefinitionIndex = 16161;

	class DiceCombatWeatherSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>* PreviewConfigs; // 0x10
		::RPG::GameCore::DiceCombatSkillAIEffectConfig* AIEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatWeatherSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatWeatherSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATWEATHERSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
