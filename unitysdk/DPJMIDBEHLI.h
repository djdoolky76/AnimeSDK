#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLCCPHIOMI.h"
#include "unitysdk/CKGOFMFNIPP.h"
#include "unitysdk/DIKCFAICOHB.h"
#include "unitysdk/NCJELKLNHMF.h"
#include "unitysdk/NHHJAONHDDG.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/MHCOBFJNNJB.h"
#include "unitysdk/System/ValueTuple_2.h"
class BHMEPBAGOFF;
class BJJAJEFMFLA;
class BOMFGKDLHIB;
class DABAAANKJGF;
class DFLIHGGNBDB;
class DLBGONGJBNC;
class EEHLDBOEFGB;
class EFHNDMENDHI;
class FDPALAEIHPB;
class FOJDKLCHCKG;
class GBFDMFJKOOP;
class GBMPOBJDAFF;
class IPGIJFNAFLC;
class JBILGCPCJOD;
class JECNOELJLKO;
class JFJDMGOMJOF;
class KLGJDILNNDH;
class LAJGLHCCNED;
class LGEOFJJKFNF;
class LPHCHEJEMPD;
class OKIPFIENKIF;
class PKBDAKMLDMC;
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPJMIDBEHLI_ACEMGOOGDAE_OFFSET UNITYSDK_OFFSET(0x1264C560)
#define DPJMIDBEHLI_AGJFHEMOGCD_OFFSET UNITYSDK_OFFSET(0x1264DAD0)
#define DPJMIDBEHLI_AGKDHDGDGFK_OFFSET UNITYSDK_OFFSET(0x12646A50)
#define DPJMIDBEHLI_AILGHBIOFPK_OFFSET UNITYSDK_OFFSET(0x1263F660)
#define DPJMIDBEHLI_AOLLGHMPEOH_OFFSET UNITYSDK_OFFSET(0x1263E620)
#define DPJMIDBEHLI_BAEKJALGFNG_OFFSET UNITYSDK_OFFSET(0x12645520)
#define DPJMIDBEHLI_BEFPLLBFFED_OFFSET UNITYSDK_OFFSET(0x12648B30)
#define DPJMIDBEHLI_CABEDKJHILP_OFFSET UNITYSDK_OFFSET(0x1263CD80)
#define DPJMIDBEHLI_CDDIIJDIGHN_1_OFFSET UNITYSDK_OFFSET(0x1264C160)
#define DPJMIDBEHLI_CDDIIJDIGHN_OFFSET UNITYSDK_OFFSET(0x1264A450)
#define DPJMIDBEHLI_CKGKFLPBJAJ_OFFSET UNITYSDK_OFFSET(0x12648740)
#define DPJMIDBEHLI_CLABIOEEDDO_OFFSET UNITYSDK_OFFSET(0x12646400)
#define DPJMIDBEHLI_CLKNFLAFNNC_OFFSET UNITYSDK_OFFSET(0x1264F350)
#define DPJMIDBEHLI_CPFFOFAEDCL_1_OFFSET UNITYSDK_OFFSET(0x1263C970)
#define DPJMIDBEHLI_CPFFOFAEDCL_OFFSET UNITYSDK_OFFSET(0x1263C650)
#define DPJMIDBEHLI_CPKOONLNNHM_OFFSET UNITYSDK_OFFSET(0x12646660)
#define DPJMIDBEHLI_CTOR_OFFSET UNITYSDK_OFFSET(0x12644E80)
#define DPJMIDBEHLI_DAEDKJOPLMF_OFFSET UNITYSDK_OFFSET(0x126450D0)
#define DPJMIDBEHLI_DFNGEGJCALB_OFFSET UNITYSDK_OFFSET(0x126451B0)
#define DPJMIDBEHLI_DIPGDJEHKNO_OFFSET UNITYSDK_OFFSET(0x12648A90)
#define DPJMIDBEHLI_DJCAKPEIPOG_OFFSET UNITYSDK_OFFSET(0x1264F3B0)
#define DPJMIDBEHLI_EGLFPOKPCKD_OFFSET UNITYSDK_OFFSET(0x12647A40)
#define DPJMIDBEHLI_EOKLGPCFEDJ_OFFSET UNITYSDK_OFFSET(0x1264A7B0)
#define DPJMIDBEHLI_FBEEMCJONFD_OFFSET UNITYSDK_OFFSET(0x12645060)
#define DPJMIDBEHLI_FBIMEMGGNEJ_OFFSET UNITYSDK_OFFSET(0x12645FB0)
#define DPJMIDBEHLI_FGJPPDKHKFK_OFFSET UNITYSDK_OFFSET(0x126482B0)
#define DPJMIDBEHLI_FIGMCPKPOBM_OFFSET UNITYSDK_OFFSET(0x1264ED70)
#define DPJMIDBEHLI_FINCDMDMOEL_OFFSET UNITYSDK_OFFSET(0x1264F530)
#define DPJMIDBEHLI_FKCCKKHKGKG_OFFSET UNITYSDK_OFFSET(0x12644160)
#define DPJMIDBEHLI_FMDPMMAHFNL_1_OFFSET UNITYSDK_OFFSET(0x126401D0)
#define DPJMIDBEHLI_FMDPMMAHFNL_2_OFFSET UNITYSDK_OFFSET(0x1264AD20)
#define DPJMIDBEHLI_FMDPMMAHFNL_3_OFFSET UNITYSDK_OFFSET(0x1264E2B0)
#define DPJMIDBEHLI_FMDPMMAHFNL_OFFSET UNITYSDK_OFFSET(0x1264A5B0)
#define DPJMIDBEHLI_FMFNDDINHNH_OFFSET UNITYSDK_OFFSET(0x1264F6F0)
#define DPJMIDBEHLI_GBADNAELFHA_OFFSET UNITYSDK_OFFSET(0x12640AF0)
#define DPJMIDBEHLI_GEJNIOOFNJH_OFFSET UNITYSDK_OFFSET(0x12640230)
#define DPJMIDBEHLI_GHMJOKBNJFL_OFFSET UNITYSDK_OFFSET(0x12647AE0)
#define DPJMIDBEHLI_GLLENIPPBKJ_OFFSET UNITYSDK_OFFSET(0x12647080)
#define DPJMIDBEHLI_GNJNIFCAHKP_OFFSET UNITYSDK_OFFSET(0x12645AB0)
#define DPJMIDBEHLI_GNPFDPMKAGA_OFFSET UNITYSDK_OFFSET(0x1263CA90)
#define DPJMIDBEHLI_GOOJICMEFKA_OFFSET UNITYSDK_OFFSET(0x1264FAD0)
#define DPJMIDBEHLI_HBLNPMPEPHB_OFFSET UNITYSDK_OFFSET(0x12644EB0)
#define DPJMIDBEHLI_HCBMDILEPDL_OFFSET UNITYSDK_OFFSET(0x126456F0)
#define DPJMIDBEHLI_HHOEIMJODDM_OFFSET UNITYSDK_OFFSET(0x12646CD0)
#define DPJMIDBEHLI_HKOGCIHJODG_1_OFFSET UNITYSDK_OFFSET(0x1264AB60)
#define DPJMIDBEHLI_HKOGCIHJODG_OFFSET UNITYSDK_OFFSET(0x1264A1E0)
#define DPJMIDBEHLI_HNLGLNHMCNE_1_OFFSET UNITYSDK_OFFSET(0x12649550)
#define DPJMIDBEHLI_HNLGLNHMCNE_OFFSET UNITYSDK_OFFSET(0x126490A0)
#define DPJMIDBEHLI_IGNKGDNNLHF_OFFSET UNITYSDK_OFFSET(0x126461E0)
#define DPJMIDBEHLI_IJCKPJBBANA_OFFSET UNITYSDK_OFFSET(0x126466D0)
#define DPJMIDBEHLI_INIDBBOEJMF_OFFSET UNITYSDK_OFFSET(0x126454C0)
#define DPJMIDBEHLI_JDBCBJGENBG_OFFSET UNITYSDK_OFFSET(0x12645220)
#define DPJMIDBEHLI_JEFDEIJPJBO_OFFSET UNITYSDK_OFFSET(0x12648300)
#define DPJMIDBEHLI_JEHCHFDAEMD_OFFSET UNITYSDK_OFFSET(0x1264F760)
#define DPJMIDBEHLI_JFPEBHGMEDO_OFFSET UNITYSDK_OFFSET(0x12645140)
#define DPJMIDBEHLI_JHHHPHJDHCE_OFFSET UNITYSDK_OFFSET(0x1264E020)
#define DPJMIDBEHLI_JIBPJPBDOEJ_OFFSET UNITYSDK_OFFSET(0x12645EB0)
#define DPJMIDBEHLI_JJBLKHEABDL_OFFSET UNITYSDK_OFFSET(0x12644510)
#define DPJMIDBEHLI_JJGPKIBMDON_OFFSET UNITYSDK_OFFSET(0x1264F680)
#define DPJMIDBEHLI_JMKACIHHKLF_OFFSET UNITYSDK_OFFSET(0x12647860)
#define DPJMIDBEHLI_JONBNJLEKFD_1_OFFSET UNITYSDK_OFFSET(0x1264A610)
#define DPJMIDBEHLI_JONBNJLEKFD_2_OFFSET UNITYSDK_OFFSET(0x1264A9D0)
#define DPJMIDBEHLI_JONBNJLEKFD_3_OFFSET UNITYSDK_OFFSET(0x1264A180)
#define DPJMIDBEHLI_JONBNJLEKFD_4_OFFSET UNITYSDK_OFFSET(0x1263F600)
#define DPJMIDBEHLI_JONBNJLEKFD_5_OFFSET UNITYSDK_OFFSET(0x1264BFD0)
#define DPJMIDBEHLI_JONBNJLEKFD_OFFSET UNITYSDK_OFFSET(0x12649FC0)
#define DPJMIDBEHLI_KAIFIIFAAKG_OFFSET UNITYSDK_OFFSET(0x12647FC0)
#define DPJMIDBEHLI_KGDLGCJDKLI_OFFSET UNITYSDK_OFFSET(0x12647120)
#define DPJMIDBEHLI_KGDMOADCCCO_OFFSET UNITYSDK_OFFSET(0x1264D800)
#define DPJMIDBEHLI_KJGEJMHKJPN_OFFSET UNITYSDK_OFFSET(0x1264B6F0)
#define DPJMIDBEHLI_KLALIMKCONJ_OFFSET UNITYSDK_OFFSET(0x1264E570)
#define DPJMIDBEHLI_LBJAENBGDOP_OFFSET UNITYSDK_OFFSET(0x1264B690)
#define DPJMIDBEHLI_LMKFDMCAKMD_OFFSET UNITYSDK_OFFSET(0x126449E0)
#define DPJMIDBEHLI_MFPJJMKAOIP_OFFSET UNITYSDK_OFFSET(0x12644DD0)
#define DPJMIDBEHLI_MGPGFAGAPFE_OFFSET UNITYSDK_OFFSET(0x12645830)
#define DPJMIDBEHLI_MOLPIHJDMNI_OFFSET UNITYSDK_OFFSET(0x12641390)
#define DPJMIDBEHLI_MPCGPIGAOJC_OFFSET UNITYSDK_OFFSET(0x1263D200)
#define DPJMIDBEHLI_NAILDJAEIOE_OFFSET UNITYSDK_OFFSET(0x1264AF10)
#define DPJMIDBEHLI_NAMOPGGOBCE_OFFSET UNITYSDK_OFFSET(0x12646790)
#define DPJMIDBEHLI_NDGFNIDMNJL_OFFSET UNITYSDK_OFFSET(0x12645A50)
#define DPJMIDBEHLI_NDPAGEEBFBP_OFFSET UNITYSDK_OFFSET(0x1264E420)
#define DPJMIDBEHLI_NEGJEJLIGAF_OFFSET UNITYSDK_OFFSET(0x1264E520)
#define DPJMIDBEHLI_NKFIAMGOONB_OFFSET UNITYSDK_OFFSET(0x126499E0)
#define DPJMIDBEHLI_ODNBKEJPMPN_OFFSET UNITYSDK_OFFSET(0x1263DC40)
#define DPJMIDBEHLI_OHFMHBKCMKL_OFFSET UNITYSDK_OFFSET(0x1264F5C0)
#define DPJMIDBEHLI_OHGCHIKPAHD_OFFSET UNITYSDK_OFFSET(0x1264F7F0)
#define DPJMIDBEHLI_OIIAJCIOFJN_OFFSET UNITYSDK_OFFSET(0x126471B0)
#define DPJMIDBEHLI_OKNCMJKBMMO_OFFSET UNITYSDK_OFFSET(0x12647460)
#define DPJMIDBEHLI_OKOJNBPLMDL_OFFSET UNITYSDK_OFFSET(0x1263C6E0)
#define DPJMIDBEHLI_PAOEFKLFLMC_OFFSET UNITYSDK_OFFSET(0x1263F260)
#define DPJMIDBEHLI_PCLIOFAPNCC_OFFSET UNITYSDK_OFFSET(0x12650040)
#define DPJMIDBEHLI_PECNOOPAMPP_OFFSET UNITYSDK_OFFSET(0x12642640)
#define DPJMIDBEHLI_PELCMLJOMIC_OFFSET UNITYSDK_OFFSET(0x12645290)
#define DPJMIDBEHLI_PGLAGIINPDD_OFFSET UNITYSDK_OFFSET(0x1263CA40)
#define DPJMIDBEHLI_PHPFMAKOCNM_1_OFFSET UNITYSDK_OFFSET(0x1264AE90)
#define DPJMIDBEHLI_PHPFMAKOCNM_OFFSET UNITYSDK_OFFSET(0x1264AD80)
#define DPJMIDBEHLI_PMAGCJHANLE_OFFSET UNITYSDK_OFFSET(0x12645B10)
#define DPJMIDBEHLI_PMFPCANEOJD_OFFSET UNITYSDK_OFFSET(0x126452F0)

inline static constexpr unsigned int DPJMIDBEHLI_TypeDefinitionIndex = 76563;

	class DPJMIDBEHLI : public ::NCJELKLNHMF
	{
	public:
		::PKBDAKMLDMC* MDKFMAJAGEH; // 0x28
		::BJJAJEFMFLA* COLNBFLEIFC; // 0x30
		::FDPALAEIHPB* FKINCGODJEP; // 0x38
		::OKIPFIENKIF* BGBOCLFEOMM; // 0x40
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x48
		::System::UInt32 DDKJOGFJGCH; // 0x50
		// static const ::System::String* MMFAJLNIFLC; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CPFFOFAEDCL(::OKIPFIENKIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKIPFIENKIF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CPFFOFAEDCL_OFFSET))(this, a1);
		}

		::System::Void CPFFOFAEDCL_1(::PKBDAKMLDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CPFFOFAEDCL_1_OFFSET))(this, a1);
		}

		::System::Void PGLAGIINPDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PGLAGIINPDD_OFFSET))(this);
		}

		::System::Void GNPFDPMKAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GNPFDPMKAGA_OFFSET))(this);
		}

		static ::System::String* CABEDKJHILP(::BJJAJEFMFLA* a1)
		{
			return ((::System::String*(*)(::BJJAJEFMFLA*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CABEDKJHILP_OFFSET))(a1);
		}

		::System::Void PAOEFKLFLMC(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PAOEFKLFLMC_OFFSET))(this, a1);
		}

		::BHMEPBAGOFF* OKOJNBPLMDL()
		{
			return ((::BHMEPBAGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_OKOJNBPLMDL_OFFSET))(this);
		}

		::KLGJDILNNDH* GEJNIOOFNJH(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::KLGJDILNNDH*(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GEJNIOOFNJH_OFFSET))(this, a1);
		}

		static ::System::String* MPCGPIGAOJC(::BHMEPBAGOFF* a1)
		{
			return ((::System::String*(*)(::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_MPCGPIGAOJC_OFFSET))(a1);
		}

		static ::System::String* MOLPIHJDMNI(::KLGJDILNNDH* a1)
		{
			return ((::System::String*(*)(::KLGJDILNNDH*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_MOLPIHJDMNI_OFFSET))(a1);
		}

		static ::System::String* ODNBKEJPMPN(::OKIPFIENKIF* a1)
		{
			return ((::System::String*(*)(::OKIPFIENKIF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_ODNBKEJPMPN_OFFSET))(a1);
		}

		static ::System::String* AOLLGHMPEOH(::PKBDAKMLDMC* a1)
		{
			return ((::System::String*(*)(::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_AOLLGHMPEOH_OFFSET))(a1);
		}

		static ::System::String* FKCCKKHKGKG(::JFJDMGOMJOF* a1)
		{
			return ((::System::String*(*)(::JFJDMGOMJOF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FKCCKKHKGKG_OFFSET))(a1);
		}

		static ::System::String* PECNOOPAMPP(::IPGIJFNAFLC* a1)
		{
			return ((::System::String*(*)(::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PECNOOPAMPP_OFFSET))(a1);
		}

		static ::System::String* JJBLKHEABDL(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JJBLKHEABDL_OFFSET))(a1);
		}

		static ::System::String* LMKFDMCAKMD(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_LMKFDMCAKMD_OFFSET))(a1);
		}

		::System::Void HBLNPMPEPHB(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HBLNPMPEPHB_OFFSET))(this, a1);
		}

		::System::Boolean FBEEMCJONFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FBEEMCJONFD_OFFSET))(this);
		}

		::System::Boolean DAEDKJOPLMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_DAEDKJOPLMF_OFFSET))(this);
		}

		::System::Boolean JFPEBHGMEDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JFPEBHGMEDO_OFFSET))(this);
		}

		::System::Boolean DFNGEGJCALB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_DFNGEGJCALB_OFFSET))(this);
		}

		::System::Boolean JDBCBJGENBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JDBCBJGENBG_OFFSET))(this);
		}

		::System::Boolean PELCMLJOMIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PELCMLJOMIC_OFFSET))(this);
		}

		::System::Boolean INIDBBOEJMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_INIDBBOEJMF_OFFSET))(this);
		}

		::System::Boolean HCBMDILEPDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HCBMDILEPDL_OFFSET))(this);
		}

		::System::Boolean NDGFNIDMNJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NDGFNIDMNJL_OFFSET))(this);
		}

		::System::Boolean GNJNIFCAHKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GNJNIFCAHKP_OFFSET))(this);
		}

		::System::Boolean PMFPCANEOJD(::CKGOFMFNIPP a1, ::LGEOFJJKFNF* a2, ::System::UInt64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKGOFMFNIPP, ::LGEOFJJKFNF*, ::System::UInt64))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PMFPCANEOJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BAEKJALGFNG(::DIKCFAICOHB a1, ::GBMPOBJDAFF* a2, ::System::UInt64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIKCFAICOHB, ::GBMPOBJDAFF*, ::System::UInt64))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_BAEKJALGFNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MGPGFAGAPFE(::Google::Protobuf::IMessage* a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt64))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_MGPGFAGAPFE_OFFSET))(this, a1, a2);
		}

		::System::Void PMAGCJHANLE(::DABAAANKJGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABAAANKJGF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PMAGCJHANLE_OFFSET))(this, a1);
		}

		::System::Void FBIMEMGGNEJ(::DABAAANKJGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABAAANKJGF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FBIMEMGGNEJ_OFFSET))(this, a1);
		}

		::System::Void IGNKGDNNLHF(::EEHLDBOEFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEHLDBOEFGB*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_IGNKGDNNLHF_OFFSET))(this, a1);
		}

		::System::Void CLABIOEEDDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CLABIOEEDDO_OFFSET))(this);
		}

		::System::Boolean CPKOONLNNHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CPKOONLNNHM_OFFSET))(this);
		}

		::System::UInt32 IJCKPJBBANA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_IJCKPJBBANA_OFFSET))(this);
		}

		::System::Void NAMOPGGOBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NAMOPGGOBCE_OFFSET))(this);
		}

		::System::Void AGKDHDGDGFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_AGKDHDGDGFK_OFFSET))(this, a1);
		}

		::System::Void HHOEIMJODDM(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HHOEIMJODDM_OFFSET))(this, a1, a2);
		}

		::System::Void OKNCMJKBMMO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_OKNCMJKBMMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JMKACIHHKLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JMKACIHHKLF_OFFSET))(this);
		}

		::System::Void OIIAJCIOFJN(::RPG::Client::LittleGame::Match3::ChessBoardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::ChessBoardState))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_OIIAJCIOFJN_OFFSET))(this, a1);
		}

		::System::Void GLLENIPPBKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GLLENIPPBKJ_OFFSET))(this);
		}

		::System::Void GHMJOKBNJFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GHMJOKBNJFL_OFFSET))(this);
		}

		::System::Void KAIFIIFAAKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_KAIFIIFAAKG_OFFSET))(this);
		}

		::System::Void FGJPPDKHKFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FGJPPDKHKFK_OFFSET))(this);
		}

		::System::Void JEFDEIJPJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JEFDEIJPJBO_OFFSET))(this);
		}

		::System::Void CKGKFLPBJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CKGKFLPBJAJ_OFFSET))(this);
		}

		::System::Boolean DIPGDJEHKNO(::IPGIJFNAFLC* a1, ::IPGIJFNAFLC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGIJFNAFLC*, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_DIPGDJEHKNO_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::JBILGCPCJOD*, ::JBILGCPCJOD*> HNLGLNHMCNE(::System::Collections::Generic::IList_1<::JBILGCPCJOD*>* a1)
		{
			return ((::System::ValueTuple_2<::JBILGCPCJOD*, ::JBILGCPCJOD*>(*)(::PVOID, ::System::Collections::Generic::IList_1<::JBILGCPCJOD*>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HNLGLNHMCNE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::KLGJDILNNDH*, ::KLGJDILNNDH*> HNLGLNHMCNE_1(::System::Collections::Generic::IList_1<::KLGJDILNNDH*>* a1)
		{
			return ((::System::ValueTuple_2<::KLGJDILNNDH*, ::KLGJDILNNDH*>(*)(::PVOID, ::System::Collections::Generic::IList_1<::KLGJDILNNDH*>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HNLGLNHMCNE_1_OFFSET))(this, a1);
		}

		::LPHCHEJEMPD* NKFIAMGOONB(::System::Collections::Generic::IList_1<::LPHCHEJEMPD*>* a1)
		{
			return ((::LPHCHEJEMPD*(*)(::PVOID, ::System::Collections::Generic::IList_1<::LPHCHEJEMPD*>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NKFIAMGOONB_OFFSET))(this, a1);
		}

		::System::Void JONBNJLEKFD(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_OFFSET))(this, a1);
		}

		::System::Void JONBNJLEKFD_1(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_1_OFFSET))(this, a1);
		}

		::System::Void JONBNJLEKFD_2(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_2_OFFSET))(this, a1);
		}

		::System::Void PHPFMAKOCNM(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PHPFMAKOCNM_OFFSET))(this, a1);
		}

		::System::Void PHPFMAKOCNM_1(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PHPFMAKOCNM_1_OFFSET))(this, a1);
		}

		::System::Void JONBNJLEKFD_3(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_3_OFFSET))(this, a1);
		}

		::System::Void JONBNJLEKFD_4(::IPGIJFNAFLC* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean LBJAENBGDOP(::IPGIJFNAFLC* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGIJFNAFLC*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_LBJAENBGDOP_OFFSET))(this, a1, a2);
		}

		::System::Void JONBNJLEKFD_5(::GBFDMFJKOOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBFDMFJKOOP*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JONBNJLEKFD_5_OFFSET))(this, a1);
		}

		::DFLIHGGNBDB* KGDLGCJDKLI(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::DFLIHGGNBDB*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_KGDLGCJDKLI_OFFSET))(this, a1);
		}

		::System::Boolean BEFPLLBFFED(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_BEFPLLBFFED_OFFSET))(this, a1, a2);
		}

		::System::Void NAILDJAEIOE(::IPGIJFNAFLC* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NAILDJAEIOE_OFFSET))(this, a1, a2);
		}

		::System::Void AGJFHEMOGCD(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_AGJFHEMOGCD_OFFSET))(this, a1);
		}

		::System::Void FMDPMMAHFNL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FMDPMMAHFNL_OFFSET))(this, a1);
		}

		::System::Void FMDPMMAHFNL_1(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FMDPMMAHFNL_1_OFFSET))(this, a1);
		}

		::System::Void FMDPMMAHFNL_2(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FMDPMMAHFNL_2_OFFSET))(this, a1);
		}

		::System::Void FMDPMMAHFNL_3(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FMDPMMAHFNL_3_OFFSET))(this, a1);
		}

		::MHCOBFJNNJB JIBPJPBDOEJ(::LAJGLHCCNED* a1)
		{
			return ((::MHCOBFJNNJB(*)(::PVOID, ::LAJGLHCCNED*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JIBPJPBDOEJ_OFFSET))(this, a1);
		}

		::LAJGLHCCNED* NDPAGEEBFBP(::MHCOBFJNNJB a1)
		{
			return ((::LAJGLHCCNED*(*)(::PVOID, ::MHCOBFJNNJB))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NDPAGEEBFBP_OFFSET))(this, a1);
		}

		::System::Void HKOGCIHJODG(::JBILGCPCJOD* a1, ::JBILGCPCJOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBILGCPCJOD*, ::JBILGCPCJOD*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HKOGCIHJODG_OFFSET))(this, a1, a2);
		}

		::System::Void HKOGCIHJODG_1(::LPHCHEJEMPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHCHEJEMPD*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_HKOGCIHJODG_1_OFFSET))(this, a1);
		}

		::System::Void CDDIIJDIGHN(::JBILGCPCJOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBILGCPCJOD*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CDDIIJDIGHN_OFFSET))(this, a1);
		}

		::System::Void KLALIMKCONJ(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_KLALIMKCONJ_OFFSET))(this, a1);
		}

		::System::Void ACEMGOOGDAE(::System::Collections::Generic::IEnumerable_1<::DLBGONGJBNC*>* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::DLBGONGJBNC*>*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_ACEMGOOGDAE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CDDIIJDIGHN_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CDDIIJDIGHN_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState NEGJEJLIGAF(::NHHJAONHDDG a1)
		{
			return ((::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState(*)(::PVOID, ::NHHJAONHDDG))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_NEGJEJLIGAF_OFFSET))(this, a1);
		}

		::System::Void KGDMOADCCCO(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_KGDMOADCCCO_OFFSET))(this, a1);
		}

		::System::Void AILGHBIOFPK(::KLGJDILNNDH* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLGJDILNNDH*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_AILGHBIOFPK_OFFSET))(this, a1, a2);
		}

		::System::Void JHHHPHJDHCE(::MHCOBFJNNJB a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::MHCOBFJNNJB, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JHHHPHJDHCE_OFFSET))(this, a1, a2);
		}

		::System::Void EOKLGPCFEDJ(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_EOKLGPCFEDJ_OFFSET))(this, a1);
		}

		::System::Void FIGMCPKPOBM(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FIGMCPKPOBM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CLKNFLAFNNC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_CLKNFLAFNNC_OFFSET))(this, a1, a2);
		}

		::JFJDMGOMJOF* EGLFPOKPCKD(::ABLCCPHIOMI a1)
		{
			return ((::JFJDMGOMJOF*(*)(::PVOID, ::ABLCCPHIOMI))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_EGLFPOKPCKD_OFFSET))(this, a1);
		}

		::IPGIJFNAFLC* GBADNAELFHA()
		{
			return ((::IPGIJFNAFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GBADNAELFHA_OFFSET))(this);
		}

		static ::System::Void MFPJJMKAOIP(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3, ::RPG::GameCore::Match3::PieceTag a4, ::RPG::GameCore::Match3::GridTag a5, ::RPG::GameCore::Match3::BombType a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::RPG::GameCore::Match3::GridTag, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_MFPJJMKAOIP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 DJCAKPEIPOG(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_DJCAKPEIPOG_OFFSET))(this, a1);
		}

		::System::UInt32 FINCDMDMOEL(::EFHNDMENDHI* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FINCDMDMOEL_OFFSET))(this, a1);
		}

		::System::UInt32 OHFMHBKCMKL(::EFHNDMENDHI* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_OHFMHBKCMKL_OFFSET))(this, a1);
		}

		::System::UInt32 JJGPKIBMDON(::EFHNDMENDHI* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JJGPKIBMDON_OFFSET))(this, a1);
		}

		::System::UInt32 FMFNDDINHNH(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_FMFNDDINHNH_OFFSET))(this, a1);
		}

		::System::UInt32 JEHCHFDAEMD(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_JEHCHFDAEMD_OFFSET))(this, a1);
		}

		::System::Boolean KJGEJMHKJPN(::IPGIJFNAFLC* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGIJFNAFLC*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_KJGEJMHKJPN_OFFSET))(this, a1, a2);
		}

		::System::Boolean GOOJICMEFKA(::IPGIJFNAFLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_GOOJICMEFKA_OFFSET))(this, a1);
		}

		::System::Boolean OHGCHIKPAHD(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_OHGCHIKPAHD_OFFSET))(this, a1);
		}

		::System::Boolean PCLIOFAPNCC(::IPGIJFNAFLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI_PCLIOFAPNCC_OFFSET))(this, a1);
		}

	};
