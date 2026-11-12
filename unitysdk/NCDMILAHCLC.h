#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByInAnimZone; }
namespace RPG::GameCore { class TaskContext; }

#define NCDMILAHCLC_CTOR_OFFSET UNITYSDK_OFFSET(0xC38DA60)
#define NCDMILAHCLC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC38DA90)

inline static constexpr unsigned int NCDMILAHCLC_TypeDefinitionIndex = 55625;

	class NCDMILAHCLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + NCDMILAHCLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDMILAHCLC_EVALUATE_OFFSET))(this);
		}

	};
