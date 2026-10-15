#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BDHLCHMLPDL;
class EEANPGAPLDB;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PFAKMAKOAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC201D50)
#define PFAKMAKOAIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC201D60)
#define PFAKMAKOAIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC202300)
#define PFAKMAKOAIG_JBFDKJHIDOK_OFFSET UNITYSDK_OFFSET(0xC202100)
#define PFAKMAKOAIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC201E20)
#define PFAKMAKOAIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC202030)
#define PFAKMAKOAIG_TICK_OFFSET UNITYSDK_OFFSET(0xC2022A0)

	class PFAKMAKOAIG : public ::GELIALJDFBL
	{
	public:
		::EEANPGAPLDB* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::BDHLCHMLPDL* OJMMJIALPON; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EEANPGAPLDB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EEANPGAPLDB*))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JBFDKJHIDOK(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_JBFDKJHIDOK_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAKMAKOAIG_GETCONFIG_OFFSET))(this);
		}

	};
