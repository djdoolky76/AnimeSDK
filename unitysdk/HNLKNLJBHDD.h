#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillProgressType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ChangeSource.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/PlayerState.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersCoreGameState.h"
#include "unitysdk/RPG/Client/LittleGameShare/AuthorityType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationDormancy.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationNetMode.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/NOJGCGEFOAN.h"
#include "unitysdk/OEOFKECAJEB.h"
#include "unitysdk/OJMIDGODIKC.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class BJCIEOABGBE;
class CAHLPKGIABH;
class DOKPLDDNFDI;
class EPLACBCPLGK;
class FBAOECBDMIC;
class FCFAFLMNOGN;
class FOEBKDEDOHL;
class GAICBMDAOFB;
class GBJHOMFKNDE;
class GDIFFKOHFDE;
class JIONCIBJGOK;
class KJPOADGEGJH;
class KOEJPJACFDD;
class LCEANMDMFNF;
class LHHKOJNJODO;
class MCACNDOPNEB;
class MKBPLNIIHID;
class NLGPIBBCIFG;
class OFKKOGBKOFI;
class PHBGENKFABA;
class PKJCKJKKKCA;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNLKNLJBHDD_ABMDBKPJHAN_OFFSET UNITYSDK_OFFSET(0x1D7FB170)
#define HNLKNLJBHDD_ACFGBDEAPOE_OFFSET UNITYSDK_OFFSET(0x1D7FBED0)
#define HNLKNLJBHDD_AEJIEDINEHJ_OFFSET UNITYSDK_OFFSET(0x1D7FF790)
#define HNLKNLJBHDD_AHJNDIDMMAF_OFFSET UNITYSDK_OFFSET(0x1D7FA290)
#define HNLKNLJBHDD_AKPACNCIPAF_OFFSET UNITYSDK_OFFSET(0x1D7FA580)
#define HNLKNLJBHDD_AMDJLDPDGFB_OFFSET UNITYSDK_OFFSET(0x1D7FD240)
#define HNLKNLJBHDD_BCOFOODHBJB_OFFSET UNITYSDK_OFFSET(0x1D8015E0)
#define HNLKNLJBHDD_BGHPIAGBGHA_OFFSET UNITYSDK_OFFSET(0x1D7FE400)
#define HNLKNLJBHDD_BJGLLNPPOHI_OFFSET UNITYSDK_OFFSET(0x1D801CA0)
#define HNLKNLJBHDD_BNBNDJDIGGJ_OFFSET UNITYSDK_OFFSET(0x1D7FCB10)
#define HNLKNLJBHDD_BOHACJJEKEB_OFFSET UNITYSDK_OFFSET(0x1D7FDC90)
#define HNLKNLJBHDD_CAJFMBPLMPB_OFFSET UNITYSDK_OFFSET(0x1D7F9F90)
#define HNLKNLJBHDD_CFDIKLBINHK_OFFSET UNITYSDK_OFFSET(0x1D7FDB80)
#define HNLKNLJBHDD_CHCKLJECLAK_OFFSET UNITYSDK_OFFSET(0x1D7FE690)
#define HNLKNLJBHDD_CKIDEJBNGIP_OFFSET UNITYSDK_OFFSET(0x1D800B50)
#define HNLKNLJBHDD_CMMBPDDFBCE_OFFSET UNITYSDK_OFFSET(0x1D800FE0)
#define HNLKNLJBHDD_CNIEGDIPGEG_OFFSET UNITYSDK_OFFSET(0x1D7FE6F0)
#define HNLKNLJBHDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D801DC0)
#define HNLKNLJBHDD_DCNCICMOMEL_OFFSET UNITYSDK_OFFSET(0x1D7FE590)
#define HNLKNLJBHDD_DDBBEFAKEMD_OFFSET UNITYSDK_OFFSET(0x1D7FB4F0)
#define HNLKNLJBHDD_DEKMCEKEFKN_OFFSET UNITYSDK_OFFSET(0x1D8016F0)
#define HNLKNLJBHDD_DGENOJGGOBA_OFFSET UNITYSDK_OFFSET(0x1D7FDED0)
#define HNLKNLJBHDD_DHGMLGMKDKN_OFFSET UNITYSDK_OFFSET(0x1D8011A0)
#define HNLKNLJBHDD_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1D7FB060)
#define HNLKNLJBHDD_DNMFDGFENPO_OFFSET UNITYSDK_OFFSET(0x1D7FC670)
#define HNLKNLJBHDD_EANBOBBDDFD_OFFSET UNITYSDK_OFFSET(0x1D7FE110)
#define HNLKNLJBHDD_EBDHPAHLCAN_OFFSET UNITYSDK_OFFSET(0x1D7FA890)
#define HNLKNLJBHDD_EHFBBFKACLA_OFFSET UNITYSDK_OFFSET(0x1D7FA060)
#define HNLKNLJBHDD_EJCFAFNDJNL_OFFSET UNITYSDK_OFFSET(0x1D8013C0)
#define HNLKNLJBHDD_EJOHFJMKACI_OFFSET UNITYSDK_OFFSET(0x1D800E70)
#define HNLKNLJBHDD_EKGGCJJDCNH_OFFSET UNITYSDK_OFFSET(0x1D800F80)
#define HNLKNLJBHDD_ELNEHCEKMJB_OFFSET UNITYSDK_OFFSET(0x1D801D50)
#define HNLKNLJBHDD_EMCMAIMGMIM_OFFSET UNITYSDK_OFFSET(0x1D7FA530)
#define HNLKNLJBHDD_EPILPFHHAJJ_OFFSET UNITYSDK_OFFSET(0x1D801C40)
#define HNLKNLJBHDD_FANCEOPOBDD_OFFSET UNITYSDK_OFFSET(0x1D801A80)
#define HNLKNLJBHDD_FDDJOEBEHFG_OFFSET UNITYSDK_OFFSET(0x1D8010F0)
#define HNLKNLJBHDD_FECLAFENPPM_OFFSET UNITYSDK_OFFSET(0x1D800750)
#define HNLKNLJBHDD_FHFMJIFHBDO_OFFSET UNITYSDK_OFFSET(0x1D800C50)
#define HNLKNLJBHDD_FHNDPJMNEJM_OFFSET UNITYSDK_OFFSET(0x1D800D60)
#define HNLKNLJBHDD_FHOJCMFONMB_OFFSET UNITYSDK_OFFSET(0x1D7FBD70)
#define HNLKNLJBHDD_FIFHNFHDJMI_OFFSET UNITYSDK_OFFSET(0x1D7FCAB0)
#define HNLKNLJBHDD_FIHDJLFECPD_OFFSET UNITYSDK_OFFSET(0x1D8000A0)
#define HNLKNLJBHDD_FIOPDAJKGHG_OFFSET UNITYSDK_OFFSET(0x1D801090)
#define HNLKNLJBHDD_FMEFCCEHMJM_OFFSET UNITYSDK_OFFSET(0x1D8012B0)
#define HNLKNLJBHDD_FNHKIOKNBPD_OFFSET UNITYSDK_OFFSET(0x1D800DC0)
#define HNLKNLJBHDD_GCAOOMIAFGD_OFFSET UNITYSDK_OFFSET(0x1D7FA9F0)
#define HNLKNLJBHDD_GCNPEDHNFJK_OFFSET UNITYSDK_OFFSET(0x1D7FA8E0)
#define HNLKNLJBHDD_GEDFCGHOEEO_OFFSET UNITYSDK_OFFSET(0x1D800CB0)
#define HNLKNLJBHDD_GFGHEKBILBK_OFFSET UNITYSDK_OFFSET(0x1D7FB970)
#define HNLKNLJBHDD_GHNILKKACLF_OFFSET UNITYSDK_OFFSET(0x1D7FA790)
#define HNLKNLJBHDD_GJOBDLDFJHI_OFFSET UNITYSDK_OFFSET(0x1D7FA3E0)
#define HNLKNLJBHDD_GONMNDEHJFJ_OFFSET UNITYSDK_OFFSET(0x1D7FEE90)
#define HNLKNLJBHDD_HCICNENJIEP_OFFSET UNITYSDK_OFFSET(0x1D7FE270)
#define HNLKNLJBHDD_HCPLAGBBGPC_OFFSET UNITYSDK_OFFSET(0x1D800630)
#define HNLKNLJBHDD_HFPGOIJDJCJ_OFFSET UNITYSDK_OFFSET(0x1D7FB870)
#define HNLKNLJBHDD_HJINFLADNHP_OFFSET UNITYSDK_OFFSET(0x1D7FA690)
#define HNLKNLJBHDD_HLEFBIJJPFF_OFFSET UNITYSDK_OFFSET(0x1D801800)
#define HNLKNLJBHDD_HPPPGJJHIGC_OFFSET UNITYSDK_OFFSET(0x1D7FD740)
#define HNLKNLJBHDD_IALBODPMOOB_OFFSET UNITYSDK_OFFSET(0x1D7F9F30)
#define HNLKNLJBHDD_IBJLFAIHKCD_OFFSET UNITYSDK_OFFSET(0x1D8005E0)
#define HNLKNLJBHDD_IDCJNCIOAJK_OFFSET UNITYSDK_OFFSET(0x1D7FA180)
#define HNLKNLJBHDD_IECHFDIPOAK_OFFSET UNITYSDK_OFFSET(0x1D7FB8C0)
#define HNLKNLJBHDD_IFOABHGGCLC_OFFSET UNITYSDK_OFFSET(0x1D8014D0)
#define HNLKNLJBHDD_IGKBNKMIANK_OFFSET UNITYSDK_OFFSET(0x1D7FA130)
#define HNLKNLJBHDD_IIIEGHLCFNK_OFFSET UNITYSDK_OFFSET(0x1D7FC2D0)
#define HNLKNLJBHDD_IMICNEFJMJN_OFFSET UNITYSDK_OFFSET(0x1D7FE5E0)
#define HNLKNLJBHDD_IMJJFAMOADL_OFFSET UNITYSDK_OFFSET(0x1D7FC330)
#define HNLKNLJBHDD_JCFPHMMOENJ_OFFSET UNITYSDK_OFFSET(0x1D7FD350)
#define HNLKNLJBHDD_JCGACNHPGGB_OFFSET UNITYSDK_OFFSET(0x1D800ED0)
#define HNLKNLJBHDD_JCKPDKKLLCB_OFFSET UNITYSDK_OFFSET(0x1D801B30)
#define HNLKNLJBHDD_JEMNBLAMGHF_OFFSET UNITYSDK_OFFSET(0x1D7FDC30)
#define HNLKNLJBHDD_JHNFAPNFIBJ_OFFSET UNITYSDK_OFFSET(0x1D7FF730)
#define HNLKNLJBHDD_JLDJLIPGIBG_OFFSET UNITYSDK_OFFSET(0x1D800380)
#define HNLKNLJBHDD_JNIOOPBPGEG_OFFSET UNITYSDK_OFFSET(0x1D8004B0)
#define HNLKNLJBHDD_KBBGOIFGPCC_OFFSET UNITYSDK_OFFSET(0x1D7FDB30)
#define HNLKNLJBHDD_KBJFDCNDDPH_OFFSET UNITYSDK_OFFSET(0x1D7FCA00)
#define HNLKNLJBHDD_KFAJCPCHJBF_OFFSET UNITYSDK_OFFSET(0x1D7F9E80)
#define HNLKNLJBHDD_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1D7FB110)
#define HNLKNLJBHDD_KINGAJMBHOG_OFFSET UNITYSDK_OFFSET(0x1D7FFAA0)
#define HNLKNLJBHDD_KIOBDJOFMGN_OFFSET UNITYSDK_OFFSET(0x1D7FD1F0)
#define HNLKNLJBHDD_KKJCMOPPLCD_OFFSET UNITYSDK_OFFSET(0x1D7FFC40)
#define HNLKNLJBHDD_KKLOHLEPDMB_OFFSET UNITYSDK_OFFSET(0x1D7FF680)
#define HNLKNLJBHDD_KKMGFIOBJCL_OFFSET UNITYSDK_OFFSET(0x1D801970)
#define HNLKNLJBHDD_KNOPHAPEHFG_OFFSET UNITYSDK_OFFSET(0x1D7FB9D0)
#define HNLKNLJBHDD_KNPCOLMELFE_OFFSET UNITYSDK_OFFSET(0x1D7FF630)
#define HNLKNLJBHDD_KNPPKKKDOJC_OFFSET UNITYSDK_OFFSET(0x1D800270)
#define HNLKNLJBHDD_LBIPHLHNJAP_OFFSET UNITYSDK_OFFSET(0x1D7FE160)
#define HNLKNLJBHDD_LDJOMKHHIHE_OFFSET UNITYSDK_OFFSET(0x1D7FA630)
#define HNLKNLJBHDD_LDKKPDECFKE_OFFSET UNITYSDK_OFFSET(0x1D7FB010)
#define HNLKNLJBHDD_LEIGPNNCLEI_OFFSET UNITYSDK_OFFSET(0x1D800320)
#define HNLKNLJBHDD_LGFNBJMPLFP_OFFSET UNITYSDK_OFFSET(0x1D7FD2F0)
#define HNLKNLJBHDD_LGNEANALLJM_OFFSET UNITYSDK_OFFSET(0x1D7FFDA0)
#define HNLKNLJBHDD_LKANMLBKDHD_OFFSET UNITYSDK_OFFSET(0x1D801910)
#define HNLKNLJBHDD_LNDCGDEBODC_OFFSET UNITYSDK_OFFSET(0x1D7FC1D0)
#define HNLKNLJBHDD_LOGNJJGNKPN_OFFSET UNITYSDK_OFFSET(0x1D7FA230)
#define HNLKNLJBHDD_MAAJJOKJBJL_OFFSET UNITYSDK_OFFSET(0x1D7FBC50)
#define HNLKNLJBHDD_MFCLPHIHLPC_OFFSET UNITYSDK_OFFSET(0x1D801310)
#define HNLKNLJBHDD_MFKCDEOJKEC_OFFSET UNITYSDK_OFFSET(0x1D800220)
#define HNLKNLJBHDD_MIEGAODIPAI_OFFSET UNITYSDK_OFFSET(0x1D801750)
#define HNLKNLJBHDD_MIOOMIFNBAP_OFFSET UNITYSDK_OFFSET(0x1D800BA0)
#define HNLKNLJBHDD_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x1D801B90)
#define HNLKNLJBHDD_MNNMNAOCGFB_OFFSET UNITYSDK_OFFSET(0x1D801530)
#define HNLKNLJBHDD_NAFBDBCOCHH_OFFSET UNITYSDK_OFFSET(0x1D7FBE70)
#define HNLKNLJBHDD_NDOOPACAGOF_OFFSET UNITYSDK_OFFSET(0x1D801200)
#define HNLKNLJBHDD_NKMNEJLOGKE_OFFSET UNITYSDK_OFFSET(0x1D7FFC90)
#define HNLKNLJBHDD_NLOGGLPFHOG_OFFSET UNITYSDK_OFFSET(0x1D801640)
#define HNLKNLJBHDD_NNBKABGODLD_OFFSET UNITYSDK_OFFSET(0x1D7FC9B0)
#define HNLKNLJBHDD_NOFGDCEGHEN_OFFSET UNITYSDK_OFFSET(0x1D7FE210)
#define HNLKNLJBHDD_ODFAEGIKOCD_OFFSET UNITYSDK_OFFSET(0x1D7FFD40)
#define HNLKNLJBHDD_ODMNDEGNOMO_OFFSET UNITYSDK_OFFSET(0x1D801420)
#define HNLKNLJBHDD_OELPGPNMNMG_OFFSET UNITYSDK_OFFSET(0x1D8006E0)
#define HNLKNLJBHDD_OKEMFFEHNPE_OFFSET UNITYSDK_OFFSET(0x1D7FA990)
#define HNLKNLJBHDD_OKPMJOCEKBC_OFFSET UNITYSDK_OFFSET(0x1D7FBDC0)
#define HNLKNLJBHDD_OLFEBPGMFIK_OFFSET UNITYSDK_OFFSET(0x1D7FCE80)
#define HNLKNLJBHDD_ONCDCHAPEOH_OFFSET UNITYSDK_OFFSET(0x1D801860)
#define HNLKNLJBHDD_OOGMLACELEG_OFFSET UNITYSDK_OFFSET(0x1D801A20)
#define HNLKNLJBHDD_OOHNKDHNFGI_OFFSET UNITYSDK_OFFSET(0x1D7FC050)
#define HNLKNLJBHDD_PDOCBACOCML_OFFSET UNITYSDK_OFFSET(0x1D7FC220)
#define HNLKNLJBHDD_PGMDHIOEBHA_OFFSET UNITYSDK_OFFSET(0x1D800950)
#define HNLKNLJBHDD_PMEJOMNJIDE_OFFSET UNITYSDK_OFFSET(0x1D7FAD00)

inline static constexpr unsigned int HNLKNLJBHDD_TypeDefinitionIndex = 37949;

	class HNLKNLJBHDD : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CTOR_OFFSET))(this);
		}

		::EPLACBCPLGK* KFAJCPCHJBF()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KFAJCPCHJBF_OFFSET))(this);
		}

		::System::Boolean IALBODPMOOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IALBODPMOOB_OFFSET))(this);
		}

		::System::Void CAJFMBPLMPB(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CAJFMBPLMPB_OFFSET))(this, a1);
		}

		::System::Void EHFBBFKACLA(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EHFBBFKACLA_OFFSET))(this, a1);
		}

		::System::Void IGKBNKMIANK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IGKBNKMIANK_OFFSET))(this);
		}

		::BJCIEOABGBE* IDCJNCIOAJK()
		{
			return ((::BJCIEOABGBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IDCJNCIOAJK_OFFSET))(this);
		}

		::System::Boolean LOGNJJGNKPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LOGNJJGNKPN_OFFSET))(this);
		}

		::System::Void AHJNDIDMMAF(::System::Single a1, ::System::Single a2, ::RPG::MVector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_AHJNDIDMMAF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GJOBDLDFJHI(::System::Single a1, ::System::Single a2, ::RPG::MVector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GJOBDLDFJHI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EMCMAIMGMIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EMCMAIMGMIM_OFFSET))(this);
		}

		::NLGPIBBCIFG* AKPACNCIPAF()
		{
			return ((::NLGPIBBCIFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_AKPACNCIPAF_OFFSET))(this);
		}

		::System::Boolean LDJOMKHHIHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LDJOMKHHIHE_OFFSET))(this);
		}

		::System::Void HJINFLADNHP(::RPG::GameCore::PhysicsRigidBodyType a1, ::System::Boolean a2, ::CAHLPKGIABH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhysicsRigidBodyType, ::System::Boolean, ::CAHLPKGIABH*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HJINFLADNHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GHNILKKACLF(::RPG::GameCore::PhysicsRigidBodyType a1, ::System::Boolean a2, ::CAHLPKGIABH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhysicsRigidBodyType, ::System::Boolean, ::CAHLPKGIABH*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GHNILKKACLF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBDHPAHLCAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EBDHPAHLCAN_OFFSET))(this);
		}

		::LHHKOJNJODO* GCNPEDHNFJK()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GCNPEDHNFJK_OFFSET))(this);
		}

		::System::Boolean OKEMFFEHNPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OKEMFFEHNPE_OFFSET))(this);
		}

		::System::Void GCAOOMIAFGD(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GCAOOMIAFGD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void PMEJOMNJIDE(::System::Int32 a1, ::RPG::Client::LittleGameShare::AuthorityType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::RPG::Client::LittleGameShare::ReplicationNetMode a6, ::RPG::Client::LittleGameShare::ReplicationDormancy a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::HashSet_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGameShare::AuthorityType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::Client::LittleGameShare::ReplicationNetMode, ::RPG::Client::LittleGameShare::ReplicationDormancy, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_PMEJOMNJIDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LDKKPDECFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LDKKPDECFKE_OFFSET))(this);
		}

		::GBJHOMFKNDE* DICDJJOJKGF()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DICDJJOJKGF_OFFSET))(this);
		}

		::System::Boolean KFKBPJDGJDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KFKBPJDGJDK_OFFSET))(this);
		}

		::System::Void ABMDBKPJHAN(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ABMDBKPJHAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DDBBEFAKEMD(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DDBBEFAKEMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HFPGOIJDJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HFPGOIJDJCJ_OFFSET))(this);
		}

		::FCFAFLMNOGN* IECHFDIPOAK()
		{
			return ((::FCFAFLMNOGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IECHFDIPOAK_OFFSET))(this);
		}

		::System::Boolean GFGHEKBILBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GFGHEKBILBK_OFFSET))(this);
		}

		::System::Void KNOPHAPEHFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KNOPHAPEHFG_OFFSET))(this, a1);
		}

		::System::Void MAAJJOKJBJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MAAJJOKJBJL_OFFSET))(this, a1);
		}

		::System::Void FHOJCMFONMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FHOJCMFONMB_OFFSET))(this);
		}

		::MKBPLNIIHID* OKPMJOCEKBC()
		{
			return ((::MKBPLNIIHID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OKPMJOCEKBC_OFFSET))(this);
		}

		::System::Boolean NAFBDBCOCHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NAFBDBCOCHH_OFFSET))(this);
		}

		::System::Void ACFGBDEAPOE(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ACFGBDEAPOE_OFFSET))(this, a1, a2);
		}

		::System::Void OOHNKDHNFGI(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OOHNKDHNFGI_OFFSET))(this, a1, a2);
		}

		::System::Void LNDCGDEBODC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LNDCGDEBODC_OFFSET))(this);
		}

		::PKJCKJKKKCA* PDOCBACOCML()
		{
			return ((::PKJCKJKKKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_PDOCBACOCML_OFFSET))(this);
		}

		::System::Boolean IIIEGHLCFNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IIIEGHLCFNK_OFFSET))(this);
		}

		::System::Void IMJJFAMOADL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IMJJFAMOADL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DNMFDGFENPO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DNMFDGFENPO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void NNBKABGODLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NNBKABGODLD_OFFSET))(this);
		}

		::FBAOECBDMIC* KBJFDCNDDPH()
		{
			return ((::FBAOECBDMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KBJFDCNDDPH_OFFSET))(this);
		}

		::System::Boolean FIFHNFHDJMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FIFHNFHDJMI_OFFSET))(this);
		}

		::System::Void BNBNDJDIGGJ(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a3, ::System::UInt64 a4, ::System::UInt64 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType, ::System::UInt64, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_BNBNDJDIGGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OLFEBPGMFIK(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a3, ::System::UInt64 a4, ::System::UInt64 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType, ::System::UInt64, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OLFEBPGMFIK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void KIOBDJOFMGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KIOBDJOFMGN_OFFSET))(this);
		}

		::GAICBMDAOFB* AMDJLDPDGFB()
		{
			return ((::GAICBMDAOFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_AMDJLDPDGFB_OFFSET))(this);
		}

		::System::Boolean LGFNBJMPLFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LGFNBJMPLFP_OFFSET))(this);
		}

		::System::Void JCFPHMMOENJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a5, ::System::Boolean a6, ::System::Single a7, ::KOEJPJACFDD* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::System::Boolean, ::System::Single, ::KOEJPJACFDD*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JCFPHMMOENJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HPPPGJJHIGC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a5, ::System::Boolean a6, ::System::Single a7, ::KOEJPJACFDD* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::System::Boolean, ::System::Single, ::KOEJPJACFDD*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HPPPGJJHIGC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void KBBGOIFGPCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KBBGOIFGPCC_OFFSET))(this);
		}

		::LCEANMDMFNF* CFDIKLBINHK()
		{
			return ((::LCEANMDMFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CFDIKLBINHK_OFFSET))(this);
		}

		::System::Boolean JEMNBLAMGHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JEMNBLAMGHF_OFFSET))(this);
		}

		::System::Void BOHACJJEKEB(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState a2, ::RPG::GameCore::TeamTowersLevelGameMode a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState, ::RPG::GameCore::TeamTowersLevelGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_BOHACJJEKEB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DGENOJGGOBA(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState a2, ::RPG::GameCore::TeamTowersLevelGameMode a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState, ::RPG::GameCore::TeamTowersLevelGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DGENOJGGOBA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EANBOBBDDFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EANBOBBDDFD_OFFSET))(this);
		}

		::KJPOADGEGJH* LBIPHLHNJAP()
		{
			return ((::KJPOADGEGJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LBIPHLHNJAP_OFFSET))(this);
		}

		::System::Boolean NOFGDCEGHEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NOFGDCEGHEN_OFFSET))(this);
		}

		::System::Void HCICNENJIEP(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::PHBGENKFABA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::PHBGENKFABA*>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HCICNENJIEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGHPIAGBGHA(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::PHBGENKFABA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::PHBGENKFABA*>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_BGHPIAGBGHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DCNCICMOMEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DCNCICMOMEL_OFFSET))(this);
		}

		::GDIFFKOHFDE* IMICNEFJMJN()
		{
			return ((::GDIFFKOHFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IMICNEFJMJN_OFFSET))(this);
		}

		::System::Boolean CHCKLJECLAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CHCKLJECLAK_OFFSET))(this);
		}

		::System::Void CNIEGDIPGEG(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5, ::System::String* a6, ::System::UInt32 a7, ::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState a8, ::System::UInt32 a9, ::System::UInt64 a10, ::System::Collections::Generic::List_1<::NOJGCGEFOAN>* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Collections::Generic::List_1<::System::UInt32>* a14, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a15)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState, ::System::UInt32, ::System::UInt64, ::System::Collections::Generic::List_1<::NOJGCGEFOAN>*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CNIEGDIPGEG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Void GONMNDEHJFJ(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5, ::System::String* a6, ::System::UInt32 a7, ::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState a8, ::System::UInt32 a9, ::System::UInt64 a10, ::System::Collections::Generic::List_1<::NOJGCGEFOAN>* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Collections::Generic::List_1<::System::UInt32>* a14, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a15)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState, ::System::UInt32, ::System::UInt64, ::System::Collections::Generic::List_1<::NOJGCGEFOAN>*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GONMNDEHJFJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Void KNPCOLMELFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KNPCOLMELFE_OFFSET))(this);
		}

		::JIONCIBJGOK* KKLOHLEPDMB()
		{
			return ((::JIONCIBJGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KKLOHLEPDMB_OFFSET))(this);
		}

		::System::Boolean JHNFAPNFIBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JHNFAPNFIBJ_OFFSET))(this);
		}

		::System::Void AEJIEDINEHJ(::System::Collections::Generic::List_1<::OEOFKECAJEB>* a1, ::System::Collections::Generic::List_1<::OEOFKECAJEB>* a2, ::System::Collections::Generic::List_1<::OJMIDGODIKC>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*, ::System::Collections::Generic::List_1<::OJMIDGODIKC>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_AEJIEDINEHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KINGAJMBHOG(::System::Collections::Generic::List_1<::OEOFKECAJEB>* a1, ::System::Collections::Generic::List_1<::OEOFKECAJEB>* a2, ::System::Collections::Generic::List_1<::OJMIDGODIKC>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*, ::System::Collections::Generic::List_1<::OJMIDGODIKC>*))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KINGAJMBHOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKJCMOPPLCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KKJCMOPPLCD_OFFSET))(this);
		}

		::MCACNDOPNEB* NKMNEJLOGKE()
		{
			return ((::MCACNDOPNEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NKMNEJLOGKE_OFFSET))(this);
		}

		::System::Boolean ODFAEGIKOCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ODFAEGIKOCD_OFFSET))(this);
		}

		::System::Void LGNEANALLJM(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LGNEANALLJM_OFFSET))(this, a1, a2);
		}

		::System::Void FIHDJLFECPD(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FIHDJLFECPD_OFFSET))(this, a1, a2);
		}

		::System::Void MFKCDEOJKEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MFKCDEOJKEC_OFFSET))(this);
		}

		::FOEBKDEDOHL* KNPPKKKDOJC()
		{
			return ((::FOEBKDEDOHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KNPPKKKDOJC_OFFSET))(this);
		}

		::System::Boolean LEIGPNNCLEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LEIGPNNCLEI_OFFSET))(this);
		}

		::System::Void JLDJLIPGIBG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JLDJLIPGIBG_OFFSET))(this, a1);
		}

		::System::Void JNIOOPBPGEG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JNIOOPBPGEG_OFFSET))(this, a1);
		}

		::System::Void IBJLFAIHKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IBJLFAIHKCD_OFFSET))(this);
		}

		::DOKPLDDNFDI* HCPLAGBBGPC()
		{
			return ((::DOKPLDDNFDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HCPLAGBBGPC_OFFSET))(this);
		}

		::System::Boolean OELPGPNMNMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OELPGPNMNMG_OFFSET))(this);
		}

		::System::Void FECLAFENPPM(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FECLAFENPPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGMDHIOEBHA(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_PGMDHIOEBHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKIDEJBNGIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CKIDEJBNGIP_OFFSET))(this);
		}

		::FCFAFLMNOGN* MIOOMIFNBAP()
		{
			return ((::FCFAFLMNOGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MIOOMIFNBAP_OFFSET))(this);
		}

		::System::Boolean FHFMJIFHBDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FHFMJIFHBDO_OFFSET))(this);
		}

		::MKBPLNIIHID* GEDFCGHOEEO()
		{
			return ((::MKBPLNIIHID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_GEDFCGHOEEO_OFFSET))(this);
		}

		::System::Boolean FHNDPJMNEJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FHNDPJMNEJM_OFFSET))(this);
		}

		::PKJCKJKKKCA* FNHKIOKNBPD()
		{
			return ((::PKJCKJKKKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FNHKIOKNBPD_OFFSET))(this);
		}

		::System::Boolean EJOHFJMKACI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EJOHFJMKACI_OFFSET))(this);
		}

		::FBAOECBDMIC* JCGACNHPGGB()
		{
			return ((::FBAOECBDMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JCGACNHPGGB_OFFSET))(this);
		}

		::System::Boolean EKGGCJJDCNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EKGGCJJDCNH_OFFSET))(this);
		}

		::GAICBMDAOFB* CMMBPDDFBCE()
		{
			return ((::GAICBMDAOFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_CMMBPDDFBCE_OFFSET))(this);
		}

		::System::Boolean FIOPDAJKGHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FIOPDAJKGHG_OFFSET))(this);
		}

		::LCEANMDMFNF* FDDJOEBEHFG()
		{
			return ((::LCEANMDMFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FDDJOEBEHFG_OFFSET))(this);
		}

		::System::Boolean DHGMLGMKDKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DHGMLGMKDKN_OFFSET))(this);
		}

		::KJPOADGEGJH* NDOOPACAGOF()
		{
			return ((::KJPOADGEGJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NDOOPACAGOF_OFFSET))(this);
		}

		::System::Boolean FMEFCCEHMJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FMEFCCEHMJM_OFFSET))(this);
		}

		::EPLACBCPLGK* MFCLPHIHLPC()
		{
			return ((::EPLACBCPLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MFCLPHIHLPC_OFFSET))(this);
		}

		::System::Boolean EJCFAFNDJNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EJCFAFNDJNL_OFFSET))(this);
		}

		::BJCIEOABGBE* ODMNDEGNOMO()
		{
			return ((::BJCIEOABGBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ODMNDEGNOMO_OFFSET))(this);
		}

		::System::Boolean IFOABHGGCLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_IFOABHGGCLC_OFFSET))(this);
		}

		::NLGPIBBCIFG* MNNMNAOCGFB()
		{
			return ((::NLGPIBBCIFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MNNMNAOCGFB_OFFSET))(this);
		}

		::System::Boolean BCOFOODHBJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_BCOFOODHBJB_OFFSET))(this);
		}

		::GDIFFKOHFDE* NLOGGLPFHOG()
		{
			return ((::GDIFFKOHFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_NLOGGLPFHOG_OFFSET))(this);
		}

		::System::Boolean DEKMCEKEFKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_DEKMCEKEFKN_OFFSET))(this);
		}

		::JIONCIBJGOK* MIEGAODIPAI()
		{
			return ((::JIONCIBJGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MIEGAODIPAI_OFFSET))(this);
		}

		::System::Boolean HLEFBIJJPFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_HLEFBIJJPFF_OFFSET))(this);
		}

		::MCACNDOPNEB* ONCDCHAPEOH()
		{
			return ((::MCACNDOPNEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ONCDCHAPEOH_OFFSET))(this);
		}

		::System::Boolean LKANMLBKDHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_LKANMLBKDHD_OFFSET))(this);
		}

		::FOEBKDEDOHL* KKMGFIOBJCL()
		{
			return ((::FOEBKDEDOHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_KKMGFIOBJCL_OFFSET))(this);
		}

		::System::Boolean OOGMLACELEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_OOGMLACELEG_OFFSET))(this);
		}

		::LHHKOJNJODO* FANCEOPOBDD()
		{
			return ((::LHHKOJNJODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_FANCEOPOBDD_OFFSET))(this);
		}

		::System::Boolean JCKPDKKLLCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_JCKPDKKLLCB_OFFSET))(this);
		}

		::GBJHOMFKNDE* MJHIFABJDHJ()
		{
			return ((::GBJHOMFKNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_MJHIFABJDHJ_OFFSET))(this);
		}

		::System::Boolean EPILPFHHAJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_EPILPFHHAJJ_OFFSET))(this);
		}

		::DOKPLDDNFDI* BJGLLNPPOHI()
		{
			return ((::DOKPLDDNFDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_BJGLLNPPOHI_OFFSET))(this);
		}

		::System::Boolean ELNEHCEKMJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLKNLJBHDD_ELNEHCEKMJB_OFFSET))(this);
		}

	};
