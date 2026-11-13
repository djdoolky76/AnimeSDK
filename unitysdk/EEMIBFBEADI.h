#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareScreenRatio; }
namespace RPG::GameCore { class TaskContext; }

#define EEMIBFBEADI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A327570)
#define EEMIBFBEADI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A3275A0)

inline static constexpr unsigned int EEMIBFBEADI_TypeDefinitionIndex = 55728;

	class EEMIBFBEADI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + EEMIBFBEADI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIBFBEADI_EVALUATE_OFFSET))(this);
		}

	};
