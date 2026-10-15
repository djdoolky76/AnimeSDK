#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLastKillFinish; }

#define GAJMCFJOMPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1593DC40)
#define GAJMCFJOMPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1593DC50)
#define GAJMCFJOMPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593DC90)
#define GAJMCFJOMPF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1593DD30)
#define GAJMCFJOMPF_TICK_OFFSET UNITYSDK_OFFSET(0x1593DD80)

	class GAJMCFJOMPF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitLastKillFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLastKillFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLastKillFinish*))((::PBYTE)hIl2Cpp + GAJMCFJOMPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJMCFJOMPF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJMCFJOMPF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJMCFJOMPF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAJMCFJOMPF_TICK_OFFSET))(this, a1);
		}

	};
