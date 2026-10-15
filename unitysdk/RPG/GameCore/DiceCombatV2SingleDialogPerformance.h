#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceGenderSpec.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceTiming.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E7D30)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E7A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformance_TypeDefinitionIndex = 16187;

	class DiceCombatV2SingleDialogPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition* TriggerCondition; // 0x10
		::RPG::GameCore::DiceCombatV2DialogPerformanceTiming Timing; // 0x18
		::System::Int32 MaxTriggerCount; // 0x1C
		::System::Int32 Priority; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x28
		::System::Boolean SkipBeforeBossChangePhase; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DiceCombatV2DialogPerformanceGenderSpec GenderSpec; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
