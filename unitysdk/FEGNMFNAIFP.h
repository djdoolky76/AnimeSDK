#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyTriggerDailySettlement; }
namespace RPG::GameCore { class TaskContext; }

#define FEGNMFNAIFP_CTOR_OFFSET UNITYSDK_OFFSET(0x156E8D70)
#define FEGNMFNAIFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156E8E30)
#define FEGNMFNAIFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E8D80)
#define FEGNMFNAIFP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156E8DE0)
#define FEGNMFNAIFP_TICK_OFFSET UNITYSDK_OFFSET(0x156E8E80)

	class FEGNMFNAIFP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyTriggerDailySettlement* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyTriggerDailySettlement*))((::PBYTE)hIl2Cpp + FEGNMFNAIFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGNMFNAIFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGNMFNAIFP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGNMFNAIFP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEGNMFNAIFP_TICK_OFFSET))(this, a1);
		}

	};
