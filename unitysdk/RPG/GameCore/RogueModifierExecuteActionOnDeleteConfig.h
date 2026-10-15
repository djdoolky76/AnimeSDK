#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnDeleteConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15C00)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15C10)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDeleteConfig_TypeDefinitionIndex = 17692;

	class RogueModifierExecuteActionOnDeleteConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
