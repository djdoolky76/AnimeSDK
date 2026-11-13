#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueMagicLayerIndexConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B4F30)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B4F40)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B4EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicLayerIndexConfig_TypeDefinitionIndex = 20165;

	class RogueParamRogueMagicLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
