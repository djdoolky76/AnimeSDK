#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasInsertAbilityExecutingDuringGameModePause; }
namespace RPG::GameCore { class TaskContext; }

#define BNJACMNMCHE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD7A50)
#define BNJACMNMCHE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDD7A80)

inline static constexpr unsigned int BNJACMNMCHE_TypeDefinitionIndex = 54613;

	class BNJACMNMCHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + BNJACMNMCHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJACMNMCHE_EVALUATE_OFFSET))(this);
		}

	};
