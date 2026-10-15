#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialHideNodes; }

#define ACABDMAKMPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB10EA90)
#define ACABDMAKMPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB10EAC0)

inline static constexpr unsigned int ACABDMAKMPA_TypeDefinitionIndex = 58823;

	class ACABDMAKMPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialHideNodes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialHideNodes*))((::PBYTE)hIl2Cpp + ACABDMAKMPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABDMAKMPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
