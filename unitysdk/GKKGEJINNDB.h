#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsActivityInSchedule; }
namespace RPG::GameCore { class TaskContext; }

#define GKKGEJINNDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9E2B0)
#define GKKGEJINNDB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A9E2E0)

	class GKKGEJINNDB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + GKKGEJINNDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKGEJINNDB_EVALUATE_OFFSET))(this);
		}

	};
