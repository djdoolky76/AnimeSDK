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

#define GAICBMDAOFB_ABJHKAKEGFD_OFFSET UNITYSDK_OFFSET(0x1C5F9F40)
#define GAICBMDAOFB_AHACLKEKLJD_OFFSET UNITYSDK_OFFSET(0x1C5F9D40)
#define GAICBMDAOFB_AJCPJODNBNI_OFFSET UNITYSDK_OFFSET(0x1C5F9EC0)
#define GAICBMDAOFB_BOHCBJEAIGH_OFFSET UNITYSDK_OFFSET(0x1C5FA1C0)
#define GAICBMDAOFB_CEPBIIDFJFK_OFFSET UNITYSDK_OFFSET(0x1C5F9E40)
#define GAICBMDAOFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FAD30)
#define GAICBMDAOFB_DBIKJMMKDDM_OFFSET UNITYSDK_OFFSET(0x1C5FA380)
#define GAICBMDAOFB_DGLCHHFELKF_OFFSET UNITYSDK_OFFSET(0x1C5FA010)
#define GAICBMDAOFB_DIENMAFPNMN_OFFSET UNITYSDK_OFFSET(0x1C5FA230)
#define GAICBMDAOFB_EEAALHMDOGO_OFFSET UNITYSDK_OFFSET(0x1C5FA0E0)
#define GAICBMDAOFB_EFNBLGKKDKF_OFFSET UNITYSDK_OFFSET(0x1C5FA2E0)
#define GAICBMDAOFB_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C5FAC90)
#define GAICBMDAOFB_FDGOJFIGLDH_OFFSET UNITYSDK_OFFSET(0x1C5FA2F0)
#define GAICBMDAOFB_FGKMLHMPNJA_OFFSET UNITYSDK_OFFSET(0x1C5FA490)
#define GAICBMDAOFB_FPFPEECFGFC_OFFSET UNITYSDK_OFFSET(0x1C5FA360)
#define GAICBMDAOFB_GKIEHPOIBDG_OFFSET UNITYSDK_OFFSET(0x1C5FA3D0)
#define GAICBMDAOFB_HMHJMIPEPLA_OFFSET UNITYSDK_OFFSET(0x1C5FA370)
#define GAICBMDAOFB_IDBLFHKBACF_OFFSET UNITYSDK_OFFSET(0x1C5FA280)
#define GAICBMDAOFB_IKFAGCBFPJJ_OFFSET UNITYSDK_OFFSET(0x1C5F9CE0)
#define GAICBMDAOFB_JBOCHCHFKCL_OFFSET UNITYSDK_OFFSET(0x1C5FA450)
#define GAICBMDAOFB_JCGMHFCMPEI_OFFSET UNITYSDK_OFFSET(0x1C5FA290)
#define GAICBMDAOFB_KKOMFIDNEFO_OFFSET UNITYSDK_OFFSET(0x1C5F9DF0)
#define GAICBMDAOFB_LAHCFIEHLLA_OFFSET UNITYSDK_OFFSET(0x1C5FA220)
#define GAICBMDAOFB_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C5FA4F0)
#define GAICBMDAOFB_MLAJDLGHBLG_OFFSET UNITYSDK_OFFSET(0x1C5FA3E0)
#define GAICBMDAOFB_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C5FAC30)
#define GAICBMDAOFB_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C5FACE0)
#define GAICBMDAOFB_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C5FA8E0)
#define GAICBMDAOFB_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C5FA170)
#define GAICBMDAOFB_OBKHDPBJBND_OFFSET UNITYSDK_OFFSET(0x1C5F9F90)
#define GAICBMDAOFB_OGMEPGLIFBF_OFFSET UNITYSDK_OFFSET(0x1C5FA060)
#define GAICBMDAOFB_OMPIFMLEDEI_OFFSET UNITYSDK_OFFSET(0x1C5FA1D0)
#define GAICBMDAOFB_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C5FA160)

inline static constexpr unsigned int GAICBMDAOFB_TypeDefinitionIndex = 37077;

	class GAICBMDAOFB : public ::System::Object
	{
	public:
		::KOEJPJACFDD* DICHMDHDMJH; // 0x10
		::System::Single EKAFKAEJAEP; // 0x18
		::GAICBMDAOFB_RF_BrickComponent HFKLFHBEDEM; // 0x1C
		::System::Boolean HBNPKFOCPOJ; // 0x1E
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType GKJIIKPDINH; // 0x1F
		::System::Boolean LHFDFFMCIBM; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 HEMJPHIDLHN; // 0x24
		::System::Single IKDDPAMJONP; // 0x28
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
