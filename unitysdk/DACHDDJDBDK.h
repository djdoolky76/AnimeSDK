#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTarget; }
namespace RPG::GameCore { class TaskContext; }

#define DACHDDJDBDK_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB2B10)
#define DACHDDJDBDK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFB2B40)

inline static constexpr unsigned int DACHDDJDBDK_TypeDefinitionIndex = 54578;

	class DACHDDJDBDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + DACHDDJDBDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACHDDJDBDK_EVALUATE_OFFSET))(this);
		}

	};
