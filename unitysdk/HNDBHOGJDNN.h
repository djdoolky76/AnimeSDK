#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropState; }
namespace RPG::GameCore { class TaskContext; }

#define HNDBHOGJDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8D5B0)
#define HNDBHOGJDNN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D8D5E0)

inline static constexpr unsigned int HNDBHOGJDNN_TypeDefinitionIndex = 52588;

	class HNDBHOGJDNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + HNDBHOGJDNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDBHOGJDNN_EVALUATE_OFFSET))(this);
		}

	};
