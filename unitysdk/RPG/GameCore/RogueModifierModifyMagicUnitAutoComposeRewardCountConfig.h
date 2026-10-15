#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyMagicUnitAutoComposeRewardCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17FC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17FD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitAutoComposeRewardCountConfig_TypeDefinitionIndex = 17735;

	class RogueModifierModifyMagicUnitAutoComposeRewardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
