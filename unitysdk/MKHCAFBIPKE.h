#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAlertValueInRange; }
namespace RPG::GameCore { class TaskContext; }

#define MKHCAFBIPKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB992010)
#define MKHCAFBIPKE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB992040)

inline static constexpr unsigned int MKHCAFBIPKE_TypeDefinitionIndex = 54455;

	class MKHCAFBIPKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + MKHCAFBIPKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHCAFBIPKE_EVALUATE_OFFSET))(this);
		}

	};
