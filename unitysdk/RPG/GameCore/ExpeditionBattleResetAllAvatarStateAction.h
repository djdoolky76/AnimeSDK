#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleResetAllAvatarStateAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6628D0)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D6628E0)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D662840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleResetAllAvatarStateAction_TypeDefinitionIndex = 16219;

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
