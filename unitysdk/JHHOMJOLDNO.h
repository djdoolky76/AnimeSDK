#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetLockStance; }
namespace RPG::GameCore { class TaskContext; }

#define JHHOMJOLDNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B3C30)
#define JHHOMJOLDNO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1B3C60)

inline static constexpr unsigned int JHHOMJOLDNO_TypeDefinitionIndex = 55149;

	class JHHOMJOLDNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + JHHOMJOLDNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHOMJOLDNO_EVALUATE_OFFSET))(this);
		}

	};
