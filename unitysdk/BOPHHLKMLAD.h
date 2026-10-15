#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareRedStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define BOPHHLKMLAD_CTOR_OFFSET UNITYSDK_OFFSET(0xC19AA50)
#define BOPHHLKMLAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC19AA80)

inline static constexpr unsigned int BOPHHLKMLAD_TypeDefinitionIndex = 54559;

	class BOPHHLKMLAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRedStanceCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRedStanceCount*))((::PBYTE)hIl2Cpp + BOPHHLKMLAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHHLKMLAD_EVALUATE_OFFSET))(this);
		}

	};
