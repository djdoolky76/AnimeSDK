#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ManualTriggerAnimEvent; }
namespace RPG::GameCore { class TaskContext; }

#define GAKIPNCAACE_CTOR_OFFSET UNITYSDK_OFFSET(0x15940BB0)
#define GAKIPNCAACE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15940BE0)

	class GAKIPNCAACE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ManualTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ManualTriggerAnimEvent*))((::PBYTE)hIl2Cpp + GAKIPNCAACE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKIPNCAACE_ONTASKBEGIN_OFFSET))(this);
		}

	};
