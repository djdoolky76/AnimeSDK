#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceRogueWorkbenchGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC8E0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC8F0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceRogueWorkbenchGroupConfig_TypeDefinitionIndex = 17878;

	class RogueModifierReplaceRogueWorkbenchGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
