#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKEGEPFOPO.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define LMCOICNKGMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB77A740)
#define LMCOICNKGMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77A8C0)
#define LMCOICNKGMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77A7C0)
#define LMCOICNKGMH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB77A870)
#define LMCOICNKGMH_TICK_OFFSET UNITYSDK_OFFSET(0xB77A810)

	class LMCOICNKGMH : public ::HCKEGEPFOPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + LMCOICNKGMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOICNKGMH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCOICNKGMH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOICNKGMH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOICNKGMH_DISPOSE_OFFSET))(this);
		}

	};
