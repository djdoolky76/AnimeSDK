#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareChallengeGroupType; }
namespace RPG::GameCore { class TaskContext; }

#define BJDFENLMNHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7030)
#define BJDFENLMNHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAD7060)

inline static constexpr unsigned int BJDFENLMNHO_TypeDefinitionIndex = 55683;

	class BJDFENLMNHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + BJDFENLMNHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDFENLMNHO_EVALUATE_OFFSET))(this);
		}

	};
