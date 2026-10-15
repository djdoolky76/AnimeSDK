#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GFDODFDACLL;
namespace RPG::GameCore { class EvolveBuildStagePeriodRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D65B260)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D65A8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStagePeriodRow_TypeDefinitionIndex = 11421;

	class EvolveBuildStagePeriodRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CountdownList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SpecialMonsterScoreList; // 0x18
		::Il2CppArray<::System::Single>* EmotionList; // 0x20
		::Il2CppArray<::GFDODFDACLL*>* WeaknessList; // 0x28
		::System::UInt32 StagePeriodID; // 0x30
		::System::UInt32 WaveCount; // 0x34
		::RPG::GameCore::EvolvePeriodType PeriodRank; // 0x38
		::System::UInt32 BattleArea; // 0x3C
		::System::UInt32 StageScore; // 0x40
		::System::UInt32 StageID; // 0x44
		::System::UInt32 PeriodScore; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint DeadLinePosition; // 0x50
		::System::UInt32 EventID; // 0x58
		::System::UInt32 Weight; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildStagePeriodRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildStagePeriodRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
