#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournLayerIndexConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B5A0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B5B0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournLayerIndexConfig_TypeDefinitionIndex = 19834;

	class RogueParamRogueTournLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
