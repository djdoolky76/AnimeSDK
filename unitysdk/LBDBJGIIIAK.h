#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsBodyPart; }
namespace RPG::GameCore { class TaskContext; }

#define LBDBJGIIIAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F2820)
#define LBDBJGIIIAK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB5F2850)

inline static constexpr unsigned int LBDBJGIIIAK_TypeDefinitionIndex = 54638;

	class LBDBJGIIIAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + LBDBJGIIIAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBJGIIIAK_EVALUATE_OFFSET))(this);
		}

	};
