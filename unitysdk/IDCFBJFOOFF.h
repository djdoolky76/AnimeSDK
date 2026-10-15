#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMissionWayPoint; }
namespace RPG::GameCore { class TaskContext; }

#define IDCFBJFOOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E6B020)
#define IDCFBJFOOFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E6B030)
#define IDCFBJFOOFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E6B070)
#define IDCFBJFOOFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E6B260)
#define IDCFBJFOOFF_TICK_OFFSET UNITYSDK_OFFSET(0x15EAC510)

	class IDCFBJFOOFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetMissionWayPoint* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionWayPoint*))((::PBYTE)hIl2Cpp + IDCFBJFOOFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFBJFOOFF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFBJFOOFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFBJFOOFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCFBJFOOFF_TICK_OFFSET))(this, a1);
		}

	};
