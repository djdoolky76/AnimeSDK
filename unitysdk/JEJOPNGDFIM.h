#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class TaskContext; }

#define JEJOPNGDFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1662EB30)
#define JEJOPNGDFIM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1662EB60)

inline static constexpr unsigned int JEJOPNGDFIM_TypeDefinitionIndex = 53134;

	class JEJOPNGDFIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + JEJOPNGDFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJOPNGDFIM_EVALUATE_OFFSET))(this);
		}

	};
