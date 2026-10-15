#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleShowFunTitleAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690950)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690960)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6908C0)

namespace RPG::GameCore
{
	class ExpeditionBattleShowFunTitleAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
