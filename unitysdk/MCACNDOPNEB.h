#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCACNDOPNEB_RF_PlayerTowerComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define MCACNDOPNEB_BKLNHDDCPCF_OFFSET UNITYSDK_OFFSET(0x1C719AE0)
#define MCACNDOPNEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C719ED0)
#define MCACNDOPNEB_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C719E30)
#define MCACNDOPNEB_JOBDEMHBBDA_OFFSET UNITYSDK_OFFSET(0x1C719B50)
#define MCACNDOPNEB_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C719BA0)
#define MCACNDOPNEB_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C719DD0)
#define MCACNDOPNEB_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C719E80)
#define MCACNDOPNEB_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C719CE0)
#define MCACNDOPNEB_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C719AA0)
#define MCACNDOPNEB_OFLIKOIDNBH_OFFSET UNITYSDK_OFFSET(0x1C719AF0)
#define MCACNDOPNEB_PKDGKBBOPFN_OFFSET UNITYSDK_OFFSET(0x1C719B40)
#define MCACNDOPNEB_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C719A90)

inline static constexpr unsigned int MCACNDOPNEB_TypeDefinitionIndex = 37099;

	class MCACNDOPNEB : public ::System::Object
	{
	public:
		::MCACNDOPNEB_RF_PlayerTowerComponent HFKLFHBEDEM; // 0x10
		::System::Int32 OBDFNGBDHBH; // 0x14
		::System::UInt32 PPLCCPAAJND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Int32 BKLNHDDCPCF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_BKLNHDDCPCF_OFFSET))(this);
		}

		::System::Void OFLIKOIDNBH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCACNDOPNEB_OFLIKOIDNBH_OFFSET))(this, a1);
		}

		::System::UInt32 PKDGKBBOPFN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_PKDGKBBOPFN_OFFSET))(this);
		}

		::System::Void JOBDEMHBBDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCACNDOPNEB_JOBDEMHBBDA_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + MCACNDOPNEB_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MCACNDOPNEB_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MCACNDOPNEB_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::MCACNDOPNEB_RF_PlayerTowerComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCACNDOPNEB_RF_PlayerTowerComponent))((::PBYTE)hIl2Cpp + MCACNDOPNEB_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCACNDOPNEB_NBLPPFGNHHO_OFFSET))(this);
		}

	};
