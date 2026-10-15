#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByCompareHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CFHLIIFCBBF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4C710)
#define CFHLIIFCBBF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC4C740)

	class CFHLIIFCBBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + CFHLIIFCBBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHLIIFCBBF_EVALUATE_OFFSET))(this);
		}

	};
