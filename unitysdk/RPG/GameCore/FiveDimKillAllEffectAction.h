#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimKillAllEffectAction; }

#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5510)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C5520)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5440)

namespace RPG::GameCore
{
	class FiveDimKillAllEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean NeedFadeOut; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimKillAllEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimKillAllEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimKillAllEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimKillAllEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
