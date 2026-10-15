#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropFastDeliverStartAim; }
namespace RPG::GameCore { class TaskContext; }

#define AOOPPIAFNDO_CTOR_OFFSET UNITYSDK_OFFSET(0x158C71E0)
#define AOOPPIAFNDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158C7340)
#define AOOPPIAFNDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158C71F0)
#define AOOPPIAFNDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158C72F0)
#define AOOPPIAFNDO_TICK_OFFSET UNITYSDK_OFFSET(0x158C73A0)

	class AOOPPIAFNDO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropFastDeliverStartAim* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverStartAim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverStartAim*))((::PBYTE)hIl2Cpp + AOOPPIAFNDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOPPIAFNDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOPPIAFNDO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOPPIAFNDO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOOPPIAFNDO_TICK_OFFSET))(this, a1);
		}

	};
