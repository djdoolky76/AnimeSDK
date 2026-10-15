#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchAlleyShip; }
namespace RPG::GameCore { class TaskContext; }

#define KPGEAKMLGKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B70F0)
#define KPGEAKMLGKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5B7260)
#define KPGEAKMLGKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5B74C0)
#define KPGEAKMLGKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5B7510)
#define KPGEAKMLGKG_TICK_OFFSET UNITYSDK_OFFSET(0xB5B7460)

	class KPGEAKMLGKG : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* PDPJBDCFOLP; // 0x18
		::KFELGAIGHAP* HLHKHKDALHH; // 0x20
		::KFELGAIGHAP* FGJHAMEANMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAlleyShip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAlleyShip*))((::PBYTE)hIl2Cpp + KPGEAKMLGKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEAKMLGKG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPGEAKMLGKG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEAKMLGKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEAKMLGKG_ONTASKRESET_OFFSET))(this);
		}

	};
