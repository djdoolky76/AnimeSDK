#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareEnhancedID; }
namespace RPG::GameCore { class TaskContext; }

#define ONPMOFAHIFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF60F50)
#define ONPMOFAHIFC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF60F80)

	class ONPMOFAHIFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + ONPMOFAHIFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMOFAHIFC_EVALUATE_OFFSET))(this);
		}

	};
