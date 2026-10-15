#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAetherDivideBattle; }

#define LNOEGFHJMJI_CFFNDPBOCBD_OFFSET UNITYSDK_OFFSET(0xB7E9CF0)
#define LNOEGFHJMJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9B70)
#define LNOEGFHJMJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7EA080)
#define LNOEGFHJMJI_GBIKIPGOGCF_OFFSET UNITYSDK_OFFSET(0xB7E9D90)
#define LNOEGFHJMJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E9BD0)
#define LNOEGFHJMJI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7E9B80)
#define LNOEGFHJMJI_TICK_OFFSET UNITYSDK_OFFSET(0xB7EA020)

	class LNOEGFHJMJI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerAetherDivideBattle* EJJEEJENLDA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::Client::AdventurePhase* HAGFACOEAFD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_DISPOSE_OFFSET))(this);
		}

		::System::Void GBIKIPGOGCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_GBIKIPGOGCF_OFFSET))(this);
		}

		::System::Void CFFNDPBOCBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOEGFHJMJI_CFFNDPBOCBD_OFFSET))(this);
		}

	};
