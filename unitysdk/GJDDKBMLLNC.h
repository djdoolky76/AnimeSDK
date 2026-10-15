#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkStorySwitchBackground; }
namespace RPG::GameCore { class TaskContext; }

#define GJDDKBMLLNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A51730)
#define GJDDKBMLLNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A51840)
#define GJDDKBMLLNC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15A51740)
#define GJDDKBMLLNC_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15A51750)
#define GJDDKBMLLNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A51960)
#define GJDDKBMLLNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A51A80)
#define GJDDKBMLLNC_TICK_OFFSET UNITYSDK_OFFSET(0x15A51880)

inline static constexpr unsigned int GJDDKBMLLNC_TypeDefinitionIndex = 52693;

	class GJDDKBMLLNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ClockParkStorySwitchBackground* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySwitchBackground* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySwitchBackground*))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDKBMLLNC_ONTASKRESET_OFFSET))(this);
		}

	};
