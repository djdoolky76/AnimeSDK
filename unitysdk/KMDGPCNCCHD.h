#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasInsertActionByTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KMDGPCNCCHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB543B20)
#define KMDGPCNCCHD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB543B50)

	class KMDGPCNCCHD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + KMDGPCNCCHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGPCNCCHD_EVALUATE_OFFSET))(this);
		}

	};
