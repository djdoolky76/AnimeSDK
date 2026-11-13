#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCanPlayIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define EMLNOHJIDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x187F03C0)
#define EMLNOHJIDMM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x187F03F0)

inline static constexpr unsigned int EMLNOHJIDMM_TypeDefinitionIndex = 54289;

	class EMLNOHJIDMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + EMLNOHJIDMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLNOHJIDMM_EVALUATE_OFFSET))(this);
		}

	};
