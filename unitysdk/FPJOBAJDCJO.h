#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsEntityActionState; }
namespace RPG::GameCore { class TaskContext; }

#define FPJOBAJDCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15912EB0)
#define FPJOBAJDCJO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15912EE0)

inline static constexpr unsigned int FPJOBAJDCJO_TypeDefinitionIndex = 55500;

	class FPJOBAJDCJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + FPJOBAJDCJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJOBAJDCJO_EVALUATE_OFFSET))(this);
		}

	};
