#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCompareDimensionID; }
namespace RPG::GameCore { class TaskContext; }

#define FPAOLLAIEEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1590B650)
#define FPAOLLAIEEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1590B680)

	class FPAOLLAIEEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + FPAOLLAIEEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAOLLAIEEL_EVALUATE_OFFSET))(this);
		}

	};
