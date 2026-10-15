#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchHandItemSetBreathingLight; }
namespace RPG::GameCore { class TaskContext; }

#define CPHGMLEAPJL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD55C0)
#define CPHGMLEAPJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD55D0)
#define CPHGMLEAPJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD57C0)
#define CPHGMLEAPJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCD5840)
#define CPHGMLEAPJL_TICK_OFFSET UNITYSDK_OFFSET(0xDCD5620)

	class CPHGMLEAPJL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandItemSetBreathingLight* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + CPHGMLEAPJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGMLEAPJL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPHGMLEAPJL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGMLEAPJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGMLEAPJL_ONTASKRESET_OFFSET))(this);
		}

	};
