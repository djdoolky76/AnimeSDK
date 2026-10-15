#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareAIVariableInt; }
namespace RPG::GameCore { class TaskContext; }

#define IKNDFPNCKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1649CFE0)
#define IKNDFPNCKNJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1649D010)

inline static constexpr unsigned int IKNDFPNCKNJ_TypeDefinitionIndex = 54510;

	class IKNDFPNCKNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + IKNDFPNCKNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNDFPNCKNJ_EVALUATE_OFFSET))(this);
		}

	};
