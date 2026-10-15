#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeMiniMapUI; }

#define PLBGNAEPIFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC9F0)
#define PLBGNAEPIFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2ECA00)
#define PLBGNAEPIFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2ECA40)
#define PLBGNAEPIFA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2ECAC0)
#define PLBGNAEPIFA_TICK_OFFSET UNITYSDK_OFFSET(0xC2ECB10)

	class PLBGNAEPIFA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerMazeMiniMapUI* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeMiniMapUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeMiniMapUI*))((::PBYTE)hIl2Cpp + PLBGNAEPIFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBGNAEPIFA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBGNAEPIFA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBGNAEPIFA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLBGNAEPIFA_TICK_OFFSET))(this, a1);
		}

	};
