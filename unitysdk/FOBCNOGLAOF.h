#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define FOBCNOGLAOF_CTOR_OFFSET UNITYSDK_OFFSET(0x158D4DB0)
#define FOBCNOGLAOF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158D4DE0)

inline static constexpr unsigned int FOBCNOGLAOF_TypeDefinitionIndex = 54557;

	class FOBCNOGLAOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + FOBCNOGLAOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBCNOGLAOF_EVALUATE_OFFSET))(this);
		}

	};
