#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamUpgradableMagicUnitLevelCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE060)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE070)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicUnitLevelCountConfig_TypeDefinitionIndex = 19829;

	class RogueParamUpgradableMagicUnitLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
