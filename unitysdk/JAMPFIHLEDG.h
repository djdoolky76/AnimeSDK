#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CalculateMissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValuePair; }
namespace RPG::GameCore { class TaskContext; }

#define JAMPFIHLEDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1655B960)
#define JAMPFIHLEDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1655B970)
#define JAMPFIHLEDG_GNHDPFKBDGD_OFFSET UNITYSDK_OFFSET(0x1655BB00)
#define JAMPFIHLEDG_KDAIGBAOCEK_OFFSET UNITYSDK_OFFSET(0x1655BDA0)
#define JAMPFIHLEDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1655B9B0)
#define JAMPFIHLEDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1655BCF0)
#define JAMPFIHLEDG_TICK_OFFSET UNITYSDK_OFFSET(0x1655BD40)

	class JAMPFIHLEDG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CalculateMissionCustomValue* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalculateMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalculateMissionCustomValue*))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 GNHDPFKBDGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_GNHDPFKBDGD_OFFSET))(this);
		}

		::System::UInt32 KDAIGBAOCEK(::RPG::GameCore::MissionCustomValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MissionCustomValuePair*))((::PBYTE)hIl2Cpp + JAMPFIHLEDG_KDAIGBAOCEK_OFFSET))(this, a1);
		}

	};
