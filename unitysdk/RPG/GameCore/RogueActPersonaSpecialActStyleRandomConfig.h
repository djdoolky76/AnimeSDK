#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSpecialActStyleRandomConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973220)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973230)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9731E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSpecialActStyleRandomConfig_TypeDefinitionIndex = 19779;

	class RogueActPersonaSpecialActStyleRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSpecialActStyleRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALACTSTYLERANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
