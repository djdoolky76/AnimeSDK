#pragma once
#include "unitysdk/unitysdk.h"
class PEFPDGCHBCL;
namespace RPG::GameCore { class TaskContext; }

#define CHBKHGNHANK_CTOR_OFFSET UNITYSDK_OFFSET(0xCC90DA0)
#define CHBKHGNHANK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC90DD0)

inline static constexpr unsigned int CHBKHGNHANK_TypeDefinitionIndex = 52553;

	class CHBKHGNHANK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + CHBKHGNHANK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBKHGNHANK_EVALUATE_OFFSET))(this);
		}

	};
