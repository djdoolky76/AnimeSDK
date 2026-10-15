#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKMJPGPLECG_TeleportPhase.h"
#include "unitysdk/DKBCNADLOGN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ANMMOFEEPEP.h"
#include "unitysdk/BINEKJFCLMP.h"
#include "unitysdk/DBHHLOMCPDO.h"
#include "unitysdk/IHJCOALACON.h"
class ABFENGEAJNE;
class AGBDHJMJFHD;
class IBAAHKDOHDB;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimModule; }
namespace RPG::Client { class FiveDimPlayerEnterLeaveInfo; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CKMJPGPLECG_AHIHMHPCAJG_OFFSET UNITYSDK_OFFSET(0xD765060)
#define CKMJPGPLECG_AJMBPBIFABI_OFFSET UNITYSDK_OFFSET(0xD765790)
#define CKMJPGPLECG_AOFCPLCIKIK_OFFSET UNITYSDK_OFFSET(0xD766040)
#define CKMJPGPLECG_BGDPGLIFPNF_OFFSET UNITYSDK_OFFSET(0xD7689D0)
#define CKMJPGPLECG_BOEDABADKMC_OFFSET UNITYSDK_OFFSET(0xD767A20)
#define CKMJPGPLECG_BPJOECLGJGB_OFFSET UNITYSDK_OFFSET(0xD769820)
#define CKMJPGPLECG_CDBLDJJIDOP_OFFSET UNITYSDK_OFFSET(0xD766FA0)
#define CKMJPGPLECG_CGDLHKOPDEN_OFFSET UNITYSDK_OFFSET(0xD769990)
#define CKMJPGPLECG_CGMFBMBHGNH_OFFSET UNITYSDK_OFFSET(0xD764B70)
#define CKMJPGPLECG_CLEAR_OFFSET UNITYSDK_OFFSET(0xD764850)
#define CKMJPGPLECG_CMDGAHGHDLA_OFFSET UNITYSDK_OFFSET(0xD767760)
#define CKMJPGPLECG_CPKEILEPPCL_OFFSET UNITYSDK_OFFSET(0xD768E80)
#define CKMJPGPLECG_CTOR_OFFSET UNITYSDK_OFFSET(0xD769AB0)
#define CKMJPGPLECG_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0xD769870)
#define CKMJPGPLECG_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0xD7652F0)
#define CKMJPGPLECG_EEGPPOMENOB_OFFSET UNITYSDK_OFFSET(0xD7677F0)
#define CKMJPGPLECG_EMDKPNDPDPE_OFFSET UNITYSDK_OFFSET(0xD769A20)
#define CKMJPGPLECG_EMIOPNNIBKO_OFFSET UNITYSDK_OFFSET(0xD767890)
#define CKMJPGPLECG_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0xD768070)
#define CKMJPGPLECG_FJADAPHHGDC_OFFSET UNITYSDK_OFFSET(0xD7698C0)
#define CKMJPGPLECG_FKDCOILOJPH_OFFSET UNITYSDK_OFFSET(0xD769090)
#define CKMJPGPLECG_FNDELLOLBCE_OFFSET UNITYSDK_OFFSET(0xD7696B0)
#define CKMJPGPLECG_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xD7644F0)
#define CKMJPGPLECG_GCGLHDMHKMA_OFFSET UNITYSDK_OFFSET(0xD766BE0)
#define CKMJPGPLECG_GEPMJEOJHLF_OFFSET UNITYSDK_OFFSET(0xD765000)
#define CKMJPGPLECG_GJAGMJHMJHP_OFFSET UNITYSDK_OFFSET(0xD767B30)
#define CKMJPGPLECG_GOEGDCEPDJJ_OFFSET UNITYSDK_OFFSET(0xD7657E0)
#define CKMJPGPLECG_HFJBBKFNHAC_OFFSET UNITYSDK_OFFSET(0xD764AA0)
#define CKMJPGPLECG_HFMCEBDABHP_OFFSET UNITYSDK_OFFSET(0xD764F00)
#define CKMJPGPLECG_HLEDPDMJPAH_OFFSET UNITYSDK_OFFSET(0xD765740)
#define CKMJPGPLECG_IHNFIEGFJDD_OFFSET UNITYSDK_OFFSET(0xD7681B0)
#define CKMJPGPLECG_IKLIAJDONOP_OFFSET UNITYSDK_OFFSET(0xD765400)
#define CKMJPGPLECG_IMHNMLHHGPE_OFFSET UNITYSDK_OFFSET(0xD766A70)
#define CKMJPGPLECG_JFNBFIODEJC_OFFSET UNITYSDK_OFFSET(0xD7693E0)
#define CKMJPGPLECG_JIEFKIKAJJO_OFFSET UNITYSDK_OFFSET(0xD765140)
#define CKMJPGPLECG_JIKGHBMBDIH_OFFSET UNITYSDK_OFFSET(0xD766B90)
#define CKMJPGPLECG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD7650C0)
#define CKMJPGPLECG_JMJODIFBBML_OFFSET UNITYSDK_OFFSET(0xD768310)
#define CKMJPGPLECG_KBBNNKFOKEB_OFFSET UNITYSDK_OFFSET(0xD769540)
#define CKMJPGPLECG_KBDPEGKLIJN_OFFSET UNITYSDK_OFFSET(0xD7675A0)
#define CKMJPGPLECG_KGPBKBGOADL_OFFSET UNITYSDK_OFFSET(0xD7679A0)
#define CKMJPGPLECG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD764500)
#define CKMJPGPLECG_LAJKKPGONEE_OFFSET UNITYSDK_OFFSET(0xD767BB0)
#define CKMJPGPLECG_LHPCCPKKEBI_OFFSET UNITYSDK_OFFSET(0xD765640)
#define CKMJPGPLECG_MECGBKECMFF_OFFSET UNITYSDK_OFFSET(0xD766360)
#define CKMJPGPLECG_MNHGKPJOHNN_OFFSET UNITYSDK_OFFSET(0xD764C10)
#define CKMJPGPLECG_NBPIHIFNGFM_OFFSET UNITYSDK_OFFSET(0xD7656E0)
#define CKMJPGPLECG_NCNHNECHHAC_OFFSET UNITYSDK_OFFSET(0xD7665C0)
#define CKMJPGPLECG_NEABFHOENBH_OFFSET UNITYSDK_OFFSET(0xD769140)
#define CKMJPGPLECG_NEOCFNKAFGN_OFFSET UNITYSDK_OFFSET(0xD766C70)
#define CKMJPGPLECG_OEKKHAMEMBI_OFFSET UNITYSDK_OFFSET(0xD766EE0)
#define CKMJPGPLECG_OGMDGJEJFBL_OFFSET UNITYSDK_OFFSET(0xD767130)
#define CKMJPGPLECG_OMCFBBLBOFC_OFFSET UNITYSDK_OFFSET(0xD766640)
#define CKMJPGPLECG_ONHPDPENOFP_OFFSET UNITYSDK_OFFSET(0xD764DD0)
#define CKMJPGPLECG_ONNMCGLFBAM_OFFSET UNITYSDK_OFFSET(0xD767470)
#define CKMJPGPLECG_PAJALCEFDPI_OFFSET UNITYSDK_OFFSET(0xD766D30)
#define CKMJPGPLECG_PEFMCLFMNMO_OFFSET UNITYSDK_OFFSET(0xD7654C0)
#define CKMJPGPLECG_PJOALEKPOJP_OFFSET UNITYSDK_OFFSET(0xD768F30)
#define CKMJPGPLECG_PLNKCHMAGDD_OFFSET UNITYSDK_OFFSET(0xD764E70)

inline static constexpr unsigned int CKMJPGPLECG_TypeDefinitionIndex = 60550;

	class CKMJPGPLECG : public ::DKBCNADLOGN
	{
	public:
		::RPG::GameCore::LevelLittleGameInfo* ICJNAKAKBGJ; // 0x68
		::ABFENGEAJNE* NFEGAKCJDCE; // 0x70
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x78
		::System::String* JPDAJPPFKLP; // 0x80
		::UnityEngine::Coroutine* LKOEFKEFDIP; // 0x88
		::UnityEngine::Coroutine* CPNOLMLBOKA; // 0x90
		::UnityEngine::Coroutine* CGFIKBBODAJ; // 0x98
		::System::Boolean NFNOPPCDMAL; // 0xA0
		::System::Boolean JHPALOHBMNB; // 0xA1
		::System::Boolean NDMIMFCGDBB; // 0xA2
		::System::Boolean GEBIFJABHNL; // 0xA3
		::System::Boolean LFIKAOBEEPM; // 0xA4
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BNOOPEGBKEL; // 0xA8
		::System::Boolean DFGKDKNFIBD; // 0xB4
		::System::Boolean ODKDBGGFNLK; // 0xB5
		::System::Boolean IKINBKBLOEI; // 0xB6
		::System::Boolean GDONGDBHNEP; // 0xB7
		::System::UInt32 ICLEAOCAEII; // 0xB8
		::CKMJPGPLECG_TeleportPhase NOHNKAIALPJ; // 0xBC
		// static const ::System::String* MKAIKLNBIDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CTOR_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::ANMMOFEEPEP a1, ::IHJCOALACON a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANMMOFEEPEP, ::IHJCOALACON))((::PBYTE)hIl2Cpp + CKMJPGPLECG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKMJPGPLECG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLHHEKECOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_DLHHEKECOHA_OFFSET))(this);
		}

		::System::Void JIEFKIKAJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_JIEFKIKAJJO_OFFSET))(this);
		}

		::System::Void PEFMCLFMNMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_PEFMCLFMNMO_OFFSET))(this);
		}

		::System::Void GOEGDCEPDJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_GOEGDCEPDJJ_OFFSET))(this);
		}

		::System::Void CDBLDJJIDOP(::System::Exception* a1, ::RPG::Client::FiveDimGameInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CDBLDJJIDOP_OFFSET))(this, a1, a2);
		}

		::System::Void OEKKHAMEMBI(::DBHHLOMCPDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBHHLOMCPDO))((::PBYTE)hIl2Cpp + CKMJPGPLECG_OEKKHAMEMBI_OFFSET))(this, a1);
		}

		::System::Void OGMDGJEJFBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_OGMDGJEJFBL_OFFSET))(this);
		}

		::System::Void ONNMCGLFBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_ONNMCGLFBAM_OFFSET))(this);
		}

		::System::Void PAJALCEFDPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_PAJALCEFDPI_OFFSET))(this);
		}

		::System::Void EEGPPOMENOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_EEGPPOMENOB_OFFSET))(this);
		}

		::System::Void PLNKCHMAGDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_PLNKCHMAGDD_OFFSET))(this);
		}

		::System::Void GEPMJEOJHLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_GEPMJEOJHLF_OFFSET))(this);
		}

		::System::Void EMIOPNNIBKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_EMIOPNNIBKO_OFFSET))(this);
		}

		::System::Void AHIHMHPCAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_AHIHMHPCAJG_OFFSET))(this);
		}

		::System::Void BOEDABADKMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_BOEDABADKMC_OFFSET))(this);
		}

		::System::Void AJMBPBIFABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_AJMBPBIFABI_OFFSET))(this);
		}

		::System::Void LAJKKPGONEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_LAJKKPGONEE_OFFSET))(this);
		}

		::System::Void HFMCEBDABHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_HFMCEBDABHP_OFFSET))(this);
		}

		::System::Void FICPGIFCFBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_FICPGIFCFBN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KGPBKBGOADL()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_KGPBKBGOADL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GJAGMJHMJHP()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_GJAGMJHMJHP_OFFSET))(this);
		}

		::System::Boolean IHNFIEGFJDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_IHNFIEGFJDD_OFFSET))(this);
		}

		::System::Void CGMFBMBHGNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CGMFBMBHGNH_OFFSET))(this);
		}

		::System::Void JMJODIFBBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_JMJODIFBBML_OFFSET))(this);
		}

		::System::Void HLEDPDMJPAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_HLEDPDMJPAH_OFFSET))(this);
		}

		::System::Boolean PJOALEKPOJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_PJOALEKPOJP_OFFSET))(this);
		}

		::System::Void FKDCOILOJPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_FKDCOILOJPH_OFFSET))(this);
		}

		::System::Void NBPIHIFNGFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_NBPIHIFNGFM_OFFSET))(this);
		}

		::System::Void JFNBFIODEJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKMJPGPLECG_JFNBFIODEJC_OFFSET))(this, a1);
		}

		::System::Void ONHPDPENOFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_ONHPDPENOFP_OFFSET))(this);
		}

		::System::Void MNHGKPJOHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_MNHGKPJOHNN_OFFSET))(this);
		}

		::System::Void KBBNNKFOKEB(::IBAAHKDOHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAAHKDOHDB*))((::PBYTE)hIl2Cpp + CKMJPGPLECG_KBBNNKFOKEB_OFFSET))(this, a1);
		}

		::System::Void FNDELLOLBCE(::AGBDHJMJFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBDHJMJFHD*))((::PBYTE)hIl2Cpp + CKMJPGPLECG_FNDELLOLBCE_OFFSET))(this, a1);
		}

		::System::Void BGDPGLIFPNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_BGDPGLIFPNF_OFFSET))(this);
		}

		::System::Void JIKGHBMBDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_JIKGHBMBDIH_OFFSET))(this);
		}

		::System::Void BPJOECLGJGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_BPJOECLGJGB_OFFSET))(this);
		}

		::System::Boolean DDFDGLGCBAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_DDFDGLGCBAI_OFFSET))(this);
		}

		::System::Void LHPCCPKKEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_LHPCCPKKEBI_OFFSET))(this);
		}

		::System::Void NEABFHOENBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_NEABFHOENBH_OFFSET))(this);
		}

		::System::Void NCNHNECHHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_NCNHNECHHAC_OFFSET))(this);
		}

		::System::Void IMHNMLHHGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_IMHNMLHHGPE_OFFSET))(this);
		}

		::RPG::Client::FiveDimPlayerEnterLeaveInfo* IKLIAJDONOP()
		{
			return ((::RPG::Client::FiveDimPlayerEnterLeaveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_IKLIAJDONOP_OFFSET))(this);
		}

		::System::Void AOFCPLCIKIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_AOFCPLCIKIK_OFFSET))(this);
		}

		::System::Void MECGBKECMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_MECGBKECMFF_OFFSET))(this);
		}

		::System::Void FJADAPHHGDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_FJADAPHHGDC_OFFSET))(this);
		}

		::System::Void CGDLHKOPDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CGDLHKOPDEN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EMDKPNDPDPE()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_EMDKPNDPDPE_OFFSET))(this);
		}

		::System::Boolean OMCFBBLBOFC(::RPG::GameCore::LevelLittleGameInfo* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*, ::UnityEngine::Vector3, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CKMJPGPLECG_OMCFBBLBOFC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CPKEILEPPCL(::BINEKJFCLMP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BINEKJFCLMP))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CPKEILEPPCL_OFFSET))(this, a1);
		}

		::RPG::Client::FiveDimGameInstance* NEOCFNKAFGN()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_NEOCFNKAFGN_OFFSET))(this);
		}

		::RPG::Client::FiveDimGameInstance* GCGLHDMHKMA()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_GCGLHDMHKMA_OFFSET))(this);
		}

		::RPG::Client::FiveDimModule* CMDGAHGHDLA()
		{
			return ((::RPG::Client::FiveDimModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_CMDGAHGHDLA_OFFSET))(this);
		}

		::System::Void KBDPEGKLIJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_KBDPEGKLIJN_OFFSET))(this);
		}

		::System::Void HFJBBKFNHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG_HFJBBKFNHAC_OFFSET))(this);
		}

	};
