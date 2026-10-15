#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTimeRewindTargetCurrentState; }
namespace RPG::GameCore { class TaskContext; }

#define NINPCLMOPIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC05600)
#define NINPCLMOPIO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC05630)

inline static constexpr unsigned int NINPCLMOPIO_TypeDefinitionIndex = 53368;

	class NINPCLMOPIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + NINPCLMOPIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCLMOPIO_EVALUATE_OFFSET))(this);
		}

	};
