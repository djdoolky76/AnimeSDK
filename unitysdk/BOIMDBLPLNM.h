#pragma once
#include "unitysdk/unitysdk.h"
class PDHJJNFJCJF;
namespace RPG::GameCore { class TaskContext; }

#define BOIMDBLPLNM_CTOR_OFFSET UNITYSDK_OFFSET(0xC191300)
#define BOIMDBLPLNM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC191330)

inline static constexpr unsigned int BOIMDBLPLNM_TypeDefinitionIndex = 53892;

	class BOIMDBLPLNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + BOIMDBLPLNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIMDBLPLNM_EVALUATE_OFFSET))(this);
		}

	};
