#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureMonsterTriggerMoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define ELANPBFPKEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1551BB50)
#define ELANPBFPKEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1551BB60)
#define ELANPBFPKEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551BBA0)
#define ELANPBFPKEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1551BF40)
#define ELANPBFPKEA_TICK_OFFSET UNITYSDK_OFFSET(0x1551C030)

	class ELANPBFPKEA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*))((::PBYTE)hIl2Cpp + ELANPBFPKEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANPBFPKEA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANPBFPKEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANPBFPKEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELANPBFPKEA_TICK_OFFSET))(this, a1);
		}

	};
