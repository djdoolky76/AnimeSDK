#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureForbidAttackTriggerBattle; }
namespace RPG::GameCore { class TaskContext; }

#define HHFLCMLAEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCA5D0)
#define HHFLCMLAEGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CCA600)

	class HHFLCMLAEGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + HHFLCMLAEGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFLCMLAEGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
