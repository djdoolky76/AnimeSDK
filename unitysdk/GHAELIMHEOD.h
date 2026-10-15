#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace RPG::GameCore { class TaskContext; }

#define GHAELIMHEOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A13D40)
#define GHAELIMHEOD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A13D70)

	class GHAELIMHEOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + GHAELIMHEOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAELIMHEOD_EVALUATE_OFFSET))(this);
		}

	};
