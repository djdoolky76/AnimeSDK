#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTargetNatureID; }
namespace RPG::GameCore { class TaskContext; }

#define EJOBIEBMAFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1643A4F0)
#define EJOBIEBMAFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1643A520)

inline static constexpr unsigned int EJOBIEBMAFA_TypeDefinitionIndex = 55746;

	class EJOBIEBMAFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + EJOBIEBMAFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBIEBMAFA_EVALUATE_OFFSET))(this);
		}

	};
