#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncBaseConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA188D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA188E0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncBaseConfig_TypeDefinitionIndex = 18017;

	class RogueWorkbenchFuncBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
