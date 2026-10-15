#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillInput; }
namespace System { class Object; }

#define KPEDJNBDACG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AD8A0)
#define KPEDJNBDACG_DBLKBKDCKIG_1_OFFSET UNITYSDK_OFFSET(0xB5AE430)
#define KPEDJNBDACG_DBLKBKDCKIG_OFFSET UNITYSDK_OFFSET(0xB5AE8D0)
#define KPEDJNBDACG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5ADA20)
#define KPEDJNBDACG_EIIFHCFPGDN_OFFSET UNITYSDK_OFFSET(0xB5ADF60)
#define KPEDJNBDACG_IIDJBGGGNFG_OFFSET UNITYSDK_OFFSET(0xB5AEB30)
#define KPEDJNBDACG_NIDABEMHCDI_OFFSET UNITYSDK_OFFSET(0xB5AEF20)
#define KPEDJNBDACG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5ADEB0)
#define KPEDJNBDACG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5AE1E0)
#define KPEDJNBDACG_PAPLKANKKPC_OFFSET UNITYSDK_OFFSET(0xB5ADC30)
#define KPEDJNBDACG_TICK_OFFSET UNITYSDK_OFFSET(0xB5AE240)

inline static constexpr unsigned int KPEDJNBDACG_TypeDefinitionIndex = 58928;

	class KPEDJNBDACG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* MEBALENPILJ; // 0x20
		::KFELGAIGHAP* INIMDAHODMJ; // 0x28
		::KFELGAIGHAP* DJHFAMBKLND; // 0x30
		::RPG::GameCore::WaitSkillInput* OFKGLJOAMLD; // 0x38
		::System::Single EFKCJMFANEB; // 0x40
		::System::Single DKOFFPPGEFI; // 0x44
		::RPG::GameCore::AdventureSkillType NFPKMFGMCIC; // 0x48
		::System::Boolean BJIMNGNKDGD; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSkillInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + KPEDJNBDACG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPEDJNBDACG_TICK_OFFSET))(this, a1);
		}

		::System::Void DBLKBKDCKIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPEDJNBDACG_DBLKBKDCKIG_OFFSET))(this, a1);
		}

		::System::Void DBLKBKDCKIG_1(::RPG::GameCore::AdventureSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + KPEDJNBDACG_DBLKBKDCKIG_1_OFFSET))(this, a1);
		}

		::System::Void NIDABEMHCDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPEDJNBDACG_NIDABEMHCDI_OFFSET))(this, a1);
		}

		::System::Void EIIFHCFPGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_EIIFHCFPGDN_OFFSET))(this);
		}

		::System::Void PAPLKANKKPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_PAPLKANKKPC_OFFSET))(this);
		}

		::System::Boolean IIDJBGGGNFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEDJNBDACG_IIDJBGGGNFG_OFFSET))(this);
		}

	};
