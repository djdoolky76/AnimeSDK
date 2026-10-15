#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace RPG::GameCore { class TaskContext; }

#define CNIMEFDDLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA551C0)
#define CNIMEFDDLGJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA55240)

	class CNIMEFDDLGJ
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* FOMIGOMHGGI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + CNIMEFDDLGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIMEFDDLGJ_EVALUATE_OFFSET))(this);
		}

	};
