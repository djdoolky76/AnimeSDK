#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DrinkMakerCheersCancelMakerDrinkAfterPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define FKBEFELLLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x157E6240)
#define FKBEFELLLEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E6270)

	class FKBEFELLLEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + FKBEFELLLEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBEFELLLEF_ONTASKBEGIN_OFFSET))(this);
		}

	};
