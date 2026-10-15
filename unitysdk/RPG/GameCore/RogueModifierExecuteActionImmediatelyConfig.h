#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionImmediatelyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E80C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E80D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E8080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionImmediatelyConfig_TypeDefinitionIndex = 17939;

	class RogueModifierExecuteActionImmediatelyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionImmediatelyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONIMMEDIATELYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
