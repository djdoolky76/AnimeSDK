#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CommandPartner; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HCDPNEKPLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C174A0)
#define HCDPNEKPLDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C17520)
#define HCDPNEKPLDK_MNAGPIIGKJI_OFFSET UNITYSDK_OFFSET(0x15C17BF0)
#define HCDPNEKPLDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C17610)
#define HCDPNEKPLDK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C18040)
#define HCDPNEKPLDK_TICK_OFFSET UNITYSDK_OFFSET(0x15C18090)

	class HCDPNEKPLDK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CommandPartner* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* BLIGDDNHFHH; // 0x28
		::RPG::GameCore::GameEntity* EDNCILPIMIG; // 0x30
		::System::Boolean EFPALFGNAEF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CommandPartner* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CommandPartner*))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_TICK_OFFSET))(this, a1);
		}

		::System::Void MNAGPIIGKJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_MNAGPIIGKJI_OFFSET))(this);
		}

	};
