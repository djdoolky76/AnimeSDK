#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PKLHDDGKKOC;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define NFCENNDMMKN_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0xC453850)
#define NFCENNDMMKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC453840)
#define NFCENNDMMKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC453AF0)
#define NFCENNDMMKN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC453CF0)
#define NFCENNDMMKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4538E0)
#define NFCENNDMMKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC453AA0)
#define NFCENNDMMKN_TICK_OFFSET UNITYSDK_OFFSET(0xC453B30)

inline static constexpr unsigned int NFCENNDMMKN_TypeDefinitionIndex = 59617;

	class NFCENNDMMKN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::PKLHDDGKKOC* CPIIOIPAAKK; // 0x20
		::RPG::GameCore::PropTriggerAnimState* OFKGLJOAMLD; // 0x28
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
