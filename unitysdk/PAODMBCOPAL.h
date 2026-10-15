#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAdvCharacterLogicState; }
namespace RPG::GameCore { class TaskContext; }

#define PAODMBCOPAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD8D70)
#define PAODMBCOPAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFD8DA0)

	class PAODMBCOPAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + PAODMBCOPAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAODMBCOPAL_EVALUATE_OFFSET))(this);
		}

	};
