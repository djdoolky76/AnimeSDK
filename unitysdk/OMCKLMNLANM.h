#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightSoftStopReason.h"
#include "unitysdk/System/Object.h"
class EIKMDGNPFIF;
class GKBCHMEOCFE;
class GMIFBFGDGJK;
class IFBFJDCECML;
class JJKPCPDIOCC;
class MDEHBIFFHNB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMCKLMNLANM_AIFHFFANEHP_OFFSET UNITYSDK_OFFSET(0x1C7D7FA0)
#define OMCKLMNLANM_AOMGBAPLCDE_OFFSET UNITYSDK_OFFSET(0x1C7D8840)
#define OMCKLMNLANM_BAMBGLIILPD_OFFSET UNITYSDK_OFFSET(0x1C7D7D90)
#define OMCKLMNLANM_BMIFOKDMMJK_OFFSET UNITYSDK_OFFSET(0x1C7D8100)
#define OMCKLMNLANM_CCELIAIBAJD_OFFSET UNITYSDK_OFFSET(0x1C7D8470)
#define OMCKLMNLANM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D7BC0)
#define OMCKLMNLANM_DAACLDMDDGL_OFFSET UNITYSDK_OFFSET(0x1C7D8040)
#define OMCKLMNLANM_DBAPLAPKPDM_OFFSET UNITYSDK_OFFSET(0x1C7D8890)
#define OMCKLMNLANM_DHKHJKKOMIC_OFFSET UNITYSDK_OFFSET(0x1C7D8250)
#define OMCKLMNLANM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7D7D40)
#define OMCKLMNLANM_ENACDNJBOPB_OFFSET UNITYSDK_OFFSET(0x1C7D8660)
#define OMCKLMNLANM_FDMHNBFHLBA_OFFSET UNITYSDK_OFFSET(0x1C7D8730)
#define OMCKLMNLANM_FMMPLIJPHAE_OFFSET UNITYSDK_OFFSET(0x1C7D8170)
#define OMCKLMNLANM_GET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1C7D8930)
#define OMCKLMNLANM_IJBANAKLDPG_OFFSET UNITYSDK_OFFSET(0x1C7D8760)
#define OMCKLMNLANM_JBEDANGMJFG_OFFSET UNITYSDK_OFFSET(0x1C7D83D0)
#define OMCKLMNLANM_LMOLBKBLANE_OFFSET UNITYSDK_OFFSET(0x1C7D8950)
#define OMCKLMNLANM_PEEFECIKEPF_OFFSET UNITYSDK_OFFSET(0x1C7D7F50)
#define OMCKLMNLANM_SET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1C7D8940)

	class OMCKLMNLANM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* NOKMJBPIMPB; // 0x10
		::System::Collections::Generic::List_1<::EIKMDGNPFIF*>* PEICOKFOELE; // 0x18
		::IFBFJDCECML* _GameEntity_k__BackingField; // 0x20
		::GKBCHMEOCFE* BCAMPLPADOM; // 0x28
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x30
		::JJKPCPDIOCC* LLNEOAKBJIN; // 0x38
		::System::Collections::Generic::List_1<::MDEHBIFFHNB*>* JECPJLNCIOA; // 0x40
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x48
		::System::Boolean IHLPMGMBLFN; // 0x50
		::System::Void _ctor(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + OMCKLMNLANM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_DISPOSE_OFFSET))(this);
		}

		::System::Void BAMBGLIILPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_BAMBGLIILPD_OFFSET))(this);
		}

		::System::Void DAACLDMDDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_DAACLDMDDGL_OFFSET))(this);
		}

		::System::Void FMMPLIJPHAE(::EIKMDGNPFIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKMDGNPFIF*))((::PBYTE)hIl2Cpp + OMCKLMNLANM_FMMPLIJPHAE_OFFSET))(this, a1);
		}

		::System::Void DHKHJKKOMIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_DHKHJKKOMIC_OFFSET))(this);
		}

		::System::Void PEEFECIKEPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_PEEFECIKEPF_OFFSET))(this);
		}

		::System::Void AIFHFFANEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_AIFHFFANEHP_OFFSET))(this);
		}

		::System::Void CCELIAIBAJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_CCELIAIBAJD_OFFSET))(this);
		}

		::System::Void JBEDANGMJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_JBEDANGMJFG_OFFSET))(this);
		}

		::System::Boolean ENACDNJBOPB(::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason))((::PBYTE)hIl2Cpp + OMCKLMNLANM_ENACDNJBOPB_OFFSET))(this, a1);
		}

		::System::Void AOMGBAPLCDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_AOMGBAPLCDE_OFFSET))(this);
		}

		::System::Void IJBANAKLDPG(::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason))((::PBYTE)hIl2Cpp + OMCKLMNLANM_IJBANAKLDPG_OFFSET))(this, a1);
		}

		::System::Void BMIFOKDMMJK(::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason))((::PBYTE)hIl2Cpp + OMCKLMNLANM_BMIFOKDMMJK_OFFSET))(this, a1);
		}

		::System::Void DBAPLAPKPDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_DBAPLAPKPDM_OFFSET))(this);
		}

		::System::Boolean FDMHNBFHLBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_FDMHNBFHLBA_OFFSET))(this);
		}

		::IFBFJDCECML* get_GameEntity()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_GET_GAMEENTITY_OFFSET))(this);
		}

		::System::Void set_GameEntity(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + OMCKLMNLANM_SET_GAMEENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 LMOLBKBLANE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM_LMOLBKBLANE_OFFSET))(this);
		}

	};
