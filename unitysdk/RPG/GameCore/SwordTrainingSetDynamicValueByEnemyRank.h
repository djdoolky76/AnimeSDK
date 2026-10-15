#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByEnemyRank; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4CA90)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB4CAA0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4CA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByEnemyRank_TypeDefinitionIndex = 22599;

	class SwordTrainingSetDynamicValueByEnemyRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
