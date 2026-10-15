#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByCompareMP; }
namespace RPG::GameCore { class TaskContext; }

#define EBCOANCCHLH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE7D30)
#define EBCOANCCHLH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CE7D60)

inline static constexpr unsigned int EBCOANCCHLH_TypeDefinitionIndex = 54458;

	class EBCOANCCHLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + EBCOANCCHLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCOANCCHLH_EVALUATE_OFFSET))(this);
		}

	};
