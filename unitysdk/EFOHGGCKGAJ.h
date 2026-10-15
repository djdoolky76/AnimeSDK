#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropDestroy; }

#define EFOHGGCKGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5E5A0)
#define EFOHGGCKGAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A5E620)
#define EFOHGGCKGAJ_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x13A5ED70)
#define EFOHGGCKGAJ_FIDKJDOMDBH_OFFSET UNITYSDK_OFFSET(0x13A5EDF0)
#define EFOHGGCKGAJ_KCADBBJFDOG_OFFSET UNITYSDK_OFFSET(0x13A5EA50)
#define EFOHGGCKGAJ_ONFCJOECHHJ_OFFSET UNITYSDK_OFFSET(0x13A5E940)
#define EFOHGGCKGAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5E770)
#define EFOHGGCKGAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5E720)
#define EFOHGGCKGAJ_TICK_OFFSET UNITYSDK_OFFSET(0x13A5EB60)

	class EFOHGGCKGAJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GELIALJDFBL* CHOOMNGLJHI; // 0x20
		::RPG::GameCore::WaitPropDestroy* OFKGLJOAMLD; // 0x28
		::System::UInt32 FMAGLGKDEAJ; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropDestroy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ONFCJOECHHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_ONFCJOECHHJ_OFFSET))(this, a1);
		}

		::System::Void KCADBBJFDOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_KCADBBJFDOG_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_TICK_OFFSET))(this, a1);
		}

		::System::Void DPIIHPNEHJA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_DPIIHPNEHJA_OFFSET))(this, a1, a2);
		}

		::System::Void FIDKJDOMDBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOHGGCKGAJ_FIDKJDOMDBH_OFFSET))(this);
		}

	};
