#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckFightFinish; }
namespace RPG::GameCore { class TaskContext; }

#define FNOOHEIIKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x158852B0)
#define FNOOHEIIKLF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158852E0)

inline static constexpr unsigned int FNOOHEIIKLF_TypeDefinitionIndex = 54498;

	class FNOOHEIIKLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + FNOOHEIIKLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOOHEIIKLF_EVALUATE_OFFSET))(this);
		}

	};
