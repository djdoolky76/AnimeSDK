#pragma once
#include "unitysdk/unitysdk.h"
class MLMOAFNJPBG;
namespace RPG::GameCore { class TaskContext; }

#define DLEDJDANOKL_CTOR_OFFSET UNITYSDK_OFFSET(0xF894F70)
#define DLEDJDANOKL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF894FA0)

inline static constexpr unsigned int DLEDJDANOKL_TypeDefinitionIndex = 52549;

	class DLEDJDANOKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + DLEDJDANOKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEDJDANOKL_EVALUATE_OFFSET))(this);
		}

	};
