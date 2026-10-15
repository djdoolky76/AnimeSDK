#pragma once
#include "unitysdk/unitysdk.h"
class AFFPPNMGCMF;
namespace RPG::GameCore { class TaskContext; }

#define ECJJDCFKNOC_CTOR_OFFSET UNITYSDK_OFFSET(0x12D10490)
#define ECJJDCFKNOC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12D104C0)

inline static constexpr unsigned int ECJJDCFKNOC_TypeDefinitionIndex = 54163;

	class ECJJDCFKNOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + ECJJDCFKNOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJJDCFKNOC_EVALUATE_OFFSET))(this);
		}

	};
