#pragma once
#include "unitysdk/unitysdk.h"
class IHLFEBHOKAP;
namespace RPG::GameCore { class TaskContext; }

#define BHPHPCOCBKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4939B0)
#define BHPHPCOCBKK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4939E0)

	class BHPHPCOCBKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + BHPHPCOCBKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPHPCOCBKK_EVALUATE_OFFSET))(this);
		}

	};
