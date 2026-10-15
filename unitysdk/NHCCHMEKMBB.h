#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBattleEventButton; }
namespace RPG::GameCore { class TaskContext; }

#define NHCCHMEKMBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBCAC0)
#define NHCCHMEKMBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBBCAD0)
#define NHCCHMEKMBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBBCB10)
#define NHCCHMEKMBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBBCB90)
#define NHCCHMEKMBB_TICK_OFFSET UNITYSDK_OFFSET(0xBBBCBE0)

	class NHCCHMEKMBB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowBattleEventButton* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + NHCCHMEKMBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCCHMEKMBB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCCHMEKMBB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCCHMEKMBB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHCCHMEKMBB_TICK_OFFSET))(this, a1);
		}

	};
