#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasUnGottenLevelReward; }
namespace RPG::GameCore { class TaskContext; }

#define DGAEHGHKLGC_CTOR_OFFSET UNITYSDK_OFFSET(0xE841B10)
#define DGAEHGHKLGC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE841B40)

inline static constexpr unsigned int DGAEHGHKLGC_TypeDefinitionIndex = 54624;

	class DGAEHGHKLGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + DGAEHGHKLGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAEHGHKLGC_EVALUATE_OFFSET))(this);
		}

	};
