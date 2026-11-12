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

#define OMCKLMNLANM_AIFHFFANEHP_OFFSET UNITYSDK_OFFSET(0x1D959820)
#define OMCKLMNLANM_AOMGBAPLCDE_OFFSET UNITYSDK_OFFSET(0x1D95A0F0)
#define OMCKLMNLANM_BAMBGLIILPD_OFFSET UNITYSDK_OFFSET(0x1D959610)
#define OMCKLMNLANM_BMIFOKDMMJK_OFFSET UNITYSDK_OFFSET(0x1D959990)
#define OMCKLMNLANM_CCELIAIBAJD_OFFSET UNITYSDK_OFFSET(0x1D959D10)
#define OMCKLMNLANM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D959440)
#define OMCKLMNLANM_DAACLDMDDGL_OFFSET UNITYSDK_OFFSET(0x1D9598D0)
#define OMCKLMNLANM_DBAPLAPKPDM_OFFSET UNITYSDK_OFFSET(0x1D95A140)
#define OMCKLMNLANM_DHKHJKKOMIC_OFFSET UNITYSDK_OFFSET(0x1D959AE0)
#define OMCKLMNLANM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D9595C0)
#define OMCKLMNLANM_ENACDNJBOPB_OFFSET UNITYSDK_OFFSET(0x1D959F10)
#define OMCKLMNLANM_FDMHNBFHLBA_OFFSET UNITYSDK_OFFSET(0x1D959FE0)
#define OMCKLMNLANM_FMMPLIJPHAE_OFFSET UNITYSDK_OFFSET(0x1D959A00)
#define OMCKLMNLANM_GET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1D95A1E0)
#define OMCKLMNLANM_IJBANAKLDPG_OFFSET UNITYSDK_OFFSET(0x1D95A010)
#define OMCKLMNLANM_JBEDANGMJFG_OFFSET UNITYSDK_OFFSET(0x1D959C60)
#define OMCKLMNLANM_LMOLBKBLANE_OFFSET UNITYSDK_OFFSET(0x1D95A200)
#define OMCKLMNLANM_PEEFECIKEPF_OFFSET UNITYSDK_OFFSET(0x1D9597D0)
#define OMCKLMNLANM_SET_GAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1D95A1F0)

inline static constexpr unsigned int OMCKLMNLANM_TypeDefinitionIndex = 38240;

	class OMCKLMNLANM : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::IFBFJDCECML* _GameEntity_k__BackingField; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::List_1<::MDEHBIFFHNB*>* JECPJLNCIOA; // 0x28
		::System::Collections::Generic::List_1<::EIKMDGNPFIF*>* PEICOKFOELE; // 0x30
		::JJKPCPDIOCC* LLNEOAKBJIN; // 0x38
		::GKBCHMEOCFE* BCAMPLPADOM; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* NOKMJBPIMPB; // 0x48
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
