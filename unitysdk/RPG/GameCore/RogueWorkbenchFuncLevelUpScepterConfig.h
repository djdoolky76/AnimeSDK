#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncLevelUpScepterConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46210)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA46220)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46460)

namespace RPG::GameCore
{
	class RogueWorkbenchFuncLevelUpScepterConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncLevelUpScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCLEVELUPSCEPTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
