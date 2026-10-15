#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFarmElementAnimState; }
namespace System { class String; }

#define PKLHEGFGFLI_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0xC2E3AE0)
#define PKLHEGFGFLI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E3AD0)
#define PKLHEGFGFLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2E4110)
#define PKLHEGFGFLI_HCKNNCJFKIA_OFFSET UNITYSDK_OFFSET(0xC2E3D10)
#define PKLHEGFGFLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2E3F80)
#define PKLHEGFGFLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2E40C0)
#define PKLHEGFGFLI_TICK_OFFSET UNITYSDK_OFFSET(0xC2E4150)

	class PKLHEGFGFLI : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TriggerFarmElementAnimState* OFKGLJOAMLD; // 0x28
		::System::Boolean OJKLKKADHGM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_BOLJDDJDNII_OFFSET))(this);
		}

		::System::Void HCKNNCJFKIA(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_HCKNNCJFKIA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKLHEGFGFLI_TICK_OFFSET))(this, a1);
		}

	};
