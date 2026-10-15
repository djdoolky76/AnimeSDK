#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB860)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB870)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig_TypeDefinitionIndex = 17832;

	class RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
