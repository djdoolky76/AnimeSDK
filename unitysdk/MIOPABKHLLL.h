#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInEraFlipperSpotArea; }
namespace RPG::GameCore { class TaskContext; }

#define MIOPABKHLLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB960BF0)
#define MIOPABKHLLL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB960C20)

inline static constexpr unsigned int MIOPABKHLLL_TypeDefinitionIndex = 52757;

	class MIOPABKHLLL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + MIOPABKHLLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOPABKHLLL_EVALUATE_OFFSET))(this);
		}

	};
