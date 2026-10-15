#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByCompareVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define FCLKBONPBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x156CE1E0)
#define FCLKBONPBBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156CE210)

	class FCLKBONPBBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + FCLKBONPBBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLKBONPBBK_EVALUATE_OFFSET))(this);
		}

	};
