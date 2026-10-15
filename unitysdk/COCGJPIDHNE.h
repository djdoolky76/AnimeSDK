#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartAdvSkillCombo; }
namespace RPG::GameCore { class TaskContext; }

#define COCGJPIDHNE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB3060)
#define COCGJPIDHNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB3090)

inline static constexpr unsigned int COCGJPIDHNE_TypeDefinitionIndex = 58714;

	class COCGJPIDHNE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAdvSkillCombo*))((::PBYTE)hIl2Cpp + COCGJPIDHNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCGJPIDHNE_ONTASKBEGIN_OFFSET))(this);
		}

	};
