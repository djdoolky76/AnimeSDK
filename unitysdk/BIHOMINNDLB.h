#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCompareInvasionLevel; }
namespace RPG::GameCore { class TaskContext; }

#define BIHOMINNDLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A48F0)
#define BIHOMINNDLB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4A4920)

inline static constexpr unsigned int BIHOMINNDLB_TypeDefinitionIndex = 54452;

	class BIHOMINNDLB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareInvasionLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareInvasionLevel*))((::PBYTE)hIl2Cpp + BIHOMINNDLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHOMINNDLB_EVALUATE_OFFSET))(this);
		}

	};
