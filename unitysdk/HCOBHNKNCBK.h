#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRankActivatedFromLineup; }
namespace RPG::GameCore { class TaskContext; }

#define HCOBHNKNCBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A460)
#define HCOBHNKNCBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C2A490)

	class HCOBHNKNCBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + HCOBHNKNCBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOBHNKNCBK_EVALUATE_OFFSET))(this);
		}

	};
