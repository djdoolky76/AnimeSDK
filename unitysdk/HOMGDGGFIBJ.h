#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Timer; }
namespace RPG::GameCore { class TaskContext; }

#define HOMGDGGFIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBBEB0)
#define HOMGDGGFIBJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DBBEE0)
#define HOMGDGGFIBJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DBBF30)
#define HOMGDGGFIBJ_TICK_OFFSET UNITYSDK_OFFSET(0x15DBBF80)

	class HOMGDGGFIBJ
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Timer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Timer*))((::PBYTE)hIl2Cpp + HOMGDGGFIBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMGDGGFIBJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMGDGGFIBJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOMGDGGFIBJ_TICK_OFFSET))(this, a1);
		}

	};
