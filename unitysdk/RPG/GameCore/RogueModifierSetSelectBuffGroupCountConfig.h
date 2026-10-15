#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetSelectBuffGroupCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A7C0)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A7D0)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffGroupCountConfig_TypeDefinitionIndex = 17970;

	class RogueModifierSetSelectBuffGroupCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
