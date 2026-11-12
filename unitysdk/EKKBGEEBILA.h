#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareBaseTypeCount; }
namespace RPG::GameCore { class TaskContext; }

#define EKKBGEEBILA_CTOR_OFFSET UNITYSDK_OFFSET(0x16454D90)
#define EKKBGEEBILA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16454DC0)

inline static constexpr unsigned int EKKBGEEBILA_TypeDefinitionIndex = 56596;

	class EKKBGEEBILA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + EKKBGEEBILA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKBGEEBILA_EVALUATE_OFFSET))(this);
		}

	};
