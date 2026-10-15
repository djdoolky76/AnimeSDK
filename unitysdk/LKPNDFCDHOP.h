#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsFakeSkillByName; }
namespace RPG::GameCore { class TaskContext; }

#define LKPNDFCDHOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB75CD70)
#define LKPNDFCDHOP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB75CDA0)

	class LKPNDFCDHOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + LKPNDFCDHOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPNDFCDHOP_EVALUATE_OFFSET))(this);
		}

	};
