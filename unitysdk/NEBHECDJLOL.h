#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterViewPhase; }
namespace RPG::GameCore { class TaskContext; }

#define NEBHECDJLOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB580A0)
#define NEBHECDJLOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB580D0)

	class NEBHECDJLOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterViewPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterViewPhase*))((::PBYTE)hIl2Cpp + NEBHECDJLOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBHECDJLOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
