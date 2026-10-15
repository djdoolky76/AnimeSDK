#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define FGDOJOPEHCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1574CF80)
#define FGDOJOPEHCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1574CFB0)

inline static constexpr unsigned int FGDOJOPEHCH_TypeDefinitionIndex = 54620;

	class FGDOJOPEHCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + FGDOJOPEHCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDOJOPEHCH_EVALUATE_OFFSET))(this);
		}

	};
