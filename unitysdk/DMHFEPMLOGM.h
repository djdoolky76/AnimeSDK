#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define DMHFEPMLOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x10639C40)
#define DMHFEPMLOGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10639DB0)
#define DMHFEPMLOGM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10639D00)

inline static constexpr unsigned int DMHFEPMLOGM_TypeDefinitionIndex = 53299;

	class DMHFEPMLOGM
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + DMHFEPMLOGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEPMLOGM_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEPMLOGM_DISPOSE_OFFSET))(this);
		}

	};
