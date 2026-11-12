#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSwitchHandGestureType; }
namespace RPG::GameCore { class TaskContext; }

#define NEECFPCMILK_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E3670)
#define NEECFPCMILK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3E36A0)

inline static constexpr unsigned int NEECFPCMILK_TypeDefinitionIndex = 54300;

	class NEECFPCMILK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + NEECFPCMILK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEECFPCMILK_EVALUATE_OFFSET))(this);
		}

	};
