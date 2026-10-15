#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByShowChallengeSelectPage; }
namespace RPG::GameCore { class TaskContext; }

#define MIMHNKDJFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9592F0)
#define MIMHNKDJFKJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB959320)

inline static constexpr unsigned int MIMHNKDJFKJ_TypeDefinitionIndex = 52607;

	class MIMHNKDJFKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + MIMHNKDJFKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMHNKDJFKJ_EVALUATE_OFFSET))(this);
		}

	};
