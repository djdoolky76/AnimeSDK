#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class TaskContext; }

#define NKGCDFFAEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B0260)
#define NKGCDFFAEPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A7B0290)

inline static constexpr unsigned int NKGCDFFAEPJ_TypeDefinitionIndex = 55823;

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
