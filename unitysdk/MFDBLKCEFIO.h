#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GridFightShowBattleEventHint; }
namespace RPG::GameCore { class TaskContext; }

#define MFDBLKCEFIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EE9D0)
#define MFDBLKCEFIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EEA00)

	class MFDBLKCEFIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowBattleEventHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowBattleEventHint*))((::PBYTE)hIl2Cpp + MFDBLKCEFIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDBLKCEFIO_ONTASKBEGIN_OFFSET))(this);
		}

	};
