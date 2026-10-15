#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AOIOJIPNOAL;
class FCOEMCEDLNL;
class KPHMLOHPAAD;
namespace RPG::GameCore { class ActivityHipplenPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33B0B0)
#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33AB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenPhaseRow_TypeDefinitionIndex = 11633;

	class ActivityHipplenPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::KPHMLOHPAAD*>* StatGrade; // 0x10
		::System::String* MiniGameAreaPath; // 0x18
		::Il2CppArray<::System::UInt32>* DailyAgendaIDs; // 0x20
		::Il2CppArray<::System::UInt32>* StatRange; // 0x28
		::Il2CppArray<::AOIOJIPNOAL*>* UnlockAutoTrialConditions; // 0x30
		::System::Boolean ForwardTrialClosePage; // 0x38
		::System::Boolean BackwardTrialClosePage; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 ActionPointsTotal; // 0x3C
		::System::UInt32 GrowthPhaseID; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TrailTargetDesc; // 0x48
		::System::UInt32 PhaseType; // 0x58
		::System::UInt32 TrialGameID; // 0x5C
		::System::UInt32 ForwardTrialSubMissionID; // 0x60
		::System::UInt32 CycleID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
