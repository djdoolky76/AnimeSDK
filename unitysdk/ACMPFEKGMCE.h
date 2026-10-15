#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCFAGLOBHO.h"
#include "unitysdk/RPG/GameCore/StatisticEventType.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattleStatisticEvent; }

#define ACMPFEKGMCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB126570)
#define ACMPFEKGMCE_OCLGHLGAACM_OFFSET UNITYSDK_OFFSET(0xB1268C0)
#define ACMPFEKGMCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1265A0)

inline static constexpr unsigned int ACMPFEKGMCE_TypeDefinitionIndex = 55720;

	class ACMPFEKGMCE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + ACMPFEKGMCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMPFEKGMCE_ONTASKBEGIN_OFFSET))(this);
		}

		::CNCFAGLOBHO OCLGHLGAACM(::RPG::GameCore::StatisticEventType a1)
		{
			return ((::CNCFAGLOBHO(*)(::PVOID, ::RPG::GameCore::StatisticEventType))((::PBYTE)hIl2Cpp + ACMPFEKGMCE_OCLGHLGAACM_OFFSET))(this, a1);
		}

	};
