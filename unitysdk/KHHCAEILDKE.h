#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class TaskContext; }

#define KHHCAEILDKE_CTOR_OFFSET UNITYSDK_OFFSET(0x19793B70)
#define KHHCAEILDKE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19793BA0)

inline static constexpr unsigned int KHHCAEILDKE_TypeDefinitionIndex = 54299;

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
