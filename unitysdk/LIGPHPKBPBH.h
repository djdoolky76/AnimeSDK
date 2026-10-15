#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareAlertValue; }
namespace RPG::GameCore { class TaskContext; }

#define LIGPHPKBPBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6CB8F0)
#define LIGPHPKBPBH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6CB920)

inline static constexpr unsigned int LIGPHPKBPBH_TypeDefinitionIndex = 54460;

	class LIGPHPKBPBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + LIGPHPKBPBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGPHPKBPBH_EVALUATE_OFFSET))(this);
		}

	};
