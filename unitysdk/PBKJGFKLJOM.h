#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareIsBookAvailable; }
namespace RPG::GameCore { class TaskContext; }

#define PBKJGFKLJOM_CTOR_OFFSET UNITYSDK_OFFSET(0xC8F6C40)
#define PBKJGFKLJOM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC8F6C70)

inline static constexpr unsigned int PBKJGFKLJOM_TypeDefinitionIndex = 53678;

	class PBKJGFKLJOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + PBKJGFKLJOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKJGFKLJOM_EVALUATE_OFFSET))(this);
		}

	};
