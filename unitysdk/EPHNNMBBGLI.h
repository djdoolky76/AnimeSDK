#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareValue; }
namespace RPG::GameCore { class TaskContext; }

#define EPHNNMBBGLI_CTOR_OFFSET UNITYSDK_OFFSET(0x155D4F40)
#define EPHNNMBBGLI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155D4F70)

inline static constexpr unsigned int EPHNNMBBGLI_TypeDefinitionIndex = 54587;

	class EPHNNMBBGLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + EPHNNMBBGLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNNMBBGLI_EVALUATE_OFFSET))(this);
		}

	};
