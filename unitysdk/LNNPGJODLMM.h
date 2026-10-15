#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareVersionFinalMainMission; }
namespace RPG::GameCore { class TaskContext; }

#define LNNPGJODLMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9A40)
#define LNNPGJODLMM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7E9A70)

	class LNNPGJODLMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + LNNPGJODLMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNPGJODLMM_EVALUATE_OFFSET))(this);
		}

	};
