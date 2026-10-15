#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupSystemUnlockConditionSet; }

#define RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1D00)
#define RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B0DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSystemUnlockConditionSet_TypeDefinitionIndex = 17211;

	class LevelGroupSystemUnlockConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSystemUnlockConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSystemUnlockConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSYSTEMUNLOCKCONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
