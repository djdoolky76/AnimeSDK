#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncComposeMagicUnitConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46190)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA461A0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncComposeMagicUnitConfig_TypeDefinitionIndex = 18031;

	class RogueWorkbenchFuncComposeMagicUnitConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncComposeMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCCOMPOSEMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
