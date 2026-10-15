#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActReplaceAllRogueFormulaByCategoryConfig; }

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A13C0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A13D0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueFormulaByCategoryConfig_TypeDefinitionIndex = 19660;

	class RogueActReplaceAllRogueFormulaByCategoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
