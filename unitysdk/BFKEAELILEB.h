#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TwinkleFlipperLightDevice; }

#define BFKEAELILEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1703C0)
#define BFKEAELILEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB170530)
#define BFKEAELILEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1703D0)
#define BFKEAELILEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB170570)
#define BFKEAELILEB_TICK_OFFSET UNITYSDK_OFFSET(0xB1705C0)

	class BFKEAELILEB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TwinkleFlipperLightDevice* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TwinkleFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TwinkleFlipperLightDevice*))((::PBYTE)hIl2Cpp + BFKEAELILEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEAELILEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEAELILEB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEAELILEB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFKEAELILEB_TICK_OFFSET))(this, a1);
		}

	};
