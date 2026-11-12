#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCurrentTeammemberCount; }
namespace RPG::GameCore { class TaskContext; }

#define KONCBBJOGJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF66F0)
#define KONCBBJOGJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDF6720)

inline static constexpr unsigned int KONCBBJOGJF_TypeDefinitionIndex = 54294;

	class KONCBBJOGJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + KONCBBJOGJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KONCBBJOGJF_EVALUATE_OFFSET))(this);
		}

	};
