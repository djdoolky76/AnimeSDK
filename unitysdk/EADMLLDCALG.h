#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSwitchMascotPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define EADMLLDCALG_CTOR_OFFSET UNITYSDK_OFFSET(0x126739F0)
#define EADMLLDCALG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12673A20)

	class EADMLLDCALG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + EADMLLDCALG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EADMLLDCALG_EVALUATE_OFFSET))(this);
		}

	};
