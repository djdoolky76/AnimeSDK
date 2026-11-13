#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueMiracleCountByParamConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20734F50)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20734F60)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20734F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleCountByParamConfig_TypeDefinitionIndex = 19936;

	class RogueActGetRogueMiracleCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
