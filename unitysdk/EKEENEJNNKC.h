#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInTimelinePerform; }
namespace RPG::GameCore { class TaskContext; }

#define EKEENEJNNKC_CTOR_OFFSET UNITYSDK_OFFSET(0x164497B0)
#define EKEENEJNNKC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164497E0)

inline static constexpr unsigned int EKEENEJNNKC_TypeDefinitionIndex = 55797;

	class EKEENEJNNKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + EKEENEJNNKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEENEJNNKC_EVALUATE_OFFSET))(this);
		}

	};
