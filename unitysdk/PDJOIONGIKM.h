#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByHasMoveSinceLastTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define PDJOIONGIKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC019310)
#define PDJOIONGIKM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC019340)

inline static constexpr unsigned int PDJOIONGIKM_TypeDefinitionIndex = 53115;

	class PDJOIONGIKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + PDJOIONGIKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJOIONGIKM_EVALUATE_OFFSET))(this);
		}

	};
