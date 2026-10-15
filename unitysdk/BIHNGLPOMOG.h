#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTargetCount; }
namespace RPG::GameCore { class TaskContext; }

#define BIHNGLPOMOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8790)
#define BIHNGLPOMOG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4A87C0)

	class BIHNGLPOMOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + BIHNGLPOMOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHNGLPOMOG_EVALUATE_OFFSET))(this);
		}

	};
