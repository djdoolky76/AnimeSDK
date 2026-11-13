#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class TaskContext; }

#define BICPGBNJMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA4880)
#define BICPGBNJMOL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAA48B0)

inline static constexpr unsigned int BICPGBNJMOL_TypeDefinitionIndex = 55082;

	class BICPGBNJMOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + BICPGBNJMOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BICPGBNJMOL_EVALUATE_OFFSET))(this);
		}

	};
