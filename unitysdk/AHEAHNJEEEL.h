#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRankActivated; }
namespace RPG::GameCore { class TaskContext; }

#define AHEAHNJEEEL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB77A50)
#define AHEAHNJEEEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEB77A80)

inline static constexpr unsigned int AHEAHNJEEEL_TypeDefinitionIndex = 54711;

	class AHEAHNJEEEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + AHEAHNJEEEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEAHNJEEEL_EVALUATE_OFFSET))(this);
		}

	};
