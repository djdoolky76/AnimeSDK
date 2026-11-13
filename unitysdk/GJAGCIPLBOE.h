#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define GJAGCIPLBOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FAB00)
#define GJAGCIPLBOE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A3FAB30)

inline static constexpr unsigned int GJAGCIPLBOE_TypeDefinitionIndex = 55727;

	class GJAGCIPLBOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + GJAGCIPLBOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAGCIPLBOE_EVALUATE_OFFSET))(this);
		}

	};
