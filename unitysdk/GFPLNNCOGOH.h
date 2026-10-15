#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTopActionDelayTarget; }
namespace RPG::GameCore { class TaskContext; }

#define GFPLNNCOGOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A00120)
#define GFPLNNCOGOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A00150)

inline static constexpr unsigned int GFPLNNCOGOH_TypeDefinitionIndex = 54695;

	class GFPLNNCOGOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + GFPLNNCOGOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFPLNNCOGOH_EVALUATE_OFFSET))(this);
		}

	};
