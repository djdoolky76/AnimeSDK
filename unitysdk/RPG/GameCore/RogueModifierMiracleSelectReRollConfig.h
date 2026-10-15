#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierMiracleSelectReRollConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9B40)
#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9B50)
#define RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierMiracleSelectReRollConfig_TypeDefinitionIndex = 17782;

	class RogueModifierMiracleSelectReRollConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierMiracleSelectReRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMIRACLESELECTREROLLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
