#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainMonsterOnWave; }
namespace RPG::GameCore { class TaskContext; }

#define EALODDHCDFM_CTOR_OFFSET UNITYSDK_OFFSET(0x12683530)
#define EALODDHCDFM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12683560)

inline static constexpr unsigned int EALODDHCDFM_TypeDefinitionIndex = 54592;

	class EALODDHCDFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + EALODDHCDFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EALODDHCDFM_EVALUATE_OFFSET))(this);
		}

	};
