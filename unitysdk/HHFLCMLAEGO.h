#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureForbidAttackTriggerBattle; }
namespace RPG::GameCore { class TaskContext; }

#define HHFLCMLAEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x16C17F90)
#define HHFLCMLAEGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C17FC0)

inline static constexpr unsigned int HHFLCMLAEGO_TypeDefinitionIndex = 59136;

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
