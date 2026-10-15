#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckAdvModifierCallBackName; }
namespace RPG::GameCore { class TaskContext; }

#define DMPFJKJGBCM_CTOR_OFFSET UNITYSDK_OFFSET(0xFECDBB0)
#define DMPFJKJGBCM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFECDBE0)

inline static constexpr unsigned int DMPFJKJGBCM_TypeDefinitionIndex = 54493;

	class DMPFJKJGBCM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + DMPFJKJGBCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPFJKJGBCM_EVALUATE_OFFSET))(this);
		}

	};
