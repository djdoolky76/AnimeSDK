#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamFormulaNotRequiredBuffCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2AA00)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2AA10)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2A9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamFormulaNotRequiredBuffCountConfig_TypeDefinitionIndex = 19826;

	class RogueParamFormulaNotRequiredBuffCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
