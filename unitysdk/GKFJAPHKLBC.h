#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentSkillName; }
namespace RPG::GameCore { class TaskContext; }

#define GKFJAPHKLBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8A960)
#define GKFJAPHKLBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A8A990)

inline static constexpr unsigned int GKFJAPHKLBC_TypeDefinitionIndex = 54598;

	class GKFJAPHKLBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + GKFJAPHKLBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJAPHKLBC_EVALUATE_OFFSET))(this);
		}

	};
