#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChangeTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define OPBPNPEPDLL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA0E00)
#define OPBPNPEPDLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFA0E10)
#define OPBPNPEPDLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFA0E50)
#define OPBPNPEPDLL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFA1080)
#define OPBPNPEPDLL_TICK_OFFSET UNITYSDK_OFFSET(0xBFA10D0)

	class OPBPNPEPDLL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ChangeTrackingMission* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeTrackingMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeTrackingMission*))((::PBYTE)hIl2Cpp + OPBPNPEPDLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBPNPEPDLL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBPNPEPDLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBPNPEPDLL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPBPNPEPDLL_TICK_OFFSET))(this, a1);
		}

	};
