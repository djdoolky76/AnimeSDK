#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowSkillReadyCamera; }
namespace RPG::GameCore { class TaskContext; }

#define FHCDIJMPLPA_CTOR_OFFSET UNITYSDK_OFFSET(0x157723C0)
#define FHCDIJMPLPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157723F0)

	class FHCDIJMPLPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillReadyCamera*))((::PBYTE)hIl2Cpp + FHCDIJMPLPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCDIJMPLPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
