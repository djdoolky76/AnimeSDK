#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGraphDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define MANPFIHPBHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8561E0)
#define MANPFIHPBHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB856210)

	class MANPFIHPBHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + MANPFIHPBHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANPFIHPBHO_EVALUATE_OFFSET))(this);
		}

	};
