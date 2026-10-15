#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PKLHDDGKKOC;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define NFCENNDMMKN_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0xBB786E0)
#define NFCENNDMMKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB786D0)
#define NFCENNDMMKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB78980)
#define NFCENNDMMKN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBB78B80)
#define NFCENNDMMKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB78770)
#define NFCENNDMMKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB78930)
#define NFCENNDMMKN_TICK_OFFSET UNITYSDK_OFFSET(0xBB789C0)

inline static constexpr unsigned int NFCENNDMMKN_TypeDefinitionIndex = 58361;

	class NFCENNDMMKN : public ::GELIALJDFBL
	{
	public:
		::PKLHDDGKKOC* CPIIOIPAAKK; // 0x18
		::RPG::GameCore::PropTriggerAnimState* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean OJKLKKADHGM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropTriggerAnimState*))((::PBYTE)hIl2Cpp + NFCENNDMMKN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PropComponent* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCENNDMMKN_BOLJDDJDNII_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCENNDMMKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCENNDMMKN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCENNDMMKN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFCENNDMMKN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFCENNDMMKN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
