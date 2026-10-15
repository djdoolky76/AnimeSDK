#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class TaskContext; }

#define OOIDFENGNJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF86F60)
#define OOIDFENGNJG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF86F90)

	class OOIDFENGNJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + OOIDFENGNJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIDFENGNJG_EVALUATE_OFFSET))(this);
		}

	};
