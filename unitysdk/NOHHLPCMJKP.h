#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattle; }

#define NOHHLPCMJKP_CFFNDPBOCBD_OFFSET UNITYSDK_OFFSET(0xBCE86C0)
#define NOHHLPCMJKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE8520)
#define NOHHLPCMJKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE8B20)
#define NOHHLPCMJKP_GBIKIPGOGCF_OFFSET UNITYSDK_OFFSET(0xBCE8760)
#define NOHHLPCMJKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCE8580)
#define NOHHLPCMJKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCE8530)
#define NOHHLPCMJKP_TICK_OFFSET UNITYSDK_OFFSET(0xBCE8AC0)

inline static constexpr unsigned int NOHHLPCMJKP_TypeDefinitionIndex = 58771;

	class NOHHLPCMJKP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::Client::AdventurePhase* HAGFACOEAFD; // 0x20
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
