#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueAreaDifficultyConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FD400)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FD410)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FD3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaDifficultyConfig_TypeDefinitionIndex = 19844;

	class RogueParamRogueAreaDifficultyConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
