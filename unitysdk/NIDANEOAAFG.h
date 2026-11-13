#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTurnOwnerHasActionInTurn; }
namespace RPG::GameCore { class TaskContext; }

#define NIDANEOAAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x148B82A0)
#define NIDANEOAAFG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x148B82D0)

inline static constexpr unsigned int NIDANEOAAFG_TypeDefinitionIndex = 55896;

	class NIDANEOAAFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + NIDANEOAAFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDANEOAAFG_EVALUATE_OFFSET))(this);
		}

	};
