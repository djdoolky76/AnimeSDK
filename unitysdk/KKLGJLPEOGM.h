#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByPlantFesIsInMove; }
namespace RPG::GameCore { class TaskContext; }

#define KKLGJLPEOGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D28E0)
#define KKLGJLPEOGM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4D2910)

	class KKLGJLPEOGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + KKLGJLPEOGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLGJLPEOGM_EVALUATE_OFFSET))(this);
		}

	};
