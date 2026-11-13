#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANNIAPOEFGG.h"
#include "unitysdk/GKCNCLIOFDA_PetPartyRunExitPolicy.h"
#include "unitysdk/OOIFBABMIGP.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCategory.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GKCNCLIOFDA_DNAMIBFFFNA;
class GKCNCLIOFDA_EPNILOJFGBJ;
class GKCNCLIOFDA_FGAIJIBMILD;
class GKCNCLIOFDA_FNKFIBKMGKG;
class GKCNCLIOFDA_GBAFFFJMOHK;
class GKCNCLIOFDA_GMLOCPCHHNI;
class GKCNCLIOFDA_JFNHCEFCJKI;
class GKCNCLIOFDA_LODPIIACKLB;
class GKCNCLIOFDA_MJBLPCGHLOD;
class GKCNCLIOFDA_OHCFDJBBGOK;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKCNCLIOFDA_AFELMGGNOJA_OFFSET UNITYSDK_OFFSET(0x1A8CA220)
#define GKCNCLIOFDA_AFJNKKMKCNA_OFFSET UNITYSDK_OFFSET(0x1A8C2670)
#define GKCNCLIOFDA_AHBGEDCJALO_OFFSET UNITYSDK_OFFSET(0x1A8C03B0)
#define GKCNCLIOFDA_AKFHNPAFLPO_OFFSET UNITYSDK_OFFSET(0x1A8C5970)
#define GKCNCLIOFDA_BDJKNBGFLBL_OFFSET UNITYSDK_OFFSET(0x1A8C1F30)
#define GKCNCLIOFDA_BFBAOHHBFLM_1_OFFSET UNITYSDK_OFFSET(0x1A8C73F0)
#define GKCNCLIOFDA_BFBAOHHBFLM_OFFSET UNITYSDK_OFFSET(0x1A8C6580)
#define GKCNCLIOFDA_BJPBAMGEFHF_OFFSET UNITYSDK_OFFSET(0x1A8BFE50)
#define GKCNCLIOFDA_BKPEOKPGMPF_OFFSET UNITYSDK_OFFSET(0x1A8CB340)
#define GKCNCLIOFDA_BMMFHKHOIGE_OFFSET UNITYSDK_OFFSET(0x1A8C1EB0)
#define GKCNCLIOFDA_BPOPBNFDMLP_OFFSET UNITYSDK_OFFSET(0x1A8C00C0)
#define GKCNCLIOFDA_CDBEGOLFOLH_OFFSET UNITYSDK_OFFSET(0x1A8C5B00)
#define GKCNCLIOFDA_CGICONFFENO_1_OFFSET UNITYSDK_OFFSET(0x1A8CA130)
#define GKCNCLIOFDA_CGICONFFENO_OFFSET UNITYSDK_OFFSET(0x1A8C9DE0)
#define GKCNCLIOFDA_CHAEJAFBALN_OFFSET UNITYSDK_OFFSET(0x1A8C0BC0)
#define GKCNCLIOFDA_CHIIKMMPDBG_OFFSET UNITYSDK_OFFSET(0x1A8C8C40)
#define GKCNCLIOFDA_CKCOHHBKHEP_OFFSET UNITYSDK_OFFSET(0x1A8C7110)
#define GKCNCLIOFDA_CMJFOGCPAHO_OFFSET UNITYSDK_OFFSET(0x1A8CB410)
#define GKCNCLIOFDA_CNOHOLEDBKM_OFFSET UNITYSDK_OFFSET(0x1A8C40B0)
#define GKCNCLIOFDA_CPAPKFILBJI_OFFSET UNITYSDK_OFFSET(0x1A8C0D90)
#define GKCNCLIOFDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BF4D0)
#define GKCNCLIOFDA_DCKDHMMEHAC_OFFSET UNITYSDK_OFFSET(0x1A8C6E20)
#define GKCNCLIOFDA_DEKCBLJCKND_OFFSET UNITYSDK_OFFSET(0x1A8C11A0)
#define GKCNCLIOFDA_DFPBPACLBMF_OFFSET UNITYSDK_OFFSET(0x1A8C69D0)
#define GKCNCLIOFDA_DIIFPCPIJEP_OFFSET UNITYSDK_OFFSET(0x1A8C15C0)
#define GKCNCLIOFDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8C3570)
#define GKCNCLIOFDA_EBENILACGMB_OFFSET UNITYSDK_OFFSET(0x1A8C0790)
#define GKCNCLIOFDA_ECAHPKMOLEI_OFFSET UNITYSDK_OFFSET(0x1A8CB2D0)
#define GKCNCLIOFDA_FBMELDJHJDE_OFFSET UNITYSDK_OFFSET(0x1A8BFAF0)
#define GKCNCLIOFDA_FFDGEDPCAHP_OFFSET UNITYSDK_OFFSET(0x1A8BFF00)
#define GKCNCLIOFDA_FNDPIAMAMFK_OFFSET UNITYSDK_OFFSET(0x1A8C0A60)
#define GKCNCLIOFDA_GAIHAPMKBKH_OFFSET UNITYSDK_OFFSET(0x1A8BFFB0)
#define GKCNCLIOFDA_GGBIGBIINDK_OFFSET UNITYSDK_OFFSET(0x1A8C1460)
#define GKCNCLIOFDA_GHKLOIGADEK_OFFSET UNITYSDK_OFFSET(0x1A8BF940)
#define GKCNCLIOFDA_GJHJEDJILII_OFFSET UNITYSDK_OFFSET(0x1A8CB100)
#define GKCNCLIOFDA_GOHFOLKBAHB_OFFSET UNITYSDK_OFFSET(0x1A8C4D70)
#define GKCNCLIOFDA_HBEABJEBLIG_OFFSET UNITYSDK_OFFSET(0x1A8C30D0)
#define GKCNCLIOFDA_HJECILFBPKI_OFFSET UNITYSDK_OFFSET(0x1A8C5270)
#define GKCNCLIOFDA_HPOKDOENNJN_OFFSET UNITYSDK_OFFSET(0x1A8C0120)
#define GKCNCLIOFDA_IBJFKBEJBCK_OFFSET UNITYSDK_OFFSET(0x1A8CB1D0)
#define GKCNCLIOFDA_IDGMPACEJHO_OFFSET UNITYSDK_OFFSET(0x1A8C0F10)
#define GKCNCLIOFDA_IFJFFEIBDOO_OFFSET UNITYSDK_OFFSET(0x1A8C7BC0)
#define GKCNCLIOFDA_IOBMKNJHMBJ_OFFSET UNITYSDK_OFFSET(0x1A8C28B0)
#define GKCNCLIOFDA_JBOFIIIHBMF_OFFSET UNITYSDK_OFFSET(0x1A8C1140)
#define GKCNCLIOFDA_JEHMGJGPDJC_OFFSET UNITYSDK_OFFSET(0x1A8C1680)
#define GKCNCLIOFDA_JFJJAJEKEJP_OFFSET UNITYSDK_OFFSET(0x1A8CB6D0)
#define GKCNCLIOFDA_JGMIJGNHEGK_OFFSET UNITYSDK_OFFSET(0x1A8C8700)
#define GKCNCLIOFDA_JKMKIJEBDNN_OFFSET UNITYSDK_OFFSET(0x1A8C23A0)
#define GKCNCLIOFDA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A8C2AF0)
#define GKCNCLIOFDA_JMLPABKOLJA_OFFSET UNITYSDK_OFFSET(0x1A8CAC90)
#define GKCNCLIOFDA_JPMGIIOIKMD_OFFSET UNITYSDK_OFFSET(0x1A8C5450)
#define GKCNCLIOFDA_JPNCGJDLDEE_OFFSET UNITYSDK_OFFSET(0x1A8C2080)
#define GKCNCLIOFDA_KCIKBMBMDKF_OFFSET UNITYSDK_OFFSET(0x1A8CB5A0)
#define GKCNCLIOFDA_KDGBMLINFLK_OFFSET UNITYSDK_OFFSET(0x1A8C27A0)
#define GKCNCLIOFDA_KFNALBNJAPH_OFFSET UNITYSDK_OFFSET(0x1A8CA090)
#define GKCNCLIOFDA_KILKFGPBPEC_OFFSET UNITYSDK_OFFSET(0x1A8C7AC0)
#define GKCNCLIOFDA_KJHJNMJJDJK_OFFSET UNITYSDK_OFFSET(0x1A8C3800)
#define GKCNCLIOFDA_KOGDNLPKCDD_1_OFFSET UNITYSDK_OFFSET(0x1A8C10E0)
#define GKCNCLIOFDA_KOGDNLPKCDD_OFFSET UNITYSDK_OFFSET(0x1A8C0EC0)
#define GKCNCLIOFDA_KOJDNFEEACN_OFFSET UNITYSDK_OFFSET(0x1A8C8190)
#define GKCNCLIOFDA_LICIHNFNHBD_OFFSET UNITYSDK_OFFSET(0x1A8CA670)
#define GKCNCLIOFDA_LJHGBDEDBHL_OFFSET UNITYSDK_OFFSET(0x1A8C79C0)
#define GKCNCLIOFDA_LNLLJEKFIDE_OFFSET UNITYSDK_OFFSET(0x1A8C0980)
#define GKCNCLIOFDA_MAKLIEGAKIM_OFFSET UNITYSDK_OFFSET(0x1A8CB4E0)
#define GKCNCLIOFDA_MBOKFAAOIHJ_OFFSET UNITYSDK_OFFSET(0x1A8BFB60)
#define GKCNCLIOFDA_MCGBOGBIAEK_OFFSET UNITYSDK_OFFSET(0x1A8BFD90)
#define GKCNCLIOFDA_MFDKDEMOJIB_OFFSET UNITYSDK_OFFSET(0x1A8CAE30)
#define GKCNCLIOFDA_MGEOHOHANMF_OFFSET UNITYSDK_OFFSET(0x1A8C8140)
#define GKCNCLIOFDA_MLBEBLAGGHE_OFFSET UNITYSDK_OFFSET(0x1A8CB250)
#define GKCNCLIOFDA_MMNHMCJCOOL_OFFSET UNITYSDK_OFFSET(0x1A8CAD40)
#define GKCNCLIOFDA_NHDLNEJOFGP_OFFSET UNITYSDK_OFFSET(0x1A8C0A10)
#define GKCNCLIOFDA_NHFMDINDPHL_OFFSET UNITYSDK_OFFSET(0x1A8BFF50)
#define GKCNCLIOFDA_NHKGALNHNAD_OFFSET UNITYSDK_OFFSET(0x1A8BFEB0)
#define GKCNCLIOFDA_NJPOKNGEONB_OFFSET UNITYSDK_OFFSET(0x1A8C94A0)
#define GKCNCLIOFDA_NLJOPNLMFMK_OFFSET UNITYSDK_OFFSET(0x1A8C6000)
#define GKCNCLIOFDA_NNCDLNCLANL_OFFSET UNITYSDK_OFFSET(0x1A8C1300)
#define GKCNCLIOFDA_NOFKBAINBEA_OFFSET UNITYSDK_OFFSET(0x1A8C32F0)
#define GKCNCLIOFDA_NPGCKOFPCFC_1_OFFSET UNITYSDK_OFFSET(0x1A8C7FC0)
#define GKCNCLIOFDA_NPGCKOFPCFC_OFFSET UNITYSDK_OFFSET(0x1A8C6F90)
#define GKCNCLIOFDA_OCKMAOBOAPG_OFFSET UNITYSDK_OFFSET(0x1A8C7E10)
#define GKCNCLIOFDA_OHDIHEIAPMG_OFFSET UNITYSDK_OFFSET(0x1A8C2530)
#define GKCNCLIOFDA_OJAGHJAKJBO_OFFSET UNITYSDK_OFFSET(0x1A8C8590)
#define GKCNCLIOFDA_PELDOMALIMI_OFFSET UNITYSDK_OFFSET(0x1A8BFD80)
#define GKCNCLIOFDA_PELOLMEICPO_OFFSET UNITYSDK_OFFSET(0x1A8CB840)
#define GKCNCLIOFDA_PEOOBNCAEEK_OFFSET UNITYSDK_OFFSET(0x1A8C0060)
#define GKCNCLIOFDA_PGKIMJEJNIL_OFFSET UNITYSDK_OFFSET(0x1A8C0000)
#define GKCNCLIOFDA_PHEFNPACFJP_OFFSET UNITYSDK_OFFSET(0x1A8BFDF0)
#define GKCNCLIOFDA_PHMOICGEHAL_OFFSET UNITYSDK_OFFSET(0x1A8C0230)
#define GKCNCLIOFDA_PIKLLOCJIFB_OFFSET UNITYSDK_OFFSET(0x1A8C2F90)

inline static constexpr unsigned int GKCNCLIOFDA_TypeDefinitionIndex = 54684;

	class GKCNCLIOFDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::StringHash>*>* GFJGCDAIMMH; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* HKBIBDNMPIF; // 0x18
		::RPG::PoolList_1<::System::Object*>* ELGEKHDKBAN; // 0x20
		::ANNIAPOEFGG CGEMOBKDBKN; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EDHJBIKBKPJ; // 0x40
		::Il2CppArray<::System::Int32>* BAAABHJEEMM; // 0x48
		::GKCNCLIOFDA_JFNHCEFCJKI* DLPBOBBCBIJ; // 0x50
		::RPG::PoolList_1<::System::Object*>* CFKNKOMEMKH; // 0x58
		::RPG::PoolList_1<::RPG::GameCore::PetPartyInteractionDefinition*>* HBGMFHBOLBM; // 0x60
		::GKCNCLIOFDA_LODPIIACKLB* CGPBICJBHDP; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* DIOPDHFCLAL; // 0x70
		::RPG::PoolList_1<::RPG::GameCore::PetPartyInteractionDefinition*>* HCCGPMIMNMN; // 0x78
		::System::String* KBNHDEHOHCK; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::OOIFBABMIGP>* EEMLILALOJM; // 0x88
		::RPG::PoolList_1<::System::Object*>* APJOEJOPKJB; // 0x90
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCategoryConfig*>* ACJAEHCFPGO; // 0x98
		::RPG::PoolList_1<::System::Object*>* MMAADJNIBHG; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JNOGHFKGFNB; // 0xA8
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCategoryConfig*>* BBBCOMMONEI; // 0xB0
		::System::Single ANBMFPJODJB; // 0xB8
		::System::UInt32 FGJOJPCCFEE; // 0xBC
		::System::Single KMOBEPHAHKJ; // 0xC0
		::System::UInt32 EODODJEBPGK; // 0xC4
		::System::Boolean BAMPFECMCNO; // 0xC8
		::System::Boolean BFCMJMLIABK; // 0xC9
		::System::Boolean JBDFJNAIHAP; // 0xCA
		::System::Boolean CPGFIOPDADK; // 0xCB
		::System::UInt32 AMCMAFLCOEC; // 0xCC
		::System::UInt32 OHGEEIJPONF; // 0xD0
		// static const ::System::String* FOMHLLCANPB; // 0x0
		// static const ::System::String* NFKNBNDPOAF; // 0x0
		// static const ::System::String* LHEDBIMAKPF; // 0x0
		// static const ::System::String* FPMEGJBGJMD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CTOR_OFFSET))(this);
		}

		::System::UInt32 PELDOMALIMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PELDOMALIMI_OFFSET))(this);
		}

		::System::String* MCGBOGBIAEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MCGBOGBIAEK_OFFSET))(this);
		}

		::System::Int32 PHEFNPACFJP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PHEFNPACFJP_OFFSET))(this);
		}

		::System::Boolean BJPBAMGEFHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BJPBAMGEFHF_OFFSET))(this);
		}

		::System::Int32 NHKGALNHNAD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NHKGALNHNAD_OFFSET))(this);
		}

		::System::Boolean FFDGEDPCAHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FFDGEDPCAHP_OFFSET))(this);
		}

		::System::String* NHFMDINDPHL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NHFMDINDPHL_OFFSET))(this);
		}

		::System::String* GAIHAPMKBKH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GAIHAPMKBKH_OFFSET))(this);
		}

		::System::UInt32 PGKIMJEJNIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PGKIMJEJNIL_OFFSET))(this);
		}

		::System::Int32 PEOOBNCAEEK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PEOOBNCAEEK_OFFSET))(this);
		}

		::System::Boolean BPOPBNFDMLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BPOPBNFDMLP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HPOKDOENNJN(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_HPOKDOENNJN_OFFSET))(this, a1);
		}

		::System::Boolean PHMOICGEHAL(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PHMOICGEHAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean AHBGEDCJALO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_AHBGEDCJALO_OFFSET))(this);
		}

		::System::Boolean LNLLJEKFIDE(::ANNIAPOEFGG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANNIAPOEFGG))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LNLLJEKFIDE_OFFSET))(this, a1);
		}

		::System::Single NHDLNEJOFGP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NHDLNEJOFGP_OFFSET))(this);
		}

		::System::Boolean FNDPIAMAMFK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FNDPIAMAMFK_OFFSET))(this, a1);
		}

		::System::Void CHAEJAFBALN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CHAEJAFBALN_OFFSET))(this, a1);
		}

		::System::Void KOGDNLPKCDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KOGDNLPKCDD_OFFSET))(this);
		}

		::System::Void KOGDNLPKCDD_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KOGDNLPKCDD_1_OFFSET))(this, a1);
		}

		::System::Void IDGMPACEJHO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_IDGMPACEJHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DEKCBLJCKND(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DEKCBLJCKND_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNCDLNCLANL(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NNCDLNCLANL_OFFSET))(this, a1, a2);
		}

		::System::Boolean GGBIGBIINDK(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GGBIGBIINDK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DIIFPCPIJEP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DIIFPCPIJEP_OFFSET))(this, a1);
		}

		::System::Boolean JEHMGJGPDJC(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Int32 a3, ::System::Action* a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Int32, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JEHMGJGPDJC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BDJKNBGFLBL(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BDJKNBGFLBL_OFFSET))(this, a1, a2);
		}

		::System::Boolean JPNCGJDLDEE(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JPNCGJDLDEE_OFFSET))(this, a1, a2);
		}

		::System::Void AFJNKKMKCNA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_AFJNKKMKCNA_OFFSET))(this, a1);
		}

		::System::Void KDGBMLINFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KDGBMLINFLK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DISPOSE_OFFSET))(this);
		}

		::System::Void PIKLLOCJIFB(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PIKLLOCJIFB_OFFSET))(this, a1, a2);
		}

		::System::Void NOFKBAINBEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NOFKBAINBEA_OFFSET))(this);
		}

		::System::Void EBENILACGMB(::System::UInt32 a1, ::System::Boolean a2, ::GKCNCLIOFDA_PetPartyRunExitPolicy a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::GKCNCLIOFDA_PetPartyRunExitPolicy))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_EBENILACGMB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBOFIIIHBMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JBOFIIIHBMF_OFFSET))(this);
		}

		::System::UInt32 CNOHOLEDBKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CNOHOLEDBKM_OFFSET))(this);
		}

		static ::System::Single FBMELDJHJDE(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FBMELDJHJDE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* GHKLOIGADEK(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GHKLOIGADEK_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::StringHash>* MBOKFAAOIHJ(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::StringHash>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MBOKFAAOIHJ_OFFSET))(a1);
		}

		::System::Void HBEABJEBLIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_HBEABJEBLIG_OFFSET))(this);
		}

		::System::Void AKFHNPAFLPO(::GKCNCLIOFDA_DNAMIBFFFNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNCLIOFDA_DNAMIBFFFNA*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_AKFHNPAFLPO_OFFSET))(this, a1);
		}

		::System::Void CDBEGOLFOLH(::GKCNCLIOFDA_GBAFFFJMOHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNCLIOFDA_GBAFFFJMOHK*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CDBEGOLFOLH_OFFSET))(this, a1);
		}

		::System::Void NLJOPNLMFMK(::GKCNCLIOFDA_GMLOCPCHHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNCLIOFDA_GMLOCPCHHNI*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NLJOPNLMFMK_OFFSET))(this, a1);
		}

		::System::Void GOHFOLKBAHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GOHFOLKBAHB_OFFSET))(this);
		}

		::System::Void JGMIJGNHEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JGMIJGNHEGK_OFFSET))(this);
		}

		::System::Void CHIIKMMPDBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CHIIKMMPDBG_OFFSET))(this);
		}

		::System::Void NJPOKNGEONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NJPOKNGEONB_OFFSET))(this);
		}

		::GKCNCLIOFDA_OHCFDJBBGOK* AFELMGGNOJA(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::GKCNCLIOFDA_OHCFDJBBGOK*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_AFELMGGNOJA_OFFSET))(this, a1);
		}

		::System::Void KJHJNMJJDJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KJHJNMJJDJK_OFFSET))(this);
		}

		::System::Boolean BFBAOHHBFLM(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BFBAOHHBFLM_OFFSET))(this, a1, a2);
		}

		::System::Boolean BFBAOHHBFLM_1(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BFBAOHHBFLM_1_OFFSET))(this, a1);
		}

		::System::Void JKMKIJEBDNN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JKMKIJEBDNN_OFFSET))(this, a1);
		}

		::System::Void IOBMKNJHMBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_IOBMKNJHMBJ_OFFSET))(this);
		}

		::System::UInt32 BMMFHKHOIGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BMMFHKHOIGE_OFFSET))(this);
		}

		::System::Void OJAGHJAKJBO(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OJAGHJAKJBO_OFFSET))(this, a1, a2);
		}

		::System::Void LICIHNFNHBD(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::System::Int32 a2, ::Il2CppArray<::System::Object*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* a4, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LICIHNFNHBD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean KOJDNFEEACN(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartyInteractionDefinition*, ::System::Int32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KOJDNFEEACN_OFFSET))(a1, a2);
		}

		static ::System::Boolean DFPBPACLBMF(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DFPBPACLBMF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MMNHMCJCOOL(::Il2CppArray<::System::Object*>* a1, ::System::String* a2, ::OOIFBABMIGP a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::OOIFBABMIGP))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MMNHMCJCOOL_OFFSET))(a1, a2, a3);
		}

		::System::Boolean MFDKDEMOJIB(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MFDKDEMOJIB_OFFSET))(this, a1);
		}

		::System::Boolean GJHJEDJILII(::GKCNCLIOFDA_DNAMIBFFFNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_DNAMIBFFFNA*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GJHJEDJILII_OFFSET))(this, a1);
		}

		::System::Boolean IBJFKBEJBCK(::GKCNCLIOFDA_GBAFFFJMOHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_GBAFFFJMOHK*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_IBJFKBEJBCK_OFFSET))(this, a1);
		}

		::System::Boolean MLBEBLAGGHE(::GKCNCLIOFDA_GMLOCPCHHNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_GMLOCPCHHNI*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MLBEBLAGGHE_OFFSET))(this, a1);
		}

		::System::Boolean ECAHPKMOLEI(::RPG::GameCore::PetPartyInteractionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_ECAHPKMOLEI_OFFSET))(this, a1);
		}

		::System::Boolean BKPEOKPGMPF(::GKCNCLIOFDA_GBAFFFJMOHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_GBAFFFJMOHK*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_BKPEOKPGMPF_OFFSET))(this, a1);
		}

		::System::Boolean MAKLIEGAKIM(::GKCNCLIOFDA_MJBLPCGHLOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_MJBLPCGHLOD*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MAKLIEGAKIM_OFFSET))(this, a1);
		}

		::System::Boolean CMJFOGCPAHO(::GKCNCLIOFDA_GMLOCPCHHNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_GMLOCPCHHNI*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CMJFOGCPAHO_OFFSET))(this, a1);
		}

		::System::Boolean JFJJAJEKEJP(::GKCNCLIOFDA_FNKFIBKMGKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_FNKFIBKMGKG*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFJJAJEKEJP_OFFSET))(this, a1);
		}

		::System::Boolean KCIKBMBMDKF(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KCIKBMBMDKF_OFFSET))(this, a1);
		}

		::RPG::GameCore::PetPartyInteractionCategoryConfig* HJECILFBPKI()
		{
			return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_HJECILFBPKI_OFFSET))(this);
		}

		::System::Boolean JPMGIIOIKMD(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::GKCNCLIOFDA_DNAMIBFFFNA* a2, ::GKCNCLIOFDA_GBAFFFJMOHK* a3, ::GKCNCLIOFDA_GMLOCPCHHNI* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::GKCNCLIOFDA_DNAMIBFFFNA*, ::GKCNCLIOFDA_GBAFFFJMOHK*, ::GKCNCLIOFDA_GMLOCPCHHNI*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JPMGIIOIKMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DCKDHMMEHAC(::GKCNCLIOFDA_GBAFFFJMOHK* a1, ::GKCNCLIOFDA_MJBLPCGHLOD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_GBAFFFJMOHK*, ::GKCNCLIOFDA_MJBLPCGHLOD*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DCKDHMMEHAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean OCKMAOBOAPG(::GKCNCLIOFDA_FNKFIBKMGKG* a1, ::GKCNCLIOFDA_EPNILOJFGBJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA_FNKFIBKMGKG*, ::GKCNCLIOFDA_EPNILOJFGBJ*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OCKMAOBOAPG_OFFSET))(this, a1, a2);
		}

		::GKCNCLIOFDA_FGAIJIBMILD* CKCOHHBKHEP(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::GKCNCLIOFDA_FGAIJIBMILD*(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CKCOHHBKHEP_OFFSET))(this, a1);
		}

		::GKCNCLIOFDA_FNKFIBKMGKG* IFJFFEIBDOO(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::GKCNCLIOFDA_FNKFIBKMGKG*(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_IFJFFEIBDOO_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::PetPartySingleCombinationStartPattern* NPGCKOFPCFC(::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* a1)
		{
			return ((::RPG::GameCore::PetPartySingleCombinationStartPattern*(*)(::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NPGCKOFPCFC_OFFSET))(a1);
		}

		static ::RPG::GameCore::PetPartySingleDoubleStartPattern* NPGCKOFPCFC_1(::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* a1)
		{
			return ((::RPG::GameCore::PetPartySingleDoubleStartPattern*(*)(::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_NPGCKOFPCFC_1_OFFSET))(a1);
		}

		static ::System::Int32 MGEOHOHANMF(::RPG::GameCore::PetPartyInteractionCategory a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::PetPartyInteractionCategory))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MGEOHOHANMF_OFFSET))(a1);
		}

		static ::System::Boolean JMLPABKOLJA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JMLPABKOLJA_OFFSET))(a1, a2);
		}

		static ::System::Boolean CGICONFFENO(::RPG::GameCore::PetPartySingleCombinationStartPattern* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartySingleCombinationStartPattern*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CGICONFFENO_OFFSET))(a1);
		}

		static ::System::Boolean CGICONFFENO_1(::RPG::GameCore::PetPartySingleDoubleStartPattern* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartySingleDoubleStartPattern*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CGICONFFENO_1_OFFSET))(a1);
		}

		static ::System::String* KFNALBNJAPH(::RPG::GameCore::PetPartyInteractionCategory a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::PetPartyInteractionCategory))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KFNALBNJAPH_OFFSET))(a1);
		}

		static ::System::String* PELOLMEICPO(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_PELOLMEICPO_OFFSET))(a1);
		}

		static ::System::Void LJHGBDEDBHL(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LJHGBDEDBHL_OFFSET))(a1);
		}

		static ::System::Single KILKFGPBPEC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_KILKFGPBPEC_OFFSET))(a1, a2);
		}

		::System::Void CPAPKFILBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CPAPKFILBJI_OFFSET))(this);
		}

		::System::Void OHDIHEIAPMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OHDIHEIAPMG_OFFSET))(this);
		}

	};
