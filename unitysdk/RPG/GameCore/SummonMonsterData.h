#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONMONSTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3A300)
#define RPG_GAMECORE_SUMMONMONSTERDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB39600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonsterData_TypeDefinitionIndex = 22655;

	class SummonMonsterData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x10
		::RPG::GameCore::StringHash MonsterIDFromCustomValue; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* RowIndex; // 0x20
		::RPG::GameCore::TeamLocationType LocationType; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* InitAnimStateName; // 0x30
		::System::String* UniqueName; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup; // 0x40
		::RPG::GameCore::DynamicFloat* MonsterSlot; // 0x48
		::RPG::GameCore::TargetEvaluator* GroupLeader; // 0x50
		::System::Int32 TeamLocationOffset; // 0x58
		::System::Single SkillFormationVirtualOffset; // 0x5C
		::RPG::GameCore::TargetEvaluator* OverrideLocationCaster; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonMonsterData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonMonsterData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
