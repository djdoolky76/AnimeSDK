#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByPlantFesIsInMove; }
namespace RPG::GameCore { class TaskContext; }

#define KKLGJLPEOGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CBB50)
#define KKLGJLPEOGM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4CBB80)

inline static constexpr unsigned int KKLGJLPEOGM_TypeDefinitionIndex = 57991;

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
