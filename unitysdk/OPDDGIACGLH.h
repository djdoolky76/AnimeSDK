#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSomatoType; }
namespace RPG::GameCore { class TaskContext; }

#define OPDDGIACGLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA5780)
#define OPDDGIACGLH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFA57B0)

	class OPDDGIACGLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + OPDDGIACGLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDDGIACGLH_EVALUATE_OFFSET))(this);
		}

	};
