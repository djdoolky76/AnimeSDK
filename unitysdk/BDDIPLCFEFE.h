#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByCompareVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define BDDIPLCFEFE_CTOR_OFFSET UNITYSDK_OFFSET(0x162F1FD0)
#define BDDIPLCFEFE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162F2000)

	class BDDIPLCFEFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + BDDIPLCFEFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLCFEFE_EVALUATE_OFFSET))(this);
		}

	};
