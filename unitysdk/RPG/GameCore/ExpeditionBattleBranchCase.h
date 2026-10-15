#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchComparer.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleBranchCase; }

#define RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E4D0)
#define RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68E300)

namespace RPG::GameCore
{
	class ExpeditionBattleBranchCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint CaseValue; // 0x10
		::RPG::GameCore::ExpeditionBattleBranchComparer Comparer; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleBranchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleBranchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
