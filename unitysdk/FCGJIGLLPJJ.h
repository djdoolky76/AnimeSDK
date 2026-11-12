#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDynamicValueDefined; }
namespace RPG::GameCore { class TaskContext; }

#define FCGJIGLLPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x165D5690)
#define FCGJIGLLPJJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165D56C0)

inline static constexpr unsigned int FCGJIGLLPJJ_TypeDefinitionIndex = 56068;

	class FCGJIGLLPJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + FCGJIGLLPJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGJIGLLPJJ_EVALUATE_OFFSET))(this);
		}

	};
