#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveInsertUltraWait; }
namespace RPG::GameCore { class TaskContext; }

#define NHEBEHPPLLG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB8A10)
#define NHEBEHPPLLG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBB8A40)

inline static constexpr unsigned int NHEBEHPPLLG_TypeDefinitionIndex = 54903;

	class NHEBEHPPLLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + NHEBEHPPLLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBEHPPLLG_EVALUATE_OFFSET))(this);
		}

	};
