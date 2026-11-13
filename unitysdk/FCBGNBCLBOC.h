#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByCompareVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define FCBGNBCLBOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0085C0)
#define FCBGNBCLBOC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C0085F0)

inline static constexpr unsigned int FCBGNBCLBOC_TypeDefinitionIndex = 53287;

	class FCBGNBCLBOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + FCBGNBCLBOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGNBCLBOC_EVALUATE_OFFSET))(this);
		}

	};
