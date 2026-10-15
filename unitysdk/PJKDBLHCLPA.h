#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsElfRestaurantHasFarmer; }
namespace RPG::GameCore { class TaskContext; }

#define PJKDBLHCLPA_CTOR_OFFSET UNITYSDK_OFFSET(0xC297A10)
#define PJKDBLHCLPA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC297A50)

	class PJKDBLHCLPA
	{
	public:
		::System::UInt32 HDLJKMNCOFB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + PJKDBLHCLPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKDBLHCLPA_EVALUATE_OFFSET))(this);
		}

	};
