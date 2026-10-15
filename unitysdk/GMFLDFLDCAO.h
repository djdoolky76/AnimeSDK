#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareNPCMonsterCheckState; }
namespace RPG::GameCore { class TaskContext; }

#define GMFLDFLDCAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC24A0)
#define GMFLDFLDCAO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AC24D0)

inline static constexpr unsigned int GMFLDFLDCAO_TypeDefinitionIndex = 52580;

	class GMFLDFLDCAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + GMFLDFLDCAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFLDFLDCAO_EVALUATE_OFFSET))(this);
		}

	};
