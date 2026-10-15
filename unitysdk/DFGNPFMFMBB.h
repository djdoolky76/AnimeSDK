#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifySkillPropertyBySlot; }
namespace RPG::GameCore { class TaskContext; }

#define DFGNPFMFMBB_CTOR_OFFSET UNITYSDK_OFFSET(0xE82D620)
#define DFGNPFMFMBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE82D630)
#define DFGNPFMFMBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE82D670)
#define DFGNPFMFMBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE82D950)
#define DFGNPFMFMBB_TICK_OFFSET UNITYSDK_OFFSET(0xE82D9A0)

	class DFGNPFMFMBB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifySkillPropertyBySlot* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyBySlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyBySlot*))((::PBYTE)hIl2Cpp + DFGNPFMFMBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGNPFMFMBB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGNPFMFMBB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGNPFMFMBB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFGNPFMFMBB_TICK_OFFSET))(this, a1);
		}

	};
