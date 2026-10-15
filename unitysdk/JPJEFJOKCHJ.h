#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropStateNumber; }
namespace RPG::GameCore { class TaskContext; }

#define JPJEFJOKCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BDF50)
#define JPJEFJOKCHJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2BDF80)

inline static constexpr unsigned int JPJEFJOKCHJ_TypeDefinitionIndex = 54558;

	class JPJEFJOKCHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + JPJEFJOKCHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJEFJOKCHJ_EVALUATE_OFFSET))(this);
		}

	};
