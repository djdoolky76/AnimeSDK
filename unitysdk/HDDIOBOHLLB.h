#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsContainAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }

#define HDDIOBOHLLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C31530)
#define HDDIOBOHLLB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C31560)

inline static constexpr unsigned int HDDIOBOHLLB_TypeDefinitionIndex = 54641;

	class HDDIOBOHLLB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + HDDIOBOHLLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDIOBOHLLB_EVALUATE_OFFSET))(this);
		}

	};
