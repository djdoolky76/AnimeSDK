#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamInActiveFormulaCategoryCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2AAC0)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2AAD0)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2AA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamInActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 19824;

	class RogueParamInActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
