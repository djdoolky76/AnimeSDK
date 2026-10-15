#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByBreakStanceDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define OMPMMICEIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A010)
#define OMPMMICEIDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF4A040)

	class OMPMMICEIDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + OMPMMICEIDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPMMICEIDJ_EVALUATE_OFFSET))(this);
		}

	};
