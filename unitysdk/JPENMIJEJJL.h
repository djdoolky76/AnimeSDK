#pragma once
#include "unitysdk/unitysdk.h"
class BJMLCLKHBJN;
namespace RPG::GameCore { class TaskContext; }

#define JPENMIJEJJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7590)
#define JPENMIJEJJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B4F75C0)

inline static constexpr unsigned int JPENMIJEJJL_TypeDefinitionIndex = 55702;

	class JPENMIJEJJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + JPENMIJEJJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENMIJEJJL_EVALUATE_OFFSET))(this);
		}

	};
