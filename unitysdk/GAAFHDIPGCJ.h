#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByInMotionState; }
namespace RPG::GameCore { class TaskContext; }

#define GAAFHDIPGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B864140)
#define GAAFHDIPGCJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B864170)

inline static constexpr unsigned int GAAFHDIPGCJ_TypeDefinitionIndex = 55626;

	class GAAFHDIPGCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + GAAFHDIPGCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAFHDIPGCJ_EVALUATE_OFFSET))(this);
		}

	};
