#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterHUDVisibleType; }
namespace RPG::GameCore { class TaskContext; }

#define IKFJKKMECOI_CTOR_OFFSET UNITYSDK_OFFSET(0x16487C70)
#define IKFJKKMECOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16487CA0)

	class IKFJKKMECOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + IKFJKKMECOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFJKKMECOI_ONTASKBEGIN_OFFSET))(this);
		}

	};
