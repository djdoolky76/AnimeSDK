#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20601FA0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x206014C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionStageRow_TypeDefinitionIndex = 13729;

	class GridFightDivisionStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnvironmentBuffList; // 0x10
		::Il2CppArray<::System::String*>* EnvironmentDescList; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::Il2CppArray<::System::String*>* UniqueEnvironmentDescList; // 0x30
		::Il2CppArray<::System::UInt32>* AffixChooseNumList; // 0x38
		::System::UInt32 BinaryNodeDiffAddRule; // 0x40
		::System::UInt32 DivisionID; // 0x44
		::System::UInt32 WeeklyScoreModify; // 0x48
		::System::UInt32 ScoreRule; // 0x4C
		::RPG::GameCore::FixPoint LevelBaseCounterMultiRatio; // 0x50
		::System::UInt32 OCScoreRule; // 0x58
		::System::UInt32 EnemyDifficultyLevel; // 0x5C
		::RPG::GameCore::FixPoint LevelBaseHPMultiRatio; // 0x60
		::System::UInt32 ExpModify; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint LevelBaseAttackMultiRatio; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDivisionStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDivisionStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
