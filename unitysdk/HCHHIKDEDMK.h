#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareRotatableRegionLoadingState; }
namespace RPG::GameCore { class TaskContext; }

#define HCHHIKDEDMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1EE50)
#define HCHHIKDEDMK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C1EE80)

	class HCHHIKDEDMK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + HCHHIKDEDMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHHIKDEDMK_EVALUATE_OFFSET))(this);
		}

	};
