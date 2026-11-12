#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace RPG::GameCore { class TaskContext; }

#define NCOEJLAMDMN_CTOR_OFFSET UNITYSDK_OFFSET(0xC3A5630)
#define NCOEJLAMDMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3A5660)

inline static constexpr unsigned int NCOEJLAMDMN_TypeDefinitionIndex = 55769;

	class NCOEJLAMDMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + NCOEJLAMDMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOEJLAMDMN_EVALUATE_OFFSET))(this);
		}

	};
