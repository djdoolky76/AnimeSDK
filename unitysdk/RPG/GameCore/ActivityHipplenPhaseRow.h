#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AOIOJIPNOAL;
class FCOEMCEDLNL;
class KPHMLOHPAAD;
namespace RPG::GameCore { class ActivityHipplenPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D368B80)
#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D368650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenPhaseRow_TypeDefinitionIndex = 11633;

	class ActivityHipplenPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DailyAgendaIDs; // 0x10
		::Il2CppArray<::AOIOJIPNOAL*>* UnlockAutoTrialConditions; // 0x18
		::System::String* MiniGameAreaPath; // 0x20
		::Il2CppArray<::System::UInt32>* StatRange; // 0x28
		::Il2CppArray<::KPHMLOHPAAD*>* StatGrade; // 0x30
		::System::UInt32 ActionPointsTotal; // 0x38
		::System::UInt32 TrialGameID; // 0x3C
		::System::Boolean ForwardTrialClosePage; // 0x40
		::System::Boolean BackwardTrialClosePage; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 CycleID; // 0x44
		::System::UInt32 GrowthPhaseID; // 0x48
		::System::UInt32 PhaseType; // 0x4C
		::System::UInt32 ForwardTrialSubMissionID; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TrailTargetDesc; // 0x58
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
