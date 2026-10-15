#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EWolfBroGunPlayTargetActionFlag.h"
#include "unitysdk/System/Object.h"
class FICJADOJGMF;
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }

#define JNKPPLPLFOM_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0xB28A830)
#define JNKPPLPLFOM_CPECLJKOIPG_OFFSET UNITYSDK_OFFSET(0xB28A2B0)
#define JNKPPLPLFOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB28A8B0)
#define JNKPPLPLFOM_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0xB28A870)
#define JNKPPLPLFOM_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB28A8A0)
#define JNKPPLPLFOM_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB28A750)
#define JNKPPLPLFOM_HBELKKBABCE_OFFSET UNITYSDK_OFFSET(0xB28A850)
#define JNKPPLPLFOM_IDGNPDMICLA_OFFSET UNITYSDK_OFFSET(0xB28A790)
#define JNKPPLPLFOM_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0xB28A410)
#define JNKPPLPLFOM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB28A5C0)
#define JNKPPLPLFOM_KMECJBGPFAM_OFFSET UNITYSDK_OFFSET(0xB28A350)
#define JNKPPLPLFOM_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0xB28A3D0)
#define JNKPPLPLFOM_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xB28A840)
#define JNKPPLPLFOM_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0xB28A500)
#define JNKPPLPLFOM_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB28A7D0)
#define JNKPPLPLFOM_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0xB28A300)
#define JNKPPLPLFOM_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xB28A880)

	class JNKPPLPLFOM : public ::System::Object
	{
	public:
		::RPG::Client::WolfBroGunPlayTarget* OJAHLJGABMJ; // 0x10
		::RPG::Client::WolfBroGunPlayTargetActionConfig* IGHAHBNLIJA; // 0x18
		::System::Single MCECCFFGDOO; // 0x20
		::System::Boolean INJJGMIGFFD; // 0x24
		::System::Boolean EJDEKKEOHBE; // 0x25
		::System::Boolean FMNEEONAMNO; // 0x26
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_CTOR_OFFSET))(this);
		}

		::System::Void CPECLJKOIPG(::RPG::Client::WolfBroGunPlayTargetActionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTargetActionConfig*))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_CPECLJKOIPG_OFFSET))(this, a1);
		}

		::System::Void LKFJFGPFEJJ(::RPG::Client::WolfBroGunPlayTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_LKFJFGPFEJJ_OFFSET))(this, a1);
		}

		::System::Boolean KMECJBGPFAM(::RPG::Client::EWolfBroGunPlayTargetActionFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EWolfBroGunPlayTargetActionFlag))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_KMECJBGPFAM_OFFSET))(this, a1);
		}

		::System::Void LBMGICALIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_LBMGICALIOL_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void IDGNPDMICLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_IDGNPDMICLA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean AKOIHNHCOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_AKOIHNHCOIA_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_LDKMIKEMHFO_OFFSET))(this);
		}

		::RPG::Client::EWolfBroGunPlayTargetActionFlag HBELKKBABCE()
		{
			return ((::RPG::Client::EWolfBroGunPlayTargetActionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_HBELKKBABCE_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayTarget* DJMOOLAIGEO()
		{
			return ((::RPG::Client::WolfBroGunPlayTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_DJMOOLAIGEO_OFFSET))(this);
		}

		::FICJADOJGMF* PLOGFHDCFJB()
		{
			return ((::FICJADOJGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_PLOGFHDCFJB_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayTargetActionConfig* FMHKLHAKMKO()
		{
			return ((::RPG::Client::WolfBroGunPlayTargetActionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKPPLPLFOM_FMHKLHAKMKO_OFFSET))(this);
		}

	};
