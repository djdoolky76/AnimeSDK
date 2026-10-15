#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueBuffSelectByAeonConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974540)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974550)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByAeonConfig_TypeDefinitionIndex = 19649;

	class RogueActTriggerRogueBuffSelectByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
