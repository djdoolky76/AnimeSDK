#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsSkillTypeDisable; }
namespace RPG::GameCore { class TaskContext; }

#define LMAIEJIPINA_CTOR_OFFSET UNITYSDK_OFFSET(0xB779890)
#define LMAIEJIPINA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7798C0)

inline static constexpr unsigned int LMAIEJIPINA_TypeDefinitionIndex = 54683;

	class LMAIEJIPINA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + LMAIEJIPINA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAIEJIPINA_EVALUATE_OFFSET))(this);
		}

	};
