#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorSavedValueV2; }
namespace RPG::GameCore { class TaskContext; }

#define LPKMPBMNACA_CTOR_OFFSET UNITYSDK_OFFSET(0xB822C20)
#define LPKMPBMNACA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB822C50)

	class LPKMPBMNACA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + LPKMPBMNACA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMPBMNACA_EVALUATE_OFFSET))(this);
		}

	};
