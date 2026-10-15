#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierCallBackStatusType; }
namespace RPG::GameCore { class TaskContext; }

#define JHOPOANGHMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C8F00)
#define JHOPOANGHMH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1C8F30)

inline static constexpr unsigned int JHOPOANGHMH_TypeDefinitionIndex = 54507;

	class JHOPOANGHMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + JHOPOANGHMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOPOANGHMH_EVALUATE_OFFSET))(this);
		}

	};
