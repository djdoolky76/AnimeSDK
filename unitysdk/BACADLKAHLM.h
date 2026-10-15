#pragma once
#include "unitysdk/unitysdk.h"
class EPJLDNFONEE;
namespace RPG::GameCore { class TaskContext; }

#define BACADLKAHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC63F0)
#define BACADLKAHLM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15BC6420)

inline static constexpr unsigned int BACADLKAHLM_TypeDefinitionIndex = 54908;

	class BACADLKAHLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + BACADLKAHLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACADLKAHLM_EVALUATE_OFFSET))(this);
		}

	};
