#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class TaskContext; }

#define GDMCDPJMLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x168DDA80)
#define GDMCDPJMLKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x168DDAB0)

inline static constexpr unsigned int GDMCDPJMLKN_TypeDefinitionIndex = 53963;

	class GDMCDPJMLKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + GDMCDPJMLKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMCDPJMLKN_EVALUATE_OFFSET))(this);
		}

	};
