#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace RPG::GameCore { class TaskContext; }

#define DNJFLBGAGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x11963150)
#define DNJFLBGAGDD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x119631D0)

inline static constexpr unsigned int DNJFLBGAGDD_TypeDefinitionIndex = 52150;

	class DNJFLBGAGDD
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* FOMIGOMHGGI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + DNJFLBGAGDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJFLBGAGDD_EVALUATE_OFFSET))(this);
		}

	};
