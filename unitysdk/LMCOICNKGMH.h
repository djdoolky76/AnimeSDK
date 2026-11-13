#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKEGEPFOPO.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define LMCOICNKGMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC4100)
#define LMCOICNKGMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFC4280)
#define LMCOICNKGMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AFC4180)
#define LMCOICNKGMH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AFC4230)
#define LMCOICNKGMH_TICK_OFFSET UNITYSDK_OFFSET(0x1AFC41D0)

inline static constexpr unsigned int LMCOICNKGMH_TypeDefinitionIndex = 56991;

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
