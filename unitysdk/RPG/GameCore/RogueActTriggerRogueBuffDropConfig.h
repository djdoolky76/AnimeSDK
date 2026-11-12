#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueBuffDropConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEADA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBEADB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBEAD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffDropConfig_TypeDefinitionIndex = 19919;

	class RogueActTriggerRogueBuffDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
