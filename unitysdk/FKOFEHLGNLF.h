#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareChallengeLeft; }
namespace RPG::GameCore { class TaskContext; }

#define FKOFEHLGNLF_CTOR_OFFSET UNITYSDK_OFFSET(0x15824360)
#define FKOFEHLGNLF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15824390)

inline static constexpr unsigned int FKOFEHLGNLF_TypeDefinitionIndex = 54519;

	class FKOFEHLGNLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + FKOFEHLGNLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOFEHLGNLF_EVALUATE_OFFSET))(this);
		}

	};
