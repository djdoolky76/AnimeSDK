#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentTurnState; }
namespace RPG::GameCore { class TaskContext; }

#define PGFMMCHGAHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC21FA10)
#define PGFMMCHGAHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC21FA40)

inline static constexpr unsigned int PGFMMCHGAHA_TypeDefinitionIndex = 54894;

	class PGFMMCHGAHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + PGFMMCHGAHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFMMCHGAHA_EVALUATE_OFFSET))(this);
		}

	};
