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

#define OMCKLMNLANM_AIFHFFANEHP_OFFSET UNITYSDK_OFFSET(0x1B08B4F0)
#define OMCKLMNLANM_AOMGBAPLCDE_OFFSET UNITYSDK_OFFSET(0x1B08BDC0)
#define OMCKLMNLANM_BAMBGLIILPD_OFFSET UNITYSDK_OFFSET(0x1B08B2E0)
#define OMCKLMNLANM_BMIFOKDMMJK_OFFSET UNITYSDK_OFFSET(0x1B08B660)
#define OMCKLMNLANM_CCELIAIBAJD_OFFSET UNITYSDK_OFFSET(0x1B08B9E0)
#define OMCKLMNLANM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B08B110)
#define OMCKLMNLANM_DAACLDMDDGL_OFFSET UNITYSDK_OFFSET(0x1B08B5A0)
#define OMCKLMNLANM_DBAPLAPKPDM_OFFSET UNITYSDK_OFFSET(0x1B08BE10)
#define OMCKLMNLANM_DHKHJKKOMIC_OFFSET UNITYSDK_OFFSET(0x1B08B7B0)
#define OMCKLMNLANM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B08B290)
#define OMCKLMNLANM_ENACDNJBOPB_OFFSET UNITYSDK_OFFSET(0x1B08BBE0)
#define OMCKLMNLANM_FDMHNBFHLBA_OFFSET UNITYSDK_OFFSET(0x1B08BCB0)
#define OMCKLMNLANM_FMMPLIJPHAE_OFFSET UNITYSDK_OFFSET(0x1B08B6D0)
#define OMCKLMNLANM_GET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1B08BEB0)
#define OMCKLMNLANM_IJBANAKLDPG_OFFSET UNITYSDK_OFFSET(0x1B08BCE0)
#define OMCKLMNLANM_JBEDANGMJFG_OFFSET UNITYSDK_OFFSET(0x1B08B930)
#define OMCKLMNLANM_LMOLBKBLANE_OFFSET UNITYSDK_OFFSET(0x1B08BED0)
#define OMCKLMNLANM_PEEFECIKEPF_OFFSET UNITYSDK_OFFSET(0x1B08B4A0)
#define OMCKLMNLANM_SET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1B08BEC0)

inline static constexpr unsigned int OMCKLMNLANM_TypeDefinitionIndex = 38240;

	class OMCKLMNLANM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MDEHBIFFHNB*>* JECPJLNCIOA; // 0x10
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::EIKMDGNPFIF*>* PEICOKFOELE; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* NOKMJBPIMPB; // 0x28
		::GKBCHMEOCFE* BCAMPLPADOM; // 0x30
		::JJKPCPDIOCC* LLNEOAKBJIN; // 0x38
		::IFBFJDCECML* _GameEntity_k__BackingField; // 0x40
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x48
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
