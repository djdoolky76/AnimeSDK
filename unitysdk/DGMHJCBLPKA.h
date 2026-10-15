#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCharacterSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define DGMHJCBLPKA_CTOR_OFFSET UNITYSDK_OFFSET(0xE854BE0)
#define DGMHJCBLPKA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE854C10)

	class DGMHJCBLPKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + DGMHJCBLPKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMHJCBLPKA_EVALUATE_OFFSET))(this);
		}

	};
