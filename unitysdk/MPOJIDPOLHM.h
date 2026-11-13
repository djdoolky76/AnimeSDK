#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsFirstChallengeBattle; }
namespace RPG::GameCore { class TaskContext; }

#define MPOJIDPOLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B22DA00)
#define MPOJIDPOLHM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B22DA30)

inline static constexpr unsigned int MPOJIDPOLHM_TypeDefinitionIndex = 55824;

	class MPOJIDPOLHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + MPOJIDPOLHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOJIDPOLHM_EVALUATE_OFFSET))(this);
		}

	};
