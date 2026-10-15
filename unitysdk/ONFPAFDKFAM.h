#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetStageBattleEvents; }
namespace RPG::GameCore { class TaskContext; }

#define ONFPAFDKFAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF518E0)
#define ONFPAFDKFAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF518F0)
#define ONFPAFDKFAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF51930)
#define ONFPAFDKFAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF519E0)
#define ONFPAFDKFAM_TICK_OFFSET UNITYSDK_OFFSET(0xBF51A30)

	class ONFPAFDKFAM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetStageBattleEvents* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStageBattleEvents* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStageBattleEvents*))((::PBYTE)hIl2Cpp + ONFPAFDKFAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFPAFDKFAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFPAFDKFAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFPAFDKFAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONFPAFDKFAM_TICK_OFFSET))(this, a1);
		}

	};
