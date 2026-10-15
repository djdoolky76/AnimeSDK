#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace RPG::GameCore { class TaskContext; }

#define AFPLDMNBKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF23A50)
#define AFPLDMNBKAJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF23A80)

	class AFPLDMNBKAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + AFPLDMNBKAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLDMNBKAJ_EVALUATE_OFFSET))(this);
		}

	};
