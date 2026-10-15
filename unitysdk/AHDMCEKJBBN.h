#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLogisticsRobotTriggerLoad; }
namespace RPG::GameCore { class TaskContext; }

#define AHDMCEKJBBN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB778D0)
#define AHDMCEKJBBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB77900)

inline static constexpr unsigned int AHDMCEKJBBN_TypeDefinitionIndex = 52395;

	class AHDMCEKJBBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + AHDMCEKJBBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDMCEKJBBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
