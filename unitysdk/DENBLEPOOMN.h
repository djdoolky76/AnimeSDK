#pragma once
#include "unitysdk/unitysdk.h"
class NOEBJBDLNGN;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_FearEscape; }
namespace RPG::GameCore { class TaskContext; }

#define DENBLEPOOMN_CTOR_OFFSET UNITYSDK_OFFSET(0xE51C180)
#define DENBLEPOOMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE51C2D0)
#define DENBLEPOOMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE51C320)
#define DENBLEPOOMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE51C470)
#define DENBLEPOOMN_TICK_OFFSET UNITYSDK_OFFSET(0xE51C410)

	class DENBLEPOOMN
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
		::NOEBJBDLNGN* KDKKFJKEIAA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + DENBLEPOOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENBLEPOOMN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENBLEPOOMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DENBLEPOOMN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENBLEPOOMN_ONTASKRESET_OFFSET))(this);
		}

	};
