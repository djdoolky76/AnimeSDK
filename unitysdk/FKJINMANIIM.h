#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySharedSummonUnitInUse; }
namespace RPG::GameCore { class TaskContext; }

#define FKJINMANIIM_CTOR_OFFSET UNITYSDK_OFFSET(0x157F5A00)
#define FKJINMANIIM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157F5A30)

inline static constexpr unsigned int FKJINMANIIM_TypeDefinitionIndex = 57993;

	class FKJINMANIIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + FKJINMANIIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJINMANIIM_EVALUATE_OFFSET))(this);
		}

	};
