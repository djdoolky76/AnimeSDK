#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFightFestBattleInMission; }

#define EDFCLNHCELE_CTOR_OFFSET UNITYSDK_OFFSET(0x186B7A60)
#define EDFCLNHCELE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186B7A70)
#define EDFCLNHCELE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186B7AB0)
#define EDFCLNHCELE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186B7B60)
#define EDFCLNHCELE_TICK_OFFSET UNITYSDK_OFFSET(0x186B7BB0)

inline static constexpr unsigned int EDFCLNHCELE_TypeDefinitionIndex = 60053;

	class EDFCLNHCELE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerFightFestBattleInMission* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + EDFCLNHCELE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFCLNHCELE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFCLNHCELE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFCLNHCELE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDFCLNHCELE_TICK_OFFSET))(this, a1);
		}

	};
