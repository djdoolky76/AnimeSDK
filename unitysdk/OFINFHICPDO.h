#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKEGEPFOPO.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskC; }

#define OFINFHICPDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE42F90)
#define OFINFHICPDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE43110)
#define OFINFHICPDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE43010)
#define OFINFHICPDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE430C0)
#define OFINFHICPDO_TICK_OFFSET UNITYSDK_OFFSET(0xBE43060)

	class OFINFHICPDO : public ::HCKEGEPFOPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + OFINFHICPDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFINFHICPDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OFINFHICPDO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFINFHICPDO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFINFHICPDO_DISPOSE_OFFSET))(this);
		}

	};
