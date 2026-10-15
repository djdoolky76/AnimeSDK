#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckActionDelayChanged; }
namespace RPG::GameCore { class TaskContext; }

#define BJJKJJJFKEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB79EE20)
#define BJJKJJJFKEH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB79EE50)

inline static constexpr unsigned int BJJKJJJFKEH_TypeDefinitionIndex = 54490;

	class BJJKJJJFKEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + BJJKJJJFKEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKJJJFKEH_EVALUATE_OFFSET))(this);
		}

	};
