#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropDestroy; }

#define EFOHGGCKGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5EE50)
#define EFOHGGCKGAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A5EED0)
#define EFOHGGCKGAJ_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x13A5F610)
#define EFOHGGCKGAJ_FIDKJDOMDBH_OFFSET UNITYSDK_OFFSET(0x13A5F690)
#define EFOHGGCKGAJ_KCADBBJFDOG_OFFSET UNITYSDK_OFFSET(0x13A5F2F0)
#define EFOHGGCKGAJ_ONFCJOECHHJ_OFFSET UNITYSDK_OFFSET(0x13A5F1F0)
#define EFOHGGCKGAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5F020)
#define EFOHGGCKGAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5EFD0)
#define EFOHGGCKGAJ_TICK_OFFSET UNITYSDK_OFFSET(0x13A5F400)

inline static constexpr unsigned int EFOHGGCKGAJ_TypeDefinitionIndex = 53486;

	class EFOHGGCKGAJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPropDestroy* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* CHOOMNGLJHI; // 0x28
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
