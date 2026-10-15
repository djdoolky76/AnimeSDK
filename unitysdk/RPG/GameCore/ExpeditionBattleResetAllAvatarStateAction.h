#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleResetAllAvatarStateAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690350)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690360)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6902C0)

namespace RPG::GameCore
{
	class ExpeditionBattleResetAllAvatarStateAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
