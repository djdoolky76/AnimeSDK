#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkUnlockScript; }
namespace RPG::GameCore { class TaskContext; }

#define KCLLIMILFPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB33D880)
#define KCLLIMILFPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB33D890)
#define KCLLIMILFPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB33D930)
#define KCLLIMILFPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB33D980)
#define KCLLIMILFPG_TICK_OFFSET UNITYSDK_OFFSET(0xB33D8D0)

	class KCLLIMILFPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkUnlockScript* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkUnlockScript* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkUnlockScript*))((::PBYTE)hIl2Cpp + KCLLIMILFPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLIMILFPG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCLLIMILFPG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLIMILFPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLIMILFPG_ONTASKRESET_OFFSET))(this);
		}

	};
