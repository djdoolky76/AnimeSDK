#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossInfoBarCustomizedBaseClickConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BossInfoBarCustomizedTutorialConfig; }

#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6877A0)
#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6877B0)
#define RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6878C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BossInfoBarCustomizedTutorialConfig_TypeDefinitionIndex = 24101;

	class BossInfoBarCustomizedTutorialConfig : public ::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig
	{
	public:
		::System::UInt32 TutorialGroupID; // 0x10
		::System::Boolean EnableCloseAlways; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BossInfoBarCustomizedTutorialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BossInfoBarCustomizedTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BossInfoBarCustomizedTutorialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BossInfoBarCustomizedTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOSSINFOBARCUSTOMIZEDTUTORIALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
