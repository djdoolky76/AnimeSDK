#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetupBattleLineup; }
namespace RPG::GameCore { class TaskContext; }

#define OIDKNBINGDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE73370)
#define OIDKNBINGDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE73380)
#define OIDKNBINGDF_GFIGDCOCMMI_OFFSET UNITYSDK_OFFSET(0xBE73410)
#define OIDKNBINGDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE733C0)
#define OIDKNBINGDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE73570)
#define OIDKNBINGDF_TICK_OFFSET UNITYSDK_OFFSET(0xBE735C0)

inline static constexpr unsigned int OIDKNBINGDF_TypeDefinitionIndex = 58594;

	class OIDKNBINGDF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetupBattleLineup* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupBattleLineup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + OIDKNBINGDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDKNBINGDF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDKNBINGDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDKNBINGDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIDKNBINGDF_TICK_OFFSET))(this, a1);
		}

		::System::Void GFIGDCOCMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDKNBINGDF_GFIGDCOCMMI_OFFSET))(this);
		}

	};
