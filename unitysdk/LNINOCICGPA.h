#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class TaskContext; }

#define LNINOCICGPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E3AE0)
#define LNINOCICGPA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7E3B10)

inline static constexpr unsigned int LNINOCICGPA_TypeDefinitionIndex = 54694;

	class LNINOCICGPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + LNINOCICGPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNINOCICGPA_EVALUATE_OFFSET))(this);
		}

	};
