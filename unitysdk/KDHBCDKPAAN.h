#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LimitFrameMaxTimeStep; }
namespace RPG::GameCore { class TaskContext; }

#define KDHBCDKPAAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB35D690)
#define KDHBCDKPAAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB35D6A0)
#define KDHBCDKPAAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB35D6E0)
#define KDHBCDKPAAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB35D810)
#define KDHBCDKPAAN_TICK_OFFSET UNITYSDK_OFFSET(0xB35D860)

inline static constexpr unsigned int KDHBCDKPAAN_TypeDefinitionIndex = 55139;

	class KDHBCDKPAAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::LimitFrameMaxTimeStep* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LimitFrameMaxTimeStep* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LimitFrameMaxTimeStep*))((::PBYTE)hIl2Cpp + KDHBCDKPAAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHBCDKPAAN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHBCDKPAAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHBCDKPAAN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDHBCDKPAAN_TICK_OFFSET))(this, a1);
		}

	};
