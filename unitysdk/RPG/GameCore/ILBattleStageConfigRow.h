#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D776D40)
#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7769F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleStageConfigRow_TypeDefinitionIndex = 13797;

	class ILBattleStageConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonConfigPath; // 0x10
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x18
		::System::UInt64 RecommendIdleCrystal; // 0x20
		::System::UInt32 CombatAdvantageGroup; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt16 RecommendDungeonFloor; // 0x34
		::System::Byte _padding0[0x2];
		::System::UInt32 HardLevelGroup; // 0x38
		::System::UInt32 EliteGroup; // 0x3C
		::System::UInt64 CombatValue; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleStageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
