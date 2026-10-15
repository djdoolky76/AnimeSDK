#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadBattleEvent; }

#define PBODAPNJACO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF5DA0)
#define PBODAPNJACO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF5DD0)

	class PBODAPNJACO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + PBODAPNJACO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBODAPNJACO_ONTASKBEGIN_OFFSET))(this);
		}

	};
