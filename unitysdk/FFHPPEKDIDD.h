#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkStorySetBackgroundFrontVisible; }
namespace RPG::GameCore { class TaskContext; }

#define FFHPPEKDIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1573F310)
#define FFHPPEKDIDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1573F420)
#define FFHPPEKDIDD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1573F320)
#define FFHPPEKDIDD_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1573F330)
#define FFHPPEKDIDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1573F4C0)
#define FFHPPEKDIDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1573F5D0)
#define FFHPPEKDIDD_TICK_OFFSET UNITYSDK_OFFSET(0x1573F460)

inline static constexpr unsigned int FFHPPEKDIDD_TypeDefinitionIndex = 52691;

	class FFHPPEKDIDD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHPPEKDIDD_ONTASKRESET_OFFSET))(this);
		}

	};
