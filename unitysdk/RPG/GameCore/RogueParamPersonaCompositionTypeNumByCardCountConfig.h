#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamPersonaCompositionTypeNumByCardCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FD340)
#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FD350)
#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FD300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamPersonaCompositionTypeNumByCardCountConfig_TypeDefinitionIndex = 19862;

	class RogueParamPersonaCompositionTypeNumByCardCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
