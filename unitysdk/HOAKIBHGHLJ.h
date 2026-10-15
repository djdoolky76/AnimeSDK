#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ElfManagerRestaurant; }
namespace RPG::GameCore { class TaskContext; }

#define HOAKIBHGHLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA9860)
#define HOAKIBHGHLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DA9870)
#define HOAKIBHGHLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DA98B0)
#define HOAKIBHGHLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DA9A60)
#define HOAKIBHGHLJ_TICK_OFFSET UNITYSDK_OFFSET(0x15DA9AB0)

	class HOAKIBHGHLJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ElfManagerRestaurant* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ_TICK_OFFSET))(this, a1);
		}

	};
