#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByComparePropertyRatio; }
namespace RPG::GameCore { class TaskContext; }

#define DMIBOEFAKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC2C70)
#define DMIBOEFAKAI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFEC2CA0)

	class DMIBOEFAKAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + DMIBOEFAKAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIBOEFAKAI_EVALUATE_OFFSET))(this);
		}

	};
