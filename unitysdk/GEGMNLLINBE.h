#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByCanMove; }
namespace RPG::GameCore { class TaskContext; }

#define GEGMNLLINBE_CTOR_OFFSET UNITYSDK_OFFSET(0x159D64A0)
#define GEGMNLLINBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159D64D0)

inline static constexpr unsigned int GEGMNLLINBE_TypeDefinitionIndex = 54174;

	class GEGMNLLINBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + GEGMNLLINBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMNLLINBE_EVALUATE_OFFSET))(this);
		}

	};
