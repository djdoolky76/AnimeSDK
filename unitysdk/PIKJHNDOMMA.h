#pragma once
#include "unitysdk/unitysdk.h"
class MMHIKNFMEJE;
namespace RPG::GameCore { class TaskContext; }

#define PIKJHNDOMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB95DE0)
#define PIKJHNDOMMA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCB95E10)

inline static constexpr unsigned int PIKJHNDOMMA_TypeDefinitionIndex = 56052;

	class PIKJHNDOMMA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MMHIKNFMEJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MMHIKNFMEJE*))((::PBYTE)hIl2Cpp + PIKJHNDOMMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKJHNDOMMA_EVALUATE_OFFSET))(this);
		}

	};
