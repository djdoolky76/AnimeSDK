#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePerformanceResult; }
namespace RPG::GameCore { class TaskContext; }

#define DDLIKFGGPIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E6D00)
#define DDLIKFGGPIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE4E6D30)

	class DDLIKFGGPIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + DDLIKFGGPIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLIKFGGPIJ_EVALUATE_OFFSET))(this);
		}

	};
