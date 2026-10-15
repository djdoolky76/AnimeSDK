#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamNormalAction; }
namespace RPG::GameCore { class TaskContext; }

#define ILDAHELBCKK_CTOR_OFFSET UNITYSDK_OFFSET(0x164A8D50)
#define ILDAHELBCKK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164A8D80)

	class ILDAHELBCKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + ILDAHELBCKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDAHELBCKK_EVALUATE_OFFSET))(this);
		}

	};
