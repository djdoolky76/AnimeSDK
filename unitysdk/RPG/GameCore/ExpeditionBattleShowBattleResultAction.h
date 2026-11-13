#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleShowBattleResultAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC88270)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1FC88280)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC881E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleShowBattleResultAction_TypeDefinitionIndex = 16374;

	class ExpeditionBattleShowBattleResultAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleShowBattleResultAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleShowBattleResultAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleShowBattleResultAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleShowBattleResultAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWBATTLERESULTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
