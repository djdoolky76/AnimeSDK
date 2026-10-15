#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentHit; }
namespace RPG::GameCore { class TaskContext; }

#define PHACEJOIBFH_CTOR_OFFSET UNITYSDK_OFFSET(0xC236950)
#define PHACEJOIBFH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC236980)

inline static constexpr unsigned int PHACEJOIBFH_TypeDefinitionIndex = 54721;

	class PHACEJOIBFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + PHACEJOIBFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHACEJOIBFH_EVALUATE_OFFSET))(this);
		}

	};
