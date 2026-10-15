#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPLNDLJPMP_ELoadingWaitType.h"
#include "unitysdk/DAPLNDLJPMP_EPoolCapacityModifierType.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class DAPLNDLJPMP;
class DAPLNDLJPMP_MKBHJHCIJFM;
class DHGOECAECHA;
class HMPBAIAPDBE;
class PFACHJFCILN;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::GameCore { class PreloadGroupScoreConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAPLNDLJPMP_ABNBLOJOPCF_OFFSET UNITYSDK_OFFSET(0xDFD08B0)
#define DAPLNDLJPMP_AMLDAEHINAC_OFFSET UNITYSDK_OFFSET(0xDFCEA30)
#define DAPLNDLJPMP_ANBIHKBHNGG_OFFSET UNITYSDK_OFFSET(0xDFD3D30)
#define DAPLNDLJPMP_BCLJGJPGGJB_OFFSET UNITYSDK_OFFSET(0xDFCEC00)
#define DAPLNDLJPMP_BDGCPCJIDJL_OFFSET UNITYSDK_OFFSET(0xDFD44C0)
#define DAPLNDLJPMP_BHIDOHPGIPL_OFFSET UNITYSDK_OFFSET(0xDFD2840)
#define DAPLNDLJPMP_BJGADHIDADJ_OFFSET UNITYSDK_OFFSET(0xDFCC0E0)
#define DAPLNDLJPMP_BNFBNLIONAF_OFFSET UNITYSDK_OFFSET(0xDFCC280)
#define DAPLNDLJPMP_BNHNPGJOMNN_OFFSET UNITYSDK_OFFSET(0xDFCCDE0)
#define DAPLNDLJPMP_BOMFPAKOCDO_OFFSET UNITYSDK_OFFSET(0xDFCDCB0)
#define DAPLNDLJPMP_BPBDJOBPHOA_OFFSET UNITYSDK_OFFSET(0xDFCD800)
#define DAPLNDLJPMP_CCCIJNIGHIP_OFFSET UNITYSDK_OFFSET(0xDFC8C70)
#define DAPLNDLJPMP_CCLDDDOKJNF_OFFSET UNITYSDK_OFFSET(0xDFCD730)
#define DAPLNDLJPMP_CGCAJCJGGBM_OFFSET UNITYSDK_OFFSET(0xDFCD540)
#define DAPLNDLJPMP_CGGFKENMGJI_OFFSET UNITYSDK_OFFSET(0xDFD0A80)
#define DAPLNDLJPMP_CGIBACPEIDO_OFFSET UNITYSDK_OFFSET(0xDFD26F0)
#define DAPLNDLJPMP_COKHKHPDKCF_OFFSET UNITYSDK_OFFSET(0xDFD4680)
#define DAPLNDLJPMP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD3D40)
#define DAPLNDLJPMP_DBABBPNLCPB_OFFSET UNITYSDK_OFFSET(0xDFCC380)
#define DAPLNDLJPMP_DECKFGPBEPP_OFFSET UNITYSDK_OFFSET(0xDFD3310)
#define DAPLNDLJPMP_DNJLMJCHFLI_OFFSET UNITYSDK_OFFSET(0xDFC9AF0)
#define DAPLNDLJPMP_EDBFMDONOGL_OFFSET UNITYSDK_OFFSET(0xDFD16C0)
#define DAPLNDLJPMP_EHFALEAJPOP_OFFSET UNITYSDK_OFFSET(0xDFC95C0)
#define DAPLNDLJPMP_EHGAEJIDFNG_OFFSET UNITYSDK_OFFSET(0xDFCB860)
#define DAPLNDLJPMP_EKDHENOHOHN_OFFSET UNITYSDK_OFFSET(0xDFD0C90)
#define DAPLNDLJPMP_ELEMLILFMIH_OFFSET UNITYSDK_OFFSET(0xDFC8E40)
#define DAPLNDLJPMP_EOHOCMHCGKO_OFFSET UNITYSDK_OFFSET(0xDFD2750)
#define DAPLNDLJPMP_FBBMJHKLGCB_OFFSET UNITYSDK_OFFSET(0xDFCD340)
#define DAPLNDLJPMP_FDAMGEKFKHF_OFFSET UNITYSDK_OFFSET(0xDFCED40)
#define DAPLNDLJPMP_FEKCPDHMEFF_OFFSET UNITYSDK_OFFSET(0xDFCC330)
#define DAPLNDLJPMP_FGCMHCBPAOA_OFFSET UNITYSDK_OFFSET(0xDFD1400)
#define DAPLNDLJPMP_FHCDHJNPNJH_OFFSET UNITYSDK_OFFSET(0xDFCE130)
#define DAPLNDLJPMP_FHFPJLLIPJD_OFFSET UNITYSDK_OFFSET(0xDFD1590)
#define DAPLNDLJPMP_FHMKLHGLKNA_OFFSET UNITYSDK_OFFSET(0xDFC8EB0)
#define DAPLNDLJPMP_FJDCPHBNDCG_OFFSET UNITYSDK_OFFSET(0xDFCD690)
#define DAPLNDLJPMP_FKEMIHAGHHA_OFFSET UNITYSDK_OFFSET(0xDFD3B80)
#define DAPLNDLJPMP_FOJLOJEIKEB_OFFSET UNITYSDK_OFFSET(0xDFD06E0)
#define DAPLNDLJPMP_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0xDFD4380)
#define DAPLNDLJPMP_GEHMBCCJGPM_OFFSET UNITYSDK_OFFSET(0xDFCEFD0)
#define DAPLNDLJPMP_GFIBAMAOBDA_OFFSET UNITYSDK_OFFSET(0xDFCC180)
#define DAPLNDLJPMP_GFIMLGLEOCE_OFFSET UNITYSDK_OFFSET(0xDFCF070)
#define DAPLNDLJPMP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xDFC8970)
#define DAPLNDLJPMP_GGPLCMAOJMM_OFFSET UNITYSDK_OFFSET(0xDFCC550)
#define DAPLNDLJPMP_GJDFIGLGPCH_OFFSET UNITYSDK_OFFSET(0xDFC9980)
#define DAPLNDLJPMP_GJKJKEENODM_OFFSET UNITYSDK_OFFSET(0xDFCF520)
#define DAPLNDLJPMP_GKMDIHBLGHG_OFFSET UNITYSDK_OFFSET(0xDFCD250)
#define DAPLNDLJPMP_GMHKKNNNJNJ_OFFSET UNITYSDK_OFFSET(0xDFCD4F0)
#define DAPLNDLJPMP_GMLCEFJPOHD_OFFSET UNITYSDK_OFFSET(0xDFD0E40)
#define DAPLNDLJPMP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDFD4480)
#define DAPLNDLJPMP_HALGOLJAKCA_OFFSET UNITYSDK_OFFSET(0xDFCD3B0)
#define DAPLNDLJPMP_HCCOACGCJJI_OFFSET UNITYSDK_OFFSET(0xDFC8B40)
#define DAPLNDLJPMP_HEHFODAPPJP_OFFSET UNITYSDK_OFFSET(0xDFC99E0)
#define DAPLNDLJPMP_HGBMJHECBPK_OFFSET UNITYSDK_OFFSET(0xDFD1310)
#define DAPLNDLJPMP_HGCKJNEGIFF_OFFSET UNITYSDK_OFFSET(0xDFCC7A0)
#define DAPLNDLJPMP_HHGALEOADPB_OFFSET UNITYSDK_OFFSET(0xDFC9D40)
#define DAPLNDLJPMP_HJCHLKEPJEK_OFFSET UNITYSDK_OFFSET(0xDFCF210)
#define DAPLNDLJPMP_HKFMBDGHCPC_OFFSET UNITYSDK_OFFSET(0xDFD04F0)
#define DAPLNDLJPMP_HKPABPDHLJM_OFFSET UNITYSDK_OFFSET(0xDFCD190)
#define DAPLNDLJPMP_HNCPDPJONPK_OFFSET UNITYSDK_OFFSET(0xDFCD6E0)
#define DAPLNDLJPMP_HNDFFHOFLKN_OFFSET UNITYSDK_OFFSET(0xDFCB4F0)
#define DAPLNDLJPMP_HOCDLIPLAEJ_OFFSET UNITYSDK_OFFSET(0xDFCE320)
#define DAPLNDLJPMP_HOKKCECGFLP_OFFSET UNITYSDK_OFFSET(0xDFD1610)
#define DAPLNDLJPMP_IAJHOCILAGE_OFFSET UNITYSDK_OFFSET(0xDFCD140)
#define DAPLNDLJPMP_IDCAJLIGFFE_OFFSET UNITYSDK_OFFSET(0xDFCCF10)
#define DAPLNDLJPMP_IDEOPNNGHNE_OFFSET UNITYSDK_OFFSET(0xDFD4400)
#define DAPLNDLJPMP_IEEJLNMOCAP_OFFSET UNITYSDK_OFFSET(0xDFC9B50)
#define DAPLNDLJPMP_IFFBCBMJNGF_OFFSET UNITYSDK_OFFSET(0xDFD1B90)
#define DAPLNDLJPMP_IIMMDLMLCJN_OFFSET UNITYSDK_OFFSET(0xDFCF0F0)
#define DAPLNDLJPMP_IPMFHCMJJMA_OFFSET UNITYSDK_OFFSET(0xDFCC130)
#define DAPLNDLJPMP_JAMBNNHPCBL_OFFSET UNITYSDK_OFFSET(0xDFD0440)
#define DAPLNDLJPMP_JCJNEMPJODA_OFFSET UNITYSDK_OFFSET(0xDFD2700)
#define DAPLNDLJPMP_JDENABCGMPN_OFFSET UNITYSDK_OFFSET(0xDFD0AA0)
#define DAPLNDLJPMP_JDIHJCFGOOP_OFFSET UNITYSDK_OFFSET(0xDFD26A0)
#define DAPLNDLJPMP_JIBAOHIGFLO_OFFSET UNITYSDK_OFFSET(0xDFD14E0)
#define DAPLNDLJPMP_JKDJFKBJMFN_OFFSET UNITYSDK_OFFSET(0xDFC9530)
#define DAPLNDLJPMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDFC9C10)
#define DAPLNDLJPMP_JNEHPLHFOEH_OFFSET UNITYSDK_OFFSET(0xDFCD8E0)
#define DAPLNDLJPMP_KADMNLLFHFH_OFFSET UNITYSDK_OFFSET(0xDFD3190)
#define DAPLNDLJPMP_KAOCGLFMILI_OFFSET UNITYSDK_OFFSET(0xDFC9800)
#define DAPLNDLJPMP_KCNJHJPKIGH_OFFSET UNITYSDK_OFFSET(0xDFD09F0)
#define DAPLNDLJPMP_KHFMPEOOOEH_OFFSET UNITYSDK_OFFSET(0xDFCDE20)
#define DAPLNDLJPMP_KKBDNPMFELM_OFFSET UNITYSDK_OFFSET(0xDFD1A40)
#define DAPLNDLJPMP_KNANDLHEHGN_OFFSET UNITYSDK_OFFSET(0xDFD27B0)
#define DAPLNDLJPMP_LCOLIJNNMPA_OFFSET UNITYSDK_OFFSET(0xDFC9190)
#define DAPLNDLJPMP_LDICFNGADNL_OFFSET UNITYSDK_OFFSET(0xDFCCEC0)
#define DAPLNDLJPMP_LEJDAJFMPLE_OFFSET UNITYSDK_OFFSET(0xDFCCE60)
#define DAPLNDLJPMP_LFFKLFADNGB_OFFSET UNITYSDK_OFFSET(0xDFD1230)
#define DAPLNDLJPMP_LIGDKHMECKB_OFFSET UNITYSDK_OFFSET(0xDFCD1E0)
#define DAPLNDLJPMP_LJKNAENCEBJ_OFFSET UNITYSDK_OFFSET(0xDFC8CD0)
#define DAPLNDLJPMP_LNLPIJBOLND_OFFSET UNITYSDK_OFFSET(0xDFCCDD0)
#define DAPLNDLJPMP_LPHMNCEGBCJ_OFFSET UNITYSDK_OFFSET(0xDFCF750)
#define DAPLNDLJPMP_MDKOMDMICNF_OFFSET UNITYSDK_OFFSET(0xDFCF990)
#define DAPLNDLJPMP_MEDKMKIJNJF_OFFSET UNITYSDK_OFFSET(0xDFD2800)
#define DAPLNDLJPMP_MFGHDMBAAHB_OFFSET UNITYSDK_OFFSET(0xDFC9080)
#define DAPLNDLJPMP_MPHDIPIFPBD_OFFSET UNITYSDK_OFFSET(0xDFCC620)
#define DAPLNDLJPMP_NAOCFEFJPHC_OFFSET UNITYSDK_OFFSET(0xDFD1750)
#define DAPLNDLJPMP_NCBIFNOGIJH_OFFSET UNITYSDK_OFFSET(0xDFD0A90)
#define DAPLNDLJPMP_NENOAMGGJJM_OFFSET UNITYSDK_OFFSET(0xDFCD870)
#define DAPLNDLJPMP_NINJFABHOFG_OFFSET UNITYSDK_OFFSET(0xDFCD400)
#define DAPLNDLJPMP_NMHHOBEJEIO_OFFSET UNITYSDK_OFFSET(0xDFD2650)
#define DAPLNDLJPMP_NNBPNOGCKFD_OFFSET UNITYSDK_OFFSET(0xDFD0D90)
#define DAPLNDLJPMP_NOIOHJHDLHL_OFFSET UNITYSDK_OFFSET(0xDFD3BD0)
#define DAPLNDLJPMP_OAMPLDFFEFH_OFFSET UNITYSDK_OFFSET(0xDFC98D0)
#define DAPLNDLJPMP_OFCLIKDKKFE_OFFSET UNITYSDK_OFFSET(0xDFCD0D0)
#define DAPLNDLJPMP_OGOJOHHAKDG_OFFSET UNITYSDK_OFFSET(0xDFCCAE0)
#define DAPLNDLJPMP_OIGLIPNAPPP_OFFSET UNITYSDK_OFFSET(0xDFCC850)
#define DAPLNDLJPMP_OKMDOONDPOG_OFFSET UNITYSDK_OFFSET(0xDFCC210)
#define DAPLNDLJPMP_OLKIGBIOLPN_OFFSET UNITYSDK_OFFSET(0xDFD2610)
#define DAPLNDLJPMP_PDCLLIOLHJH_OFFSET UNITYSDK_OFFSET(0xDFCF180)
#define DAPLNDLJPMP_PDDHKHHPEBJ_OFFSET UNITYSDK_OFFSET(0xDFCC500)
#define DAPLNDLJPMP_PEEPBFBHCMH_OFFSET UNITYSDK_OFFSET(0xDFCD2B0)
#define DAPLNDLJPMP_PIIOJGMDJOA_OFFSET UNITYSDK_OFFSET(0xDFC8AA0)
#define DAPLNDLJPMP_PLICLGMMFKC_OFFSET UNITYSDK_OFFSET(0xDFD00F0)
#define DAPLNDLJPMP_PLPIGDHGFLG_OFFSET UNITYSDK_OFFSET(0xDFD0790)
#define DAPLNDLJPMP_POLHAENCGAE_OFFSET UNITYSDK_OFFSET(0xDFCE810)

	class DAPLNDLJPMP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* DJKKDNMDLHA; // 0x10
		::Collections::Pooled::PooledSet_1<::PFACHJFCILN*>* HAKJNHDBAEJ; // 0x18
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* MGPDEOCGBBP; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HMPBAIAPDBE*>* FAPGHCOGHAE; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Action*>* DNKKMPLMGKM; // 0x30
		::System::Action* DFKLCJMKFDP; // 0x38
		::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* BKLIFNFIMCH; // 0x40
		::Collections::Pooled::PooledSet_1<::HMPBAIAPDBE*>* ODKKIJNPJPN; // 0x48
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* EACLBALLGKG; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>* EGKCDOKDFLF; // 0x58
		::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* KPMEPNPPJEL; // 0x60
		::System::Action* JHPCBCBEEJP; // 0x68
		::Collections::Pooled::PooledSet_1<::HMPBAIAPDBE*>* AJHDKDBJPMF; // 0x70
		::DAPLNDLJPMP_MKBHJHCIJFM* CAOENKPMDGN; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* MOPEOKJCNEG; // 0x80
		::DHGOECAECHA* NMCLBAPEEHJ; // 0x88
		::Collections::Pooled::PooledList_1<::HMPBAIAPDBE*>* FCPGMLDIFGP; // 0x90
		::RPG::Client::OnAssetOperationDelegate* NMJDHEPGOBK; // 0x98
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* FPHNHLOLHFP; // 0xA0
		::Collections::Pooled::PooledList_1<::HMPBAIAPDBE*>* NBJNLEFMNAI; // 0xA8
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* OHLFIKBKJHC; // 0xB0
		::System::Int32 JOKAEBBOAOB; // 0xB8
		::System::Int32 HKNKELFEACD; // 0xBC
		::System::Single OGCALJIBCNH; // 0xC0
		::System::Int32 KPEBPFGEKGP; // 0xC4
		::System::Int32 OFMNGOMJHDE; // 0xC8
		::System::Boolean LKHFDGMGGNO; // 0xCC
		::System::Boolean FLHLHLONDIA; // 0xCD
		::System::Boolean JPHGKGPDKGP; // 0xCE
		::System::Byte _padding0[0x1];
		::System::Int32 GPNDNOFLPBE; // 0xD0
		::System::Int32 GNHBMFJGLEK; // 0xD4
		::System::Boolean FJMFKJEIOIO; // 0xD8
		::System::Boolean MFMLPEOAMDM; // 0xD9
		::System::Byte _padding1[0x2];
		::System::Int32 BMMBPPJLIHC; // 0xDC
		::System::Single PEADODAGAAE; // 0xE0
		// static const ::System::String* LDGLJLAMFNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CTOR_OFFSET))(this);
		}

		static ::DAPLNDLJPMP* GGBLHEHJBDO()
		{
			return ((::DAPLNDLJPMP*(*)())((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GGBLHEHJBDO_OFFSET))();
		}

		::PFACHJFCILN* PIIOJGMDJOA(::PFACHJFCILN_PreloadType a1, ::RPG::GameCore::PreloadGroupType a2, ::System::UInt32 a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::PFACHJFCILN*(*)(::PVOID, ::PFACHJFCILN_PreloadType, ::RPG::GameCore::PreloadGroupType, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PIIOJGMDJOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CCCIJNIGHIP(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CCCIJNIGHIP_OFFSET))(this, a1);
		}

		::System::Void ELEMLILFMIH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_ELEMLILFMIH_OFFSET))(this, a1);
		}

		::System::Void MFGHDMBAAHB(::System::String* a1, ::PFACHJFCILN* a2, ::System::Single a3, ::System::Type* a4, ::System::Int32 a5, ::RPG::Client::GameObjectPoolUsage a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PFACHJFCILN*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MFGHDMBAAHB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JKDJFKBJMFN(::System::String* a1, ::PFACHJFCILN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PFACHJFCILN*, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JKDJFKBJMFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAOCGLFMILI(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KAOCGLFMILI_OFFSET))(this, a1);
		}

		::System::Void OAMPLDFFEFH(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OAMPLDFFEFH_OFFSET))(this, a1);
		}

		::System::Void GJDFIGLGPCH(::PFACHJFCILN* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GJDFIGLGPCH_OFFSET))(this, a1, a2);
		}

		::System::Void DNJLMJCHFLI(::PFACHJFCILN* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Action*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_DNJLMJCHFLI_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void IPMFHCMJJMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IPMFHCMJJMA_OFFSET))(this);
		}

		::System::Void GFIBAMAOBDA(::DAPLNDLJPMP_EPoolCapacityModifierType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DAPLNDLJPMP_EPoolCapacityModifierType, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GFIBAMAOBDA_OFFSET))(this, a1, a2);
		}

		::HMPBAIAPDBE* BNFBNLIONAF(::System::String* a1)
		{
			return ((::HMPBAIAPDBE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BNFBNLIONAF_OFFSET))(this, a1);
		}

		::System::Void FEKCPDHMEFF(::PFACHJFCILN_PreloadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FEKCPDHMEFF_OFFSET))(this, a1);
		}

		::System::Int32 PDDHKHHPEBJ(::PFACHJFCILN_PreloadType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PDDHKHHPEBJ_OFFSET))(this, a1);
		}

		::System::Void MPHDIPIFPBD(::System::Action* a1, ::DAPLNDLJPMP_ELoadingWaitType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::DAPLNDLJPMP_ELoadingWaitType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MPHDIPIFPBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HGCKJNEGIFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HGCKJNEGIFF_OFFSET))(this);
		}

		::System::Void OGOJOHHAKDG(::PFACHJFCILN_PreloadType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN_PreloadType, ::System::Action*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OGOJOHHAKDG_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNLPIJBOLND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LNLPIJBOLND_OFFSET))(this);
		}

		::System::Void BNHNPGJOMNN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BNHNPGJOMNN_OFFSET))(this, a1);
		}

		::System::Boolean LEJDAJFMPLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LEJDAJFMPLE_OFFSET))(this);
		}

		::System::Void LDICFNGADNL(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LDICFNGADNL_OFFSET))(this, a1);
		}

		::System::Void OFCLIKDKKFE(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OFCLIKDKKFE_OFFSET))(this, a1);
		}

		::System::Void HKPABPDHLJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HKPABPDHLJM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>* LIGDKHMECKB()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LIGDKHMECKB_OFFSET))(this);
		}

		::System::Void PEEPBFBHCMH(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PEEPBFBHCMH_OFFSET))(this, a1);
		}

		::System::Void HALGOLJAKCA(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HALGOLJAKCA_OFFSET))(this, a1);
		}

		::System::Void GMHKKNNNJNJ(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GMHKKNNNJNJ_OFFSET))(this, a1);
		}

		::System::Int32 FJDCPHBNDCG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FJDCPHBNDCG_OFFSET))(this);
		}

		::System::Int32 HNCPDPJONPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HNCPDPJONPK_OFFSET))(this);
		}

		::System::Int32 CCLDDDOKJNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CCLDDDOKJNF_OFFSET))(this);
		}

		::System::Void HNDFFHOFLKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HNDFFHOFLKN_OFFSET))(this);
		}

		::System::Void EHGAEJIDFNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_EHGAEJIDFNG_OFFSET))(this);
		}

		::System::Int32 OIGLIPNAPPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OIGLIPNAPPP_OFFSET))(this);
		}

		::System::Void KHFMPEOOOEH(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KHFMPEOOOEH_OFFSET))(this, a1);
		}

		::System::Void HOCDLIPLAEJ(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HOCDLIPLAEJ_OFFSET))(this, a1);
		}

		::System::Void BCLJGJPGGJB(::HMPBAIAPDBE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BCLJGJPGGJB_OFFSET))(this, a1, a2);
		}

		::System::Void AMLDAEHINAC(::HMPBAIAPDBE* a1, ::PFACHJFCILN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_AMLDAEHINAC_OFFSET))(this, a1, a2);
		}

		::System::Void GFIMLGLEOCE(::PFACHJFCILN* a1, ::PFACHJFCILN_PreloadType a2, ::PFACHJFCILN_PreloadType a3)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::PFACHJFCILN_PreloadType, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GFIMLGLEOCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNEHPLHFOEH(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JNEHPLHFOEH_OFFSET))(this, a1);
		}

		::System::Void GEHMBCCJGPM(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GEHMBCCJGPM_OFFSET))(this, a1);
		}

		::System::Void POLHAENCGAE(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_POLHAENCGAE_OFFSET))(this, a1);
		}

		::System::Void FDAMGEKFKHF(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FDAMGEKFKHF_OFFSET))(this, a1);
		}

		::System::Void FHCDHJNPNJH(::PFACHJFCILN* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FHCDHJNPNJH_OFFSET))(this, a1, a2);
		}

		::System::Void BOMFPAKOCDO(::PFACHJFCILN* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BOMFPAKOCDO_OFFSET))(this, a1, a2);
		}

		::System::Void DBABBPNLCPB(::PFACHJFCILN_PreloadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_DBABBPNLCPB_OFFSET))(this, a1);
		}

		::System::Int32 GGPLCMAOJMM(::PFACHJFCILN_PreloadType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GGPLCMAOJMM_OFFSET))(this, a1);
		}

		::RPG::Client::OnAssetOperationDelegate* PDCLLIOLHJH()
		{
			return ((::RPG::Client::OnAssetOperationDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PDCLLIOLHJH_OFFSET))(this);
		}

		::DHGOECAECHA* IIMMDLMLCJN()
		{
			return ((::DHGOECAECHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IIMMDLMLCJN_OFFSET))(this);
		}

		::System::Boolean HJCHLKEPJEK(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HJCHLKEPJEK_OFFSET))(this, a1);
		}

		::System::Void LPHMNCEGBCJ(::AIBOPLOBAFN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LPHMNCEGBCJ_OFFSET))(this, a1, a2);
		}

		::System::Void GJKJKEENODM(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GJKJKEENODM_OFFSET))(this, a1);
		}

		::System::Void IDCAJLIGFFE(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IDCAJLIGFFE_OFFSET))(this, a1);
		}

		::System::Void IAJHOCILAGE(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IAJHOCILAGE_OFFSET))(this, a1);
		}

		::System::Void MDKOMDMICNF(::HMPBAIAPDBE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MDKOMDMICNF_OFFSET))(this, a1, a2);
		}

		::System::Void PLICLGMMFKC(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PLICLGMMFKC_OFFSET))(this, a1);
		}

		::System::Single JAMBNNHPCBL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JAMBNNHPCBL_OFFSET))(this);
		}

		::System::Single FOJLOJEIKEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FOJLOJEIKEB_OFFSET))(this);
		}

		::System::Int32 NENOAMGGJJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NENOAMGGJJM_OFFSET))(this);
		}

		::System::Int32 BPBDJOBPHOA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BPBDJOBPHOA_OFFSET))(this);
		}

		static ::System::Single PLPIGDHGFLG(::DAPLNDLJPMP_EPoolCapacityModifierType a1)
		{
			return ((::System::Single(*)(::DAPLNDLJPMP_EPoolCapacityModifierType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_PLPIGDHGFLG_OFFSET))(a1);
		}

		::System::Void OKMDOONDPOG(::DAPLNDLJPMP_EPoolCapacityModifierType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DAPLNDLJPMP_EPoolCapacityModifierType, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OKMDOONDPOG_OFFSET))(this, a1, a2);
		}

		::System::Single HKFMBDGHCPC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HKFMBDGHCPC_OFFSET))(this, a1);
		}

		static ::System::Single ABNBLOJOPCF(::DAPLNDLJPMP_ELoadingWaitType a1)
		{
			return ((::System::Single(*)(::DAPLNDLJPMP_ELoadingWaitType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_ABNBLOJOPCF_OFFSET))(a1);
		}

		::System::Void KCNJHJPKIGH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KCNJHJPKIGH_OFFSET))(this, a1);
		}

		::Collections::Pooled::PooledSet_1<::PFACHJFCILN*>* CGGFKENMGJI()
		{
			return ((::Collections::Pooled::PooledSet_1<::PFACHJFCILN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CGGFKENMGJI_OFFSET))(this);
		}

		::System::Single NCBIFNOGIJH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NCBIFNOGIJH_OFFSET))(this);
		}

		::System::Single JDENABCGMPN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JDENABCGMPN_OFFSET))(this);
		}

		::System::Void FBBMJHKLGCB(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FBBMJHKLGCB_OFFSET))(this, a1);
		}

		::System::Void NINJFABHOFG(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NINJFABHOFG_OFFSET))(this, a1);
		}

		::System::Void HHGALEOADPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HHGALEOADPB_OFFSET))(this, a1);
		}

		::System::Void FGCMHCBPAOA(::PFACHJFCILN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FGCMHCBPAOA_OFFSET))(this, a1, a2);
		}

		::System::Void HEHFODAPPJP(::PFACHJFCILN* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HEHFODAPPJP_OFFSET))(this, a1, a2);
		}

		::System::Void JIBAOHIGFLO(::PFACHJFCILN* a1, ::HMPBAIAPDBE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JIBAOHIGFLO_OFFSET))(this, a1, a2);
		}

		::System::Void FHFPJLLIPJD(::PFACHJFCILN* a1, ::HMPBAIAPDBE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FHFPJLLIPJD_OFFSET))(this, a1, a2);
		}

		::System::Void HOKKCECGFLP(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HOKKCECGFLP_OFFSET))(this, a1);
		}

		::System::Void EDBFMDONOGL(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_EDBFMDONOGL_OFFSET))(this, a1);
		}

		::System::Void LFFKLFADNGB(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LFFKLFADNGB_OFFSET))(this, a1);
		}

		::System::Void HGBMJHECBPK(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HGBMJHECBPK_OFFSET))(this, a1);
		}

		::System::Void NAOCFEFJPHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NAOCFEFJPHC_OFFSET))(this);
		}

		::System::Boolean GMLCEFJPOHD(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GMLCEFJPOHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EKDHENOHOHN(::PFACHJFCILN* a1, ::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_EKDHENOHOHN_OFFSET))(this, a1, a2);
		}

		::System::Void NNBPNOGCKFD(::PFACHJFCILN* a1, ::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NNBPNOGCKFD_OFFSET))(this, a1, a2);
		}

		::System::Int32 KKBDNPMFELM(::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KKBDNPMFELM_OFFSET))(this, a1);
		}

		::System::Void BJGADHIDADJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BJGADHIDADJ_OFFSET))(this);
		}

		::System::Void IFFBCBMJNGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IFFBCBMJNGF_OFFSET))(this);
		}

		::System::Void OLKIGBIOLPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_OLKIGBIOLPN_OFFSET))(this);
		}

		::System::Void NMHHOBEJEIO(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NMHHOBEJEIO_OFFSET))(this, a1);
		}

		::System::Void JDIHJCFGOOP(::PFACHJFCILN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JDIHJCFGOOP_OFFSET))(this, a1, a2);
		}

		::System::Action* CGIBACPEIDO()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CGIBACPEIDO_OFFSET))(this);
		}

		::System::Void JCJNEMPJODA(::HMPBAIAPDBE* a1, ::PFACHJFCILN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_JCJNEMPJODA_OFFSET))(this, a1, a2);
		}

		::System::Void EOHOCMHCGKO(::HMPBAIAPDBE* a1, ::System::Boolean a2, ::PFACHJFCILN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::System::Boolean, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_EOHOCMHCGKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KNANDLHEHGN(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KNANDLHEHGN_OFFSET))(this, a1);
		}

		::System::Void MEDKMKIJNJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MEDKMKIJNJF_OFFSET))(this);
		}

		::System::Void BHIDOHPGIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BHIDOHPGIPL_OFFSET))(this);
		}

		::System::Boolean KADMNLLFHFH(::PFACHJFCILN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_KADMNLLFHFH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>* GKMDIHBLGHG()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GKMDIHBLGHG_OFFSET))(this);
		}

		::System::Single DECKFGPBEPP(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_DECKFGPBEPP_OFFSET))(this, a1, a2);
		}

		::System::Int32 FKEMIHAGHHA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FKEMIHAGHHA_OFFSET))(this, a1, a2);
		}

		::System::Void NOIOHJHDLHL(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_NOIOHJHDLHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PFACHJFCILN*>* ANBIHKBHNGG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PFACHJFCILN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_ANBIHKBHNGG_OFFSET))(this);
		}

		::System::Void GAJOGNKBPJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_GAJOGNKBPJC_OFFSET))(this);
		}

		::System::Void IDEOPNNGHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IDEOPNNGHNE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HADOHLNHHGB_OFFSET))(this);
		}

		::PFACHJFCILN* HCCOACGCJJI(::PFACHJFCILN_PreloadType a1, ::RPG::GameCore::PreloadGroupType a2, ::System::UInt32 a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::PFACHJFCILN*(*)(::PVOID, ::PFACHJFCILN_PreloadType, ::RPG::GameCore::PreloadGroupType, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_HCCOACGCJJI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LCOLIJNNMPA(::System::String* a1, ::PFACHJFCILN* a2, ::System::Single a3, ::System::Type* a4, ::System::Int32 a5, ::RPG::Client::GameObjectPoolUsage a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PFACHJFCILN*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LCOLIJNNMPA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EHFALEAJPOP(::System::String* a1, ::PFACHJFCILN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PFACHJFCILN*, ::System::Single))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_EHFALEAJPOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IEEJLNMOCAP(::PFACHJFCILN* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*, ::System::Action*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_IEEJLNMOCAP_OFFSET))(this, a1, a2);
		}

		::System::Void FHMKLHGLKNA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_FHMKLHGLKNA_OFFSET))(this, a1);
		}

		::System::Void LJKNAENCEBJ(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_LJKNAENCEBJ_OFFSET))(this, a1);
		}

		::HMPBAIAPDBE* COKHKHPDKCF(::System::String* a1, ::PFACHJFCILN* a2, ::System::Type* a3, ::System::Int32 a4, ::RPG::Client::GameObjectPoolUsage a5)
		{
			return ((::HMPBAIAPDBE*(*)(::PVOID, ::System::String*, ::PFACHJFCILN*, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_COKHKHPDKCF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BDGCPCJIDJL(::HMPBAIAPDBE* a1, ::PFACHJFCILN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_BDGCPCJIDJL_OFFSET))(this, a1, a2);
		}

		::System::Void CGCAJCJGGBM(::PFACHJFCILN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CGCAJCJGGBM_OFFSET))(this, a1);
		}

	};
