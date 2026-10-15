#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialLockControl; }

#define INMHNHPBDOF_CTOR_OFFSET UNITYSDK_OFFSET(0x164F7180)
#define INMHNHPBDOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164F71B0)
#define INMHNHPBDOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164F71F0)

	class INMHNHPBDOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialLockControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialLockControl*))((::PBYTE)hIl2Cpp + INMHNHPBDOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMHNHPBDOF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMHNHPBDOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
