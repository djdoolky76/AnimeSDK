#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondBrokenMiracleCountConfig; }

#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984710)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984720)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9846D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBrokenMiracleCountConfig_TypeDefinitionIndex = 19797;

	class RogueCondBrokenMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
