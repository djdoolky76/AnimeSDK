#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetLockHP; }
namespace RPG::GameCore { class TaskContext; }

#define AGGIDADFNAC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF28770)
#define AGGIDADFNAC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF287A0)

inline static constexpr unsigned int AGGIDADFNAC_TypeDefinitionIndex = 55153;

	class AGGIDADFNAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + AGGIDADFNAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGIDADFNAC_EVALUATE_OFFSET))(this);
		}

	};
