#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattle; }

#define NOHHLPCMJKP_CFFNDPBOCBD_OFFSET UNITYSDK_OFFSET(0xBCEF890)
#define NOHHLPCMJKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEF6F0)
#define NOHHLPCMJKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEFCF0)
#define NOHHLPCMJKP_GBIKIPGOGCF_OFFSET UNITYSDK_OFFSET(0xBCEF930)
#define NOHHLPCMJKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEF750)
#define NOHHLPCMJKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCEF700)
#define NOHHLPCMJKP_TICK_OFFSET UNITYSDK_OFFSET(0xBCEFC90)

	class NOHHLPCMJKP : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::AdventurePhase* HAGFACOEAFD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::TriggerBattle* EJJEEJENLDA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattle*))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_DISPOSE_OFFSET))(this);
		}

		::System::Void GBIKIPGOGCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_GBIKIPGOGCF_OFFSET))(this);
		}

		::System::Void CFFNDPBOCBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHLPCMJKP_CFFNDPBOCBD_OFFSET))(this);
		}

	};
