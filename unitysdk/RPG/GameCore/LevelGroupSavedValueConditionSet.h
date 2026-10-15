#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupSavedValueConditionSet; }

#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1BB0)
#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B0C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSavedValueConditionSet_TypeDefinitionIndex = 17210;

	class LevelGroupSavedValueConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupSavedValueCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSavedValueConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSavedValueConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
