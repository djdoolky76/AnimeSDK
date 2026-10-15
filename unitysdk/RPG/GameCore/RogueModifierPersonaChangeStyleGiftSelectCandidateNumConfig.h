#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB800)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB810)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig_TypeDefinitionIndex = 17833;

	class RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
