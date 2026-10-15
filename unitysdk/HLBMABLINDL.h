#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareScepterFuncType; }
namespace RPG::GameCore { class TaskContext; }

#define HLBMABLINDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5AB20)
#define HLBMABLINDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D5AB50)

inline static constexpr unsigned int HLBMABLINDL_TypeDefinitionIndex = 54888;

	class HLBMABLINDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + HLBMABLINDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBMABLINDL_EVALUATE_OFFSET))(this);
		}

	};
