#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class TaskContext; }

#define LNINOCICGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A590E20)
#define LNINOCICGPA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A590E50)

inline static constexpr unsigned int LNINOCICGPA_TypeDefinitionIndex = 55860;

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
