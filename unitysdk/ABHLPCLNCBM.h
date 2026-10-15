#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DMBGHOJIJIL;
namespace RPG::GameCore { class TaskContext; }

#define ABHLPCLNCBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FB340)
#define ABHLPCLNCBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0FB370)
#define ABHLPCLNCBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0FB3B0)
#define ABHLPCLNCBM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0FB440)
#define ABHLPCLNCBM_TICK_OFFSET UNITYSDK_OFFSET(0xB0FB490)

	class ABHLPCLNCBM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::UInt32 ANHJNOMKDLB; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DMBGHOJIJIL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DMBGHOJIJIL*))((::PBYTE)hIl2Cpp + ABHLPCLNCBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHLPCLNCBM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHLPCLNCBM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHLPCLNCBM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABHLPCLNCBM_TICK_OFFSET))(this, a1);
		}

	};
