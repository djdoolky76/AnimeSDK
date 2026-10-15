#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableMazeLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define BLJILHBNLOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA789B0)
#define BLJILHBNLOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA789E0)

	class BLJILHBNLOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableMazeLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableMazeLockTarget*))((::PBYTE)hIl2Cpp + BLJILHBNLOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJILHBNLOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
