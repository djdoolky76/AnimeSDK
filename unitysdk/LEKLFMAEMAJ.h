#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByDistance; }
namespace RPG::GameCore { class TaskContext; }

#define LEKLFMAEMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB65D080)
#define LEKLFMAEMAJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB65D0B0)

	class LEKLFMAEMAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + LEKLFMAEMAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLFMAEMAJ_EVALUATE_OFFSET))(this);
		}

	};
