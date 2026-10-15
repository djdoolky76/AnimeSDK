#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MarbleDragGuideConfig; }
namespace RPG::GameCore { class MarbleWaitBattleInput; }
namespace RPG::GameCore { class TaskContext; }

#define BECNNNOLNFE_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x16304650)
#define BECNNNOLNFE_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x16303B10)
#define BECNNNOLNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x16303AB0)
#define BECNNNOLNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16303AC0)
#define BECNNNOLNFE_HNLBEEDKKJG_OFFSET UNITYSDK_OFFSET(0x16303F80)
#define BECNNNOLNFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16303D00)
#define BECNNNOLNFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163045A0)
#define BECNNNOLNFE_TICK_OFFSET UNITYSDK_OFFSET(0x163045F0)

inline static constexpr unsigned int BECNNNOLNFE_TypeDefinitionIndex = 52307;

	class BECNNNOLNFE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MarbleWaitBattleInput* OFKGLJOAMLD; // 0x20
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
