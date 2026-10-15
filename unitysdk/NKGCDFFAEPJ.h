#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class TaskContext; }

#define NKGCDFFAEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC33CC0)
#define NKGCDFFAEPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC33CF0)

inline static constexpr unsigned int NKGCDFFAEPJ_TypeDefinitionIndex = 54657;

	class NKGCDFFAEPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + NKGCDFFAEPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGCDFFAEPJ_EVALUATE_OFFSET))(this);
		}

	};
