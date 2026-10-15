#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterMiracleDestroyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E7D60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E7D70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E7D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterMiracleDestroyConfig_TypeDefinitionIndex = 17982;

	class RogueModifierExecuteActionAfterMiracleDestroyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
