#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace RPG::GameCore { class TaskContext; }

#define AAKFMEOMANC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CDAA0)
#define AAKFMEOMANC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB0CDAD0)

	class AAKFMEOMANC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + AAKFMEOMANC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFMEOMANC_EVALUATE_OFFSET))(this);
		}

	};
