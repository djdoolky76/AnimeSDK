#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class HideMissionInfo; }
namespace RPG::GameCore { class TaskContext; }

#define AHLLEJILKNA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB87730)
#define AHLLEJILKNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB87740)
#define AHLLEJILKNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB87780)
#define AHLLEJILKNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB87830)
#define AHLLEJILKNA_TICK_OFFSET UNITYSDK_OFFSET(0xEB87880)

	class AHLLEJILKNA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::HideMissionInfo* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideMissionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideMissionInfo*))((::PBYTE)hIl2Cpp + AHLLEJILKNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLLEJILKNA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLLEJILKNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLLEJILKNA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHLLEJILKNA_TICK_OFFSET))(this, a1);
		}

	};
