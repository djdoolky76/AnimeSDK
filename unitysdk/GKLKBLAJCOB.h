#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetRogueTournFloorType; }
namespace RPG::GameCore { class TaskContext; }

#define GKLKBLAJCOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA1770)
#define GKLKBLAJCOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AA17A0)

	class GKLKBLAJCOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + GKLKBLAJCOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKBLAJCOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
