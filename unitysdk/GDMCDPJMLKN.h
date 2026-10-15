#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class TaskContext; }

#define GDMCDPJMLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1599A1F0)
#define GDMCDPJMLKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1599A220)

inline static constexpr unsigned int GDMCDPJMLKN_TypeDefinitionIndex = 52819;

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
