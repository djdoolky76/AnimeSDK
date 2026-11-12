#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropID; }
namespace RPG::GameCore { class TaskContext; }

#define IDCLICAGPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16E1AE30)
#define IDCLICAGPAJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16E1AE60)

inline static constexpr unsigned int IDCLICAGPAJ_TypeDefinitionIndex = 53693;

	class IDCLICAGPAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + IDCLICAGPAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCLICAGPAJ_EVALUATE_OFFSET))(this);
		}

	};
