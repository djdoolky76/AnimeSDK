#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }
namespace RPG::GameCore { class FourRotateVoxelLevelVarConditionSet; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F04E0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EF840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelVarConditionSet_TypeDefinitionIndex = 16779;

	class FourRotateVoxelLevelVarConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelLevelVarCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelVarConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelVarConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
