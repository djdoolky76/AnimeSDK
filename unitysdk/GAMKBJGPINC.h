#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChangeActionEntityToObserveState; }
namespace RPG::GameCore { class TaskContext; }

#define GAMKBJGPINC_CTOR_OFFSET UNITYSDK_OFFSET(0x15942510)
#define GAMKBJGPINC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15942840)
#define GAMKBJGPINC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15942520)
#define GAMKBJGPINC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159427F0)
#define GAMKBJGPINC_TICK_OFFSET UNITYSDK_OFFSET(0x15942790)

	class GAMKBJGPINC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ChangeActionEntityToObserveState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeActionEntityToObserveState*))((::PBYTE)hIl2Cpp + GAMKBJGPINC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMKBJGPINC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAMKBJGPINC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMKBJGPINC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMKBJGPINC_DISPOSE_OFFSET))(this);
		}

	};
