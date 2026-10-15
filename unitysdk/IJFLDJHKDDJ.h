#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByEntityCreated; }
namespace RPG::GameCore { class TaskContext; }

#define IJFLDJHKDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16467210)
#define IJFLDJHKDDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16467240)

inline static constexpr unsigned int IJFLDJHKDDJ_TypeDefinitionIndex = 53142;

	class IJFLDJHKDDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + IJFLDJHKDDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFLDJHKDDJ_EVALUATE_OFFSET))(this);
		}

	};
