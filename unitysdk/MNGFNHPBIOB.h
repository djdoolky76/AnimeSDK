#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMechanismBarPhase; }

#define MNGFNHPBIOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA08040)
#define MNGFNHPBIOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA08050)
#define MNGFNHPBIOB_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0xBA08120)
#define MNGFNHPBIOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA08090)
#define MNGFNHPBIOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA08160)
#define MNGFNHPBIOB_TICK_OFFSET UNITYSDK_OFFSET(0xBA081B0)

	class MNGFNHPBIOB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMechanismBarPhase* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean FBGHGOFHLAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_FBGHGOFHLAA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_TICK_OFFSET))(this, a1);
		}

	};
