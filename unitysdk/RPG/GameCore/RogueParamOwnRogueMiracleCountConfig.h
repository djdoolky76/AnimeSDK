#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamOwnRogueMiracleCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FD2E0)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FD2F0)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FD2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamOwnRogueMiracleCountConfig_TypeDefinitionIndex = 19843;

	class RogueParamOwnRogueMiracleCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
