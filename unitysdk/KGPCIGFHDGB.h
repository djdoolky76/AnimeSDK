#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTrainVisitorIsMeet; }
namespace RPG::GameCore { class TaskContext; }

#define KGPCIGFHDGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F27C0)
#define KGPCIGFHDGB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB3F27F0)

inline static constexpr unsigned int KGPCIGFHDGB_TypeDefinitionIndex = 53168;

	class KGPCIGFHDGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + KGPCIGFHDGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCIGFHDGB_EVALUATE_OFFSET))(this);
		}

	};
