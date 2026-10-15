#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace RPG::GameCore { class TaskContext; }

#define AHMOFIMPDAF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB88390)
#define AHMOFIMPDAF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEB883C0)

	class AHMOFIMPDAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + AHMOFIMPDAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMOFIMPDAF_EVALUATE_OFFSET))(this);
		}

	};
