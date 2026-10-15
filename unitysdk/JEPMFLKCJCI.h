#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEFLHNGAEH.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateA; }

#define JEPMFLKCJCI_CTOR_OFFSET UNITYSDK_OFFSET(0x166433B0)
#define JEPMFLKCJCI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16643430)

	class JEPMFLKCJCI : public ::OGEFLHNGAEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + JEPMFLKCJCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPMFLKCJCI_EVALUATE_OFFSET))(this);
		}

	};
