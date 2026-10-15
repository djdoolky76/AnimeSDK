#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasInsertBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define HFBIKJMPGOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5CD60)
#define HFBIKJMPGOL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C5CD90)

inline static constexpr unsigned int HFBIKJMPGOL_TypeDefinitionIndex = 54616;

	class HFBIKJMPGOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + HFBIKJMPGOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBIKJMPGOL_EVALUATE_OFFSET))(this);
		}

	};
