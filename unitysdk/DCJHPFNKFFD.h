#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BattleCollegeAimShow; }
namespace RPG::GameCore { class TaskContext; }

#define DCJHPFNKFFD_CTOR_OFFSET UNITYSDK_OFFSET(0xE249B50)
#define DCJHPFNKFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE249B60)
#define DCJHPFNKFFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE249C00)
#define DCJHPFNKFFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE249E90)
#define DCJHPFNKFFD_TICK_OFFSET UNITYSDK_OFFSET(0xE249BA0)

	class DCJHPFNKFFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::BattleCollegeAimShow* OFKGLJOAMLD; // 0x20
		::System::Boolean DOCIDMKAAGA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleCollegeAimShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleCollegeAimShow*))((::PBYTE)hIl2Cpp + DCJHPFNKFFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHPFNKFFD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCJHPFNKFFD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHPFNKFFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHPFNKFFD_ONTASKRESET_OFFSET))(this);
		}

	};
