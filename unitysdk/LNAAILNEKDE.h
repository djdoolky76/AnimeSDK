#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierCallBackIsSelf; }
namespace RPG::GameCore { class TaskContext; }

#define LNAAILNEKDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC031620)
#define LNAAILNEKDE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC031650)

inline static constexpr unsigned int LNAAILNEKDE_TypeDefinitionIndex = 55669;

	class LNAAILNEKDE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + LNAAILNEKDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAILNEKDE_EVALUATE_OFFSET))(this);
		}

	};
