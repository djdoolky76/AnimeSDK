#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaStatLogConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0C40)
#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0C50)
#define RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaStatLogConfig_TypeDefinitionIndex = 19786;

	class RogueActPersonaStatLogConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaStatLogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaStatLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaStatLogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaStatLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASTATLOGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
