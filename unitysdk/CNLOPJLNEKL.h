#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CNLOPJLNEKL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA51BA0)
#define CNLOPJLNEKL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA51BD0)

inline static constexpr unsigned int CNLOPJLNEKL_TypeDefinitionIndex = 52560;

	class CNLOPJLNEKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + CNLOPJLNEKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOPJLNEKL_EVALUATE_OFFSET))(this);
		}

	};
