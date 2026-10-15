#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByCompareSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define IIGJDHIIDAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1643B7F0)
#define IIGJDHIIDAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1643B820)

	class IIGJDHIIDAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + IIGJDHIIDAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGJDHIIDAA_EVALUATE_OFFSET))(this);
		}

	};
