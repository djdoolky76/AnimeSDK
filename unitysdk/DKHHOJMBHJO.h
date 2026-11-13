#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsStageBuffAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define DKHHOJMBHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x18C18D90)
#define DKHHOJMBHJO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18C18DC0)

inline static constexpr unsigned int DKHHOJMBHJO_TypeDefinitionIndex = 55851;

	class DKHHOJMBHJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + DKHHOJMBHJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHHOJMBHJO_EVALUATE_OFFSET))(this);
		}

	};
