#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkStorySwitchBackgroundAnim; }
namespace RPG::GameCore { class TaskContext; }

#define PEBBHIAPPEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC938880)
#define PEBBHIAPPEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC938980)
#define PEBBHIAPPEA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC938890)
#define PEBBHIAPPEA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC9388A0)
#define PEBBHIAPPEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC938A20)
#define PEBBHIAPPEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC938B30)
#define PEBBHIAPPEA_TICK_OFFSET UNITYSDK_OFFSET(0xC9389C0)

inline static constexpr unsigned int PEBBHIAPPEA_TypeDefinitionIndex = 53799;

	class PEBBHIAPPEA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBHIAPPEA_ONTASKRESET_OFFSET))(this);
		}

	};
