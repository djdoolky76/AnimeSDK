#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMainMissionState; }
namespace RPG::GameCore { class TaskContext; }

#define AOJFBECBFLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A84A820)
#define AOJFBECBFLJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A84A850)

inline static constexpr unsigned int AOJFBECBFLJ_TypeDefinitionIndex = 53683;

	class AOJFBECBFLJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + AOJFBECBFLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJFBECBFLJ_EVALUATE_OFFSET))(this);
		}

	};
