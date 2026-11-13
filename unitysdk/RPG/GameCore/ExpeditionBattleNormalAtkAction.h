#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleNormalAtkAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC87830)
#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1FC87840)
#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC877A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleNormalAtkAction_TypeDefinitionIndex = 16370;

	class ExpeditionBattleNormalAtkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleNormalAtkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleNormalAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleNormalAtkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleNormalAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
