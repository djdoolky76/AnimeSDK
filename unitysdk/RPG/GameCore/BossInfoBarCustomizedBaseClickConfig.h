#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BossInfoBarCustomizedBaseClickConfig; }

#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF50C30)
#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF50C40)
#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF50A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BossInfoBarCustomizedBaseClickConfig_TypeDefinitionIndex = 24100;

	class BossInfoBarCustomizedBaseClickConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDBASECLICKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
