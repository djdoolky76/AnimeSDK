#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareControlSkillEffectIsDamaging; }
namespace RPG::GameCore { class TaskContext; }

#define IKEELIMFFKP_CTOR_OFFSET UNITYSDK_OFFSET(0x18076360)
#define IKEELIMFFKP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18076390)

inline static constexpr unsigned int IKEELIMFFKP_TypeDefinitionIndex = 55690;

	class IKEELIMFFKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + IKEELIMFFKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEELIMFFKP_EVALUATE_OFFSET))(this);
		}

	};
