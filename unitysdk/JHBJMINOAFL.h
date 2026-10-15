#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace RPG::GameCore { class TaskContext; }

#define JHBJMINOAFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A8980)
#define JHBJMINOAFL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1A89B0)

	class JHBJMINOAFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + JHBJMINOAFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBJMINOAFL_EVALUATE_OFFSET))(this);
		}

	};
