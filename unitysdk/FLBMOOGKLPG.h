#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace RPG::GameCore { class TaskContext; }

#define FLBMOOGKLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1581DF20)
#define FLBMOOGKLPG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1581E010)

inline static constexpr unsigned int FLBMOOGKLPG_TypeDefinitionIndex = 52200;

	class FLBMOOGKLPG
	{
	public:
		::System::Single GHABAAOGBNO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + FLBMOOGKLPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBMOOGKLPG_EVALUATE_OFFSET))(this);
		}

	};
