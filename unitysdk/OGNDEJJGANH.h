#pragma once
#include "unitysdk/unitysdk.h"
class MDGPFEMNJGP;
namespace RPG::GameCore { class TaskContext; }

#define OGNDEJJGANH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5D4B0)
#define OGNDEJJGANH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5D4F0)
#define OGNDEJJGANH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE5D530)
#define OGNDEJJGANH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE5D5A0)
#define OGNDEJJGANH_TICK_OFFSET UNITYSDK_OFFSET(0xBE5D5F0)

	class OGNDEJJGANH
	{
	public:
		::System::Boolean IDBHEIBEGBA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDGPFEMNJGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDGPFEMNJGP*))((::PBYTE)hIl2Cpp + OGNDEJJGANH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDEJJGANH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDEJJGANH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDEJJGANH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGNDEJJGANH_TICK_OFFSET))(this, a1);
		}

	};
