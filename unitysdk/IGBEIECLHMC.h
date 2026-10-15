#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBMMGODFEEO;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimelineFinish; }

#define IGBEIECLHMC_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x163F1A60)
#define IGBEIECLHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x163F1710)
#define IGBEIECLHMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163F1730)
#define IGBEIECLHMC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x163F1E70)
#define IGBEIECLHMC_ONSKIP_OFFSET UNITYSDK_OFFSET(0x163F1E80)
#define IGBEIECLHMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F1770)
#define IGBEIECLHMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163F1AB0)
#define IGBEIECLHMC_TICK_OFFSET UNITYSDK_OFFSET(0x163F1B10)

inline static constexpr unsigned int IGBEIECLHMC_TypeDefinitionIndex = 56482;

	class IGBEIECLHMC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitTimelineFinish* OFKGLJOAMLD; // 0x18
		::EBMMGODFEEO* BMHGECJDFGN; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean APFMCCJBGCB; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 BKFJMDBMPKE; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + IGBEIECLHMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGBEIECLHMC_TICK_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEIECLHMC_ONSKIP_OFFSET))(this);
		}

	};
