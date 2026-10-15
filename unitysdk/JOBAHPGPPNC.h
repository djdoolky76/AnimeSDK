#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define JOBAHPGPPNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB296980)
#define JOBAHPGPPNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB296990)
#define JOBAHPGPPNC_KHMOAFCDDIE_OFFSET UNITYSDK_OFFSET(0xB297660)
#define JOBAHPGPPNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2969D0)
#define JOBAHPGPPNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2975B0)
#define JOBAHPGPPNC_TICK_OFFSET UNITYSDK_OFFSET(0xB297600)

inline static constexpr unsigned int JOBAHPGPPNC_TypeDefinitionIndex = 55082;

	class JOBAHPGPPNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GlobalTimeSlow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalTimeSlow*))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_TICK_OFFSET))(this, a1);
		}

		static ::System::Boolean KHMOAFCDDIE(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + JOBAHPGPPNC_KHMOAFCDDIE_OFFSET))(a1);
		}

	};
