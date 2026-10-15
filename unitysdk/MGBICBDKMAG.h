#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SyncBattleEventPropertyValues; }
namespace RPG::GameCore { class TaskContext; }

#define MGBICBDKMAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB914D70)
#define MGBICBDKMAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB914DA0)

	class MGBICBDKMAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncBattleEventPropertyValues* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncBattleEventPropertyValues*))((::PBYTE)hIl2Cpp + MGBICBDKMAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBICBDKMAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
