#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class TaskContext; }

#define KHHCAEILDKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4092E0)
#define KHHCAEILDKE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB409310)

inline static constexpr unsigned int KHHCAEILDKE_TypeDefinitionIndex = 53137;

	class KHHCAEILDKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + KHHCAEILDKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHCAEILDKE_EVALUATE_OFFSET))(this);
		}

	};
