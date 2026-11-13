#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTurnOwnerActionPhaseEnd; }
namespace RPG::GameCore { class TaskContext; }

#define PFIKJOHFCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x16D812D0)
#define PFIKJOHFCEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16D81300)

inline static constexpr unsigned int PFIKJOHFCEL_TypeDefinitionIndex = 55895;

	class PFIKJOHFCEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + PFIKJOHFCEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIKJOHFCEL_EVALUATE_OFFSET))(this);
		}

	};
