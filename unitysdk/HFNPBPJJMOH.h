#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierCallBackIsInfected; }
namespace RPG::GameCore { class TaskContext; }

#define HFNPBPJJMOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8C980)
#define HFNPBPJJMOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C8C9B0)

inline static constexpr unsigned int HFNPBPJJMOH_TypeDefinitionIndex = 54503;

	class HFNPBPJJMOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + HFNPBPJJMOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNPBPJJMOH_EVALUATE_OFFSET))(this);
		}

	};
