#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MarbleDragGuideConfig; }
namespace RPG::GameCore { class MarbleWaitBattleInput; }
namespace RPG::GameCore { class TaskContext; }

#define BECNNNOLNFE_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x16311030)
#define BECNNNOLNFE_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x163104F0)
#define BECNNNOLNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x16310490)
#define BECNNNOLNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163104A0)
#define BECNNNOLNFE_HNLBEEDKKJG_OFFSET UNITYSDK_OFFSET(0x16310960)
#define BECNNNOLNFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163106E0)
#define BECNNNOLNFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16310F80)
#define BECNNNOLNFE_TICK_OFFSET UNITYSDK_OFFSET(0x16310FD0)

	class BECNNNOLNFE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MarbleWaitBattleInput* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean DLCCLADCHGC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + BECNNNOLNFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BECNNNOLNFE_TICK_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_BNNKNIJBGPA_OFFSET))(this);
		}

		::RPG::GameCore::MarbleDragGuideConfig* HNLBEEDKKJG()
		{
			return ((::RPG::GameCore::MarbleDragGuideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNNOLNFE_HNLBEEDKKJG_OFFSET))(this);
		}

	};
