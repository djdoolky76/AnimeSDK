#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAICBMDAOFB_RF_BrickComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class KOEJPJACFDD;
class LNHACPACCKH;

#define GAICBMDAOFB_ABJHKAKEGFD_OFFSET UNITYSDK_OFFSET(0x1AA370F0)
#define GAICBMDAOFB_AHACLKEKLJD_OFFSET UNITYSDK_OFFSET(0x1AA36EF0)
#define GAICBMDAOFB_AJCPJODNBNI_OFFSET UNITYSDK_OFFSET(0x1AA37070)
#define GAICBMDAOFB_BOHCBJEAIGH_OFFSET UNITYSDK_OFFSET(0x1AA37370)
#define GAICBMDAOFB_CEPBIIDFJFK_OFFSET UNITYSDK_OFFSET(0x1AA36FF0)
#define GAICBMDAOFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA37EA0)
#define GAICBMDAOFB_DBIKJMMKDDM_OFFSET UNITYSDK_OFFSET(0x1AA37530)
#define GAICBMDAOFB_DGLCHHFELKF_OFFSET UNITYSDK_OFFSET(0x1AA371C0)
#define GAICBMDAOFB_DIENMAFPNMN_OFFSET UNITYSDK_OFFSET(0x1AA373E0)
#define GAICBMDAOFB_EEAALHMDOGO_OFFSET UNITYSDK_OFFSET(0x1AA37290)
#define GAICBMDAOFB_EFNBLGKKDKF_OFFSET UNITYSDK_OFFSET(0x1AA37490)
#define GAICBMDAOFB_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1AA37E00)
#define GAICBMDAOFB_FDGOJFIGLDH_OFFSET UNITYSDK_OFFSET(0x1AA374A0)
#define GAICBMDAOFB_FGKMLHMPNJA_OFFSET UNITYSDK_OFFSET(0x1AA37640)
#define GAICBMDAOFB_FPFPEECFGFC_OFFSET UNITYSDK_OFFSET(0x1AA37510)
#define GAICBMDAOFB_GKIEHPOIBDG_OFFSET UNITYSDK_OFFSET(0x1AA37580)
#define GAICBMDAOFB_HMHJMIPEPLA_OFFSET UNITYSDK_OFFSET(0x1AA37520)
#define GAICBMDAOFB_IDBLFHKBACF_OFFSET UNITYSDK_OFFSET(0x1AA37430)
#define GAICBMDAOFB_IKFAGCBFPJJ_OFFSET UNITYSDK_OFFSET(0x1AA36E90)
#define GAICBMDAOFB_JBOCHCHFKCL_OFFSET UNITYSDK_OFFSET(0x1AA37600)
#define GAICBMDAOFB_JCGMHFCMPEI_OFFSET UNITYSDK_OFFSET(0x1AA37440)
#define GAICBMDAOFB_KKOMFIDNEFO_OFFSET UNITYSDK_OFFSET(0x1AA36FA0)
#define GAICBMDAOFB_LAHCFIEHLLA_OFFSET UNITYSDK_OFFSET(0x1AA373D0)
#define GAICBMDAOFB_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1AA376A0)
#define GAICBMDAOFB_MLAJDLGHBLG_OFFSET UNITYSDK_OFFSET(0x1AA37590)
#define GAICBMDAOFB_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1AA37DA0)
#define GAICBMDAOFB_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1AA37E50)
#define GAICBMDAOFB_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1AA37A50)
#define GAICBMDAOFB_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1AA37320)
#define GAICBMDAOFB_OBKHDPBJBND_OFFSET UNITYSDK_OFFSET(0x1AA37140)
#define GAICBMDAOFB_OGMEPGLIFBF_OFFSET UNITYSDK_OFFSET(0x1AA37210)
#define GAICBMDAOFB_OMPIFMLEDEI_OFFSET UNITYSDK_OFFSET(0x1AA37380)
#define GAICBMDAOFB_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1AA37310)

inline static constexpr unsigned int GAICBMDAOFB_TypeDefinitionIndex = 38005;

	class GAICBMDAOFB : public ::System::Object
	{
	public:
		::KOEJPJACFDD* DICHMDHDMJH; // 0x10
		::GAICBMDAOFB_RF_BrickComponent HFKLFHBEDEM; // 0x18
		::System::Boolean LHFDFFMCIBM; // 0x1A
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType GKJIIKPDINH; // 0x1B
		::System::Single IKDDPAMJONP; // 0x1C
		::System::UInt32 HEMJPHIDLHN; // 0x20
		::System::Single EKAFKAEJAEP; // 0x24
		::System::Boolean HBNPKFOCPOJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NMABKEAGBAD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_CTOR_OFFSET))(this);
		}

		::System::Boolean IKFAGCBFPJJ(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType))((::PBYTE)hIl2Cpp + GAICBMDAOFB_IKFAGCBFPJJ_OFFSET))(this, a1);
		}

		::System::Void AHACLKEKLJD(::KOEJPJACFDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEJPJACFDD*))((::PBYTE)hIl2Cpp + GAICBMDAOFB_AHACLKEKLJD_OFFSET))(this, a1);
		}

		::System::Void CEPBIIDFJFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_CEPBIIDFJFK_OFFSET))(this);
		}

		::System::Void AJCPJODNBNI(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + GAICBMDAOFB_AJCPJODNBNI_OFFSET))(this, a1);
		}

		::System::Void OBKHDPBJBND(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + GAICBMDAOFB_OBKHDPBJBND_OFFSET))(this, a1);
		}

		::System::Boolean DGLCHHFELKF(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + GAICBMDAOFB_DGLCHHFELKF_OFFSET))(this, a1);
		}

		::System::Boolean OGMEPGLIFBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_OGMEPGLIFBF_OFFSET))(this);
		}

		::System::Boolean EEAALHMDOGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_EEAALHMDOGO_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 BOHCBJEAIGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_BOHCBJEAIGH_OFFSET))(this);
		}

		::System::Void OMPIFMLEDEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAICBMDAOFB_OMPIFMLEDEI_OFFSET))(this, a1);
		}

		::System::UInt32 LAHCFIEHLLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_LAHCFIEHLLA_OFFSET))(this);
		}

		::System::Void DIENMAFPNMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAICBMDAOFB_DIENMAFPNMN_OFFSET))(this, a1);
		}

		::System::Boolean IDBLFHKBACF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_IDBLFHKBACF_OFFSET))(this);
		}

		::System::Void JCGMHFCMPEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAICBMDAOFB_JCGMHFCMPEI_OFFSET))(this, a1);
		}

		::System::Single EFNBLGKKDKF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_EFNBLGKKDKF_OFFSET))(this);
		}

		::System::Void FDGOJFIGLDH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAICBMDAOFB_FDGOJFIGLDH_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType FPFPEECFGFC()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_FPFPEECFGFC_OFFSET))(this);
		}

		::System::Void ABJHKAKEGFD(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + GAICBMDAOFB_ABJHKAKEGFD_OFFSET))(this, a1);
		}

		::System::Boolean HMHJMIPEPLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_HMHJMIPEPLA_OFFSET))(this);
		}

		::System::Void DBIKJMMKDDM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAICBMDAOFB_DBIKJMMKDDM_OFFSET))(this, a1);
		}

		::System::Single GKIEHPOIBDG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_GKIEHPOIBDG_OFFSET))(this);
		}

		::System::Void MLAJDLGHBLG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAICBMDAOFB_MLAJDLGHBLG_OFFSET))(this, a1);
		}

		::KOEJPJACFDD* JBOCHCHFKCL()
		{
			return ((::KOEJPJACFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_JBOCHCHFKCL_OFFSET))(this);
		}

		::KOEJPJACFDD* KKOMFIDNEFO()
		{
			return ((::KOEJPJACFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_KKOMFIDNEFO_OFFSET))(this);
		}

		::System::Void FGKMLHMPNJA(::KOEJPJACFDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEJPJACFDD*))((::PBYTE)hIl2Cpp + GAICBMDAOFB_FGKMLHMPNJA_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + GAICBMDAOFB_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GAICBMDAOFB_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GAICBMDAOFB_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::GAICBMDAOFB_RF_BrickComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAICBMDAOFB_RF_BrickComponent))((::PBYTE)hIl2Cpp + GAICBMDAOFB_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAICBMDAOFB_NBLPPFGNHHO_OFFSET))(this);
		}

	};
