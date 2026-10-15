#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPropHitResultConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA184A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA184B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPropHitResultConfig_TypeDefinitionIndex = 17966;

	class RogueModifierModifyPropHitResultConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
