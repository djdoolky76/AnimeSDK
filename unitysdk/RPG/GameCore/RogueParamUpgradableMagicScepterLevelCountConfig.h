#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamUpgradableMagicScepterLevelCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE000)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE010)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicScepterLevelCountConfig_TypeDefinitionIndex = 19830;

	class RogueParamUpgradableMagicScepterLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
