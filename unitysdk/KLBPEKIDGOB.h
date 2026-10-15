#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRegionEraState; }
namespace RPG::GameCore { class TaskContext; }

#define KLBPEKIDGOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB4E0C20)
#define KLBPEKIDGOB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4E0C50)

	class KLBPEKIDGOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + KLBPEKIDGOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBPEKIDGOB_EVALUATE_OFFSET))(this);
		}

	};
