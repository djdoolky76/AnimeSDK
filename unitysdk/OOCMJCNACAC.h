#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifierPlayerChangeEffect; }
namespace RPG::GameCore { class TaskContext; }

#define OOCMJCNACAC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF70010)
#define OOCMJCNACAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF700F0)
#define OOCMJCNACAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF70130)
#define OOCMJCNACAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF704B0)
#define OOCMJCNACAC_TICK_OFFSET UNITYSDK_OFFSET(0xBF70500)

	class OOCMJCNACAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifierPlayerChangeEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierPlayerChangeEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + OOCMJCNACAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMJCNACAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMJCNACAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCMJCNACAC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOCMJCNACAC_TICK_OFFSET))(this, a1);
		}

	};
