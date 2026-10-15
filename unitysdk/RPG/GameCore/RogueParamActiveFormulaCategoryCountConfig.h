#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamActiveFormulaCategoryCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2A810)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2A820)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2A7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 19823;

	class RogueParamActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
