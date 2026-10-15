#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyShowEventFadeIn; }

#define JAMEEGCPHGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1655B680)
#define JAMEEGCPHGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1655B690)
#define JAMEEGCPHGC_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x1655B8E0)
#define JAMEEGCPHGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1655B6D0)
#define JAMEEGCPHGC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1655B830)
#define JAMEEGCPHGC_TICK_OFFSET UNITYSDK_OFFSET(0x1655B880)

	class JAMEEGCPHGC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyShowEventFadeIn* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyShowEventFadeIn*))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_TICK_OFFSET))(this, a1);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMEEGCPHGC_DMJKBKMKKCG_OFFSET))(this);
		}

	};
