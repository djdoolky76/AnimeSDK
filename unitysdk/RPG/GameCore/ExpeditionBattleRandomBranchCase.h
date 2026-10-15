#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleRandomBranchCase; }

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690010)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68FE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRandomBranchCase_TypeDefinitionIndex = 16203;

	class ExpeditionBattleRandomBranchCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleRandomBranchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
