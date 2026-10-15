#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialRemoveHideNodes; }

#define CEJLIEFLBGO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E2190)
#define CEJLIEFLBGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9E21C0)

	class CEJLIEFLBGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialRemoveHideNodes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialRemoveHideNodes*))((::PBYTE)hIl2Cpp + CEJLIEFLBGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJLIEFLBGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
