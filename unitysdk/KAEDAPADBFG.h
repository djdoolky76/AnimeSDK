#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetAlleyPackEnable3DControl; }
namespace RPG::GameCore { class TaskContext; }

#define KAEDAPADBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D41F0)
#define KAEDAPADBFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D4200)
#define KAEDAPADBFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2D4240)
#define KAEDAPADBFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2D42C0)
#define KAEDAPADBFG_TICK_OFFSET UNITYSDK_OFFSET(0xB2D4310)

	class KAEDAPADBFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetAlleyPackEnable3DControl* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAlleyPackEnable3DControl*))((::PBYTE)hIl2Cpp + KAEDAPADBFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEDAPADBFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEDAPADBFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEDAPADBFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAEDAPADBFG_TICK_OFFSET))(this, a1);
		}

	};
