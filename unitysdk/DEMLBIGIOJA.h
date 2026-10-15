#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvLoopTimer; }
namespace RPG::GameCore { class TaskContext; }

#define DEMLBIGIOJA_CTOR_OFFSET UNITYSDK_OFFSET(0xE519B30)
#define DEMLBIGIOJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE519C40)
#define DEMLBIGIOJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE519DA0)
#define DEMLBIGIOJA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE51A160)
#define DEMLBIGIOJA_TICK_OFFSET UNITYSDK_OFFSET(0xE519E40)

	class DEMLBIGIOJA : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* ELLKKCBJCHJ; // 0x18
		::KFELGAIGHAP* JELBGELHJLP; // 0x20
		::RPG::GameCore::AdvLoopTimer* IGHAHBNLIJA; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Boolean HDPLEHFEOFC; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLoopTimer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLoopTimer*))((::PBYTE)hIl2Cpp + DEMLBIGIOJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLBIGIOJA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLBIGIOJA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEMLBIGIOJA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLBIGIOJA_ONTASKRESET_OFFSET))(this);
		}

	};
