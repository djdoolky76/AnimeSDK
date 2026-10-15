#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBlackboardBaseConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA178A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA178B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17700)

namespace RPG::GameCore
{
	class RogueModifierModifyBlackboardBaseConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
