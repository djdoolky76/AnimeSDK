#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class EPPMJHGHPGA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceReplayLogicOverrideRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D901F90)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D901310)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D901930)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D901280)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D9012E0)

namespace RPG::GameCore
{
	class PerformanceReplayLogicOverrideRow : public ::System::Object
	{
	public:
		::System::String* PatchLevelGraph; // 0x10
		::Il2CppArray<::System::UInt32>* OverrideDeactiveGroup; // 0x18
		::System::String* OverrideMissionAudioState; // 0x20
		::Il2CppArray<::EPPMJHGHPGA*>* OverridePropState; // 0x28
		::Il2CppArray<::System::UInt32>* OverrideActiveGroup; // 0x30
		::System::UInt32 IsOverridePropStateFlag; // 0x38
		::System::UInt32 IsOverrideEndBlackTypeFlag; // 0x3C
		::System::UInt32 OverrideIsBranch; // 0x40
		::System::UInt32 IsOverridePerformancePriorityFlag; // 0x44
		::System::UInt32 IsOverrideBranchFlag; // 0x48
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x4C
		::System::UInt32 IsOverrideMissionAudioStateFlag; // 0x50
		::System::UInt32 IsOverrideActiveGroupFlag; // 0x54
		::System::UInt32 IsOverrideMissionLGDisableFlag; // 0x58
		::System::UInt32 OverrideIntent; // 0x5C
		::System::UInt32 PerformanceID; // 0x60
		::System::Int32 OverridePerformancePriority; // 0x64
		::System::UInt32 IsOverrideDeactiveGroupFlag; // 0x68
		::System::Int32 OverrideEndBlackType; // 0x6C
		::System::UInt32 OverrideMissionLGDisable; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
