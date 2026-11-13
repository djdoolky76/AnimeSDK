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
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAPLNDLJPMP_ABNBLOJOPCF_OFFSET UNITYSDK_OFFSET(0x1B1359F0)
#define DAPLNDLJPMP_AMLDAEHINAC_OFFSET UNITYSDK_OFFSET(0x1B132F40)
#define DAPLNDLJPMP_ANBIHKBHNGG_OFFSET UNITYSDK_OFFSET(0x1B13A9F0)
#define DAPLNDLJPMP_BCLJGJPGGJB_OFFSET UNITYSDK_OFFSET(0x1B1331F0)
#define DAPLNDLJPMP_BDGCPCJIDJL_OFFSET UNITYSDK_OFFSET(0x1B13B880)
#define DAPLNDLJPMP_BHIDOHPGIPL_OFFSET UNITYSDK_OFFSET(0x1B139480)
#define DAPLNDLJPMP_BJGADHIDADJ_OFFSET UNITYSDK_OFFSET(0x1B1386F0)
#define DAPLNDLJPMP_BNFBNLIONAF_OFFSET UNITYSDK_OFFSET(0x1994CA60)
#define DAPLNDLJPMP_BNHNPGJOMNN_OFFSET UNITYSDK_OFFSET(0x1994D310)
#define DAPLNDLJPMP_BOMFPAKOCDO_OFFSET UNITYSDK_OFFSET(0x1B133110)
#define DAPLNDLJPMP_BPBDJOBPHOA_OFFSET UNITYSDK_OFFSET(0x1B1357F0)
#define DAPLNDLJPMP_CCCIJNIGHIP_OFFSET UNITYSDK_OFFSET(0x1994B7F0)
#define DAPLNDLJPMP_CCLDDDOKJNF_OFFSET UNITYSDK_OFFSET(0x1994D730)
#define DAPLNDLJPMP_CGCAJCJGGBM_OFFSET UNITYSDK_OFFSET(0x1B13C0C0)
#define DAPLNDLJPMP_CGGFKENMGJI_OFFSET UNITYSDK_OFFSET(0x1B135BC0)
#define DAPLNDLJPMP_CGIBACPEIDO_OFFSET UNITYSDK_OFFSET(0x1B139330)
#define DAPLNDLJPMP_COKHKHPDKCF_OFFSET UNITYSDK_OFFSET(0x1B13BE40)
#define DAPLNDLJPMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B13AA00)
#define DAPLNDLJPMP_DBABBPNLCPB_OFFSET UNITYSDK_OFFSET(0x1B133DB0)
#define DAPLNDLJPMP_DECKFGPBEPP_OFFSET UNITYSDK_OFFSET(0x1B139F50)
#define DAPLNDLJPMP_DNJLMJCHFLI_OFFSET UNITYSDK_OFFSET(0x1994BC40)
#define DAPLNDLJPMP_EDBFMDONOGL_OFFSET UNITYSDK_OFFSET(0x1B138220)
#define DAPLNDLJPMP_EHFALEAJPOP_OFFSET UNITYSDK_OFFSET(0x1B13B640)
#define DAPLNDLJPMP_EHGAEJIDFNG_OFFSET UNITYSDK_OFFSET(0x1994C110)
#define DAPLNDLJPMP_EKDHENOHOHN_OFFSET UNITYSDK_OFFSET(0x1B135E40)
#define DAPLNDLJPMP_ELEMLILFMIH_OFFSET UNITYSDK_OFFSET(0x1994B850)
#define DAPLNDLJPMP_EOHOCMHCGKO_OFFSET UNITYSDK_OFFSET(0x1B139390)
#define DAPLNDLJPMP_FBBMJHKLGCB_OFFSET UNITYSDK_OFFSET(0x1B135DD0)
#define DAPLNDLJPMP_FDAMGEKFKHF_OFFSET UNITYSDK_OFFSET(0x1B133320)
#define DAPLNDLJPMP_FEKCPDHMEFF_OFFSET UNITYSDK_OFFSET(0x1994CB10)
#define DAPLNDLJPMP_FGCMHCBPAOA_OFFSET UNITYSDK_OFFSET(0x1B137E50)
#define DAPLNDLJPMP_FHCDHJNPNJH_OFFSET UNITYSDK_OFFSET(0x1B1336C0)
#define DAPLNDLJPMP_FHFPJLLIPJD_OFFSET UNITYSDK_OFFSET(0x1B1380F0)
#define DAPLNDLJPMP_FHMKLHGLKNA_OFFSET UNITYSDK_OFFSET(0x1B13BB00)
#define DAPLNDLJPMP_FJDCPHBNDCG_OFFSET UNITYSDK_OFFSET(0x1994D690)
#define DAPLNDLJPMP_FKEMIHAGHHA_OFFSET UNITYSDK_OFFSET(0x1B13A840)
#define DAPLNDLJPMP_FOJLOJEIKEB_OFFSET UNITYSDK_OFFSET(0x1B1356D0)
#define DAPLNDLJPMP_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0x1B13B030)
#define DAPLNDLJPMP_GEHMBCCJGPM_OFFSET UNITYSDK_OFFSET(0x1B1335B0)
#define DAPLNDLJPMP_GFIBAMAOBDA_OFFSET UNITYSDK_OFFSET(0x1994C9D0)
#define DAPLNDLJPMP_GFIMLGLEOCE_OFFSET UNITYSDK_OFFSET(0x1B133640)
#define DAPLNDLJPMP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1994B610)
#define DAPLNDLJPMP_GGPLCMAOJMM_OFFSET UNITYSDK_OFFSET(0x1B1340F0)
#define DAPLNDLJPMP_GJDFIGLGPCH_OFFSET UNITYSDK_OFFSET(0x1994BBE0)
#define DAPLNDLJPMP_GJKJKEENODM_OFFSET UNITYSDK_OFFSET(0x1B1344D0)
#define DAPLNDLJPMP_GKMDIHBLGHG_OFFSET UNITYSDK_OFFSET(0x1B13A440)
#define DAPLNDLJPMP_GMHKKNNNJNJ_OFFSET UNITYSDK_OFFSET(0x1994D640)
#define DAPLNDLJPMP_GMLCEFJPOHD_OFFSET UNITYSDK_OFFSET(0x1B137890)
#define DAPLNDLJPMP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1B13B130)
#define DAPLNDLJPMP_HALGOLJAKCA_OFFSET UNITYSDK_OFFSET(0x1994D5F0)
#define DAPLNDLJPMP_HCCOACGCJJI_OFFSET UNITYSDK_OFFSET(0x1B13B170)
#define DAPLNDLJPMP_HEHFODAPPJP_OFFSET UNITYSDK_OFFSET(0x1B137F30)
#define DAPLNDLJPMP_HGBMJHECBPK_OFFSET UNITYSDK_OFFSET(0x1B137D60)
#define DAPLNDLJPMP_HGCKJNEGIFF_OFFSET UNITYSDK_OFFSET(0x1994CD30)
#define DAPLNDLJPMP_HHGALEOADPB_OFFSET UNITYSDK_OFFSET(0x1B1360E0)
#define DAPLNDLJPMP_HJCHLKEPJEK_OFFSET UNITYSDK_OFFSET(0x1B1341C0)
#define DAPLNDLJPMP_HKFMBDGHCPC_OFFSET UNITYSDK_OFFSET(0x1B1354E0)
#define DAPLNDLJPMP_HKPABPDHLJM_OFFSET UNITYSDK_OFFSET(0x1994D4A0)
#define DAPLNDLJPMP_HNCPDPJONPK_OFFSET UNITYSDK_OFFSET(0x1994D6E0)
#define DAPLNDLJPMP_HNDFFHOFLKN_OFFSET UNITYSDK_OFFSET(0x1994BDD0)
#define DAPLNDLJPMP_HOCDLIPLAEJ_OFFSET UNITYSDK_OFFSET(0x1B132830)
#define DAPLNDLJPMP_HOKKCECGFLP_OFFSET UNITYSDK_OFFSET(0x1B138170)
#define DAPLNDLJPMP_IAJHOCILAGE_OFFSET UNITYSDK_OFFSET(0x1B135090)
#define DAPLNDLJPMP_IDCAJLIGFFE_OFFSET UNITYSDK_OFFSET(0x1B133F30)
#define DAPLNDLJPMP_IDEOPNNGHNE_OFFSET UNITYSDK_OFFSET(0x1B13B0B0)
#define DAPLNDLJPMP_IEEJLNMOCAP_OFFSET UNITYSDK_OFFSET(0x1B13BA40)
#define DAPLNDLJPMP_IFFBCBMJNGF_OFFSET UNITYSDK_OFFSET(0x1B138740)
#define DAPLNDLJPMP_IIMMDLMLCJN_OFFSET UNITYSDK_OFFSET(0x1B133C90)
#define DAPLNDLJPMP_IPMFHCMJJMA_OFFSET UNITYSDK_OFFSET(0x1994C980)
#define DAPLNDLJPMP_JAMBNNHPCBL_OFFSET UNITYSDK_OFFSET(0x1B135430)
#define DAPLNDLJPMP_JCJNEMPJODA_OFFSET UNITYSDK_OFFSET(0x1B139340)
#define DAPLNDLJPMP_JDENABCGMPN_OFFSET UNITYSDK_OFFSET(0x1B135BE0)
#define DAPLNDLJPMP_JDIHJCFGOOP_OFFSET UNITYSDK_OFFSET(0x1B1392E0)
#define DAPLNDLJPMP_JIBAOHIGFLO_OFFSET UNITYSDK_OFFSET(0x1B138040)
#define DAPLNDLJPMP_JKDJFKBJMFN_OFFSET UNITYSDK_OFFSET(0x1994B9D0)
#define DAPLNDLJPMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1994BCA0)
#define DAPLNDLJPMP_JNEHPLHFOEH_OFFSET UNITYSDK_OFFSET(0x1B1338B0)
#define DAPLNDLJPMP_KADMNLLFHFH_OFFSET UNITYSDK_OFFSET(0x1B139DD0)
#define DAPLNDLJPMP_KAOCGLFMILI_OFFSET UNITYSDK_OFFSET(0x1994BA60)
#define DAPLNDLJPMP_KCNJHJPKIGH_OFFSET UNITYSDK_OFFSET(0x1B135B30)
#define DAPLNDLJPMP_KHFMPEOOOEH_OFFSET UNITYSDK_OFFSET(0x1994D800)
#define DAPLNDLJPMP_KKBDNPMFELM_OFFSET UNITYSDK_OFFSET(0x1B1385A0)
#define DAPLNDLJPMP_KNANDLHEHGN_OFFSET UNITYSDK_OFFSET(0x1B1393F0)
#define DAPLNDLJPMP_LCOLIJNNMPA_OFFSET UNITYSDK_OFFSET(0x1B13B2A0)
#define DAPLNDLJPMP_LDICFNGADNL_OFFSET UNITYSDK_OFFSET(0x1994D3E0)
#define DAPLNDLJPMP_LEJDAJFMPLE_OFFSET UNITYSDK_OFFSET(0x1994D380)
#define DAPLNDLJPMP_LFFKLFADNGB_OFFSET UNITYSDK_OFFSET(0x1B137C80)
#define DAPLNDLJPMP_LIGDKHMECKB_OFFSET UNITYSDK_OFFSET(0x1994D4F0)
#define DAPLNDLJPMP_LJKNAENCEBJ_OFFSET UNITYSDK_OFFSET(0x1B13BCD0)
#define DAPLNDLJPMP_LNLPIJBOLND_OFFSET UNITYSDK_OFFSET(0x1994D300)
#define DAPLNDLJPMP_LPHMNCEGBCJ_OFFSET UNITYSDK_OFFSET(0x1B1346F0)
#define DAPLNDLJPMP_MDKOMDMICNF_OFFSET UNITYSDK_OFFSET(0x1B134930)
#define DAPLNDLJPMP_MEDKMKIJNJF_OFFSET UNITYSDK_OFFSET(0x1B139440)
#define DAPLNDLJPMP_MFGHDMBAAHB_OFFSET UNITYSDK_OFFSET(0x1994B8C0)
#define DAPLNDLJPMP_MPHDIPIFPBD_OFFSET UNITYSDK_OFFSET(0x1994CBB0)
#define DAPLNDLJPMP_NAOCFEFJPHC_OFFSET UNITYSDK_OFFSET(0x1B1382B0)
#define DAPLNDLJPMP_NCBIFNOGIJH_OFFSET UNITYSDK_OFFSET(0x1B135BD0)
#define DAPLNDLJPMP_NENOAMGGJJM_OFFSET UNITYSDK_OFFSET(0x1B135780)
#define DAPLNDLJPMP_NINJFABHOFG_OFFSET UNITYSDK_OFFSET(0x1B135F40)
#define DAPLNDLJPMP_NMHHOBEJEIO_OFFSET UNITYSDK_OFFSET(0x1B139290)
#define DAPLNDLJPMP_NNBPNOGCKFD_OFFSET UNITYSDK_OFFSET(0x1B136030)
#define DAPLNDLJPMP_NOIOHJHDLHL_OFFSET UNITYSDK_OFFSET(0x1B13A890)
#define DAPLNDLJPMP_OAMPLDFFEFH_OFFSET UNITYSDK_OFFSET(0x1994BB30)
#define DAPLNDLJPMP_OFCLIKDKKFE_OFFSET UNITYSDK_OFFSET(0x1994D430)
#define DAPLNDLJPMP_OGOJOHHAKDG_OFFSET UNITYSDK_OFFSET(0x1994D000)
#define DAPLNDLJPMP_OIGLIPNAPPP_OFFSET UNITYSDK_OFFSET(0x1994CD80)
#define DAPLNDLJPMP_OKMDOONDPOG_OFFSET UNITYSDK_OFFSET(0x1B135980)
#define DAPLNDLJPMP_OLKIGBIOLPN_OFFSET UNITYSDK_OFFSET(0x1B139250)
#define DAPLNDLJPMP_PDCLLIOLHJH_OFFSET UNITYSDK_OFFSET(0x1B133D20)
#define DAPLNDLJPMP_PDDHKHHPEBJ_OFFSET UNITYSDK_OFFSET(0x1994CB60)
#define DAPLNDLJPMP_PEEPBFBHCMH_OFFSET UNITYSDK_OFFSET(0x1994D560)
#define DAPLNDLJPMP_PIIOJGMDJOA_OFFSET UNITYSDK_OFFSET(0x1994B750)
#define DAPLNDLJPMP_PLICLGMMFKC_OFFSET UNITYSDK_OFFSET(0x1B1350E0)
#define DAPLNDLJPMP_PLPIGDHGFLG_OFFSET UNITYSDK_OFFSET(0x1B135860)
#define DAPLNDLJPMP_POLHAENCGAE_OFFSET UNITYSDK_OFFSET(0x1B132D20)

inline static constexpr unsigned int DAPLNDLJPMP_TypeDefinitionIndex = 60962;

	class DAPLNDLJPMP : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledSet_1<::HMPBAIAPDBE*>* ODKKIJNPJPN; // 0x10
		::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* BKLIFNFIMCH; // 0x18
		::Collections::Pooled::PooledList_1<::HMPBAIAPDBE*>* NBJNLEFMNAI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HMPBAIAPDBE*>* FAPGHCOGHAE; // 0x28
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* FPHNHLOLHFP; // 0x30
		::DAPLNDLJPMP_MKBHJHCIJFM* CAOENKPMDGN; // 0x38
		::System::Collections::Generic::List_1<::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* KPMEPNPPJEL; // 0x40
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* MGPDEOCGBBP; // 0x48
		::System::Action* DFKLCJMKFDP; // 0x50
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* EACLBALLGKG; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::PreloadGroupScoreConfig*>* EGKCDOKDFLF; // 0x60
		::Collections::Pooled::PooledSet_1<::HMPBAIAPDBE*>* AJHDKDBJPMF; // 0x68
		::Collections::Pooled::PooledList_1<::HMPBAIAPDBE*>* FCPGMLDIFGP; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Collections::Pooled::PooledList_1<::PFACHJFCILN*>*>* MOPEOKJCNEG; // 0x78
		::RPG::Client::OnAssetOperationDelegate* NMJDHEPGOBK; // 0x80
		::DHGOECAECHA* NMCLBAPEEHJ; // 0x88
		::Il2CppArray<::System::Single>* DJKKDNMDLHA; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Action*>* DNKKMPLMGKM; // 0x98
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* OHLFIKBKJHC; // 0xA0
		::Collections::Pooled::PooledSet_1<::PFACHJFCILN*>* HAKJNHDBAEJ; // 0xA8
		::System::Action* JHPCBCBEEJP; // 0xB0
		::System::Boolean JPHGKGPDKGP; // 0xB8
		::System::Boolean FLHLHLONDIA; // 0xB9
		::System::Byte _padding0[0x2];
		::System::Single OGCALJIBCNH; // 0xBC
		::System::Int32 GNHBMFJGLEK; // 0xC0
		::System::Int32 OFMNGOMJHDE; // 0xC4
		::System::Boolean FJMFKJEIOIO; // 0xC8
		::System::Boolean LKHFDGMGGNO; // 0xC9
		::System::Boolean MFMLPEOAMDM; // 0xCA
		::System::Byte _padding1[0x1];
		::System::Int32 GPNDNOFLPBE; // 0xCC
		::System::Int32 BMMBPPJLIHC; // 0xD0
		::System::Single PEADODAGAAE; // 0xD4
		::System::Int32 HKNKELFEACD; // 0xD8
		::System::Int32 JOKAEBBOAOB; // 0xDC
		::System::Int32 KPEBPFGEKGP; // 0xE0
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

		::System::Action_2<::PFACHJFCILN*, ::System::Boolean>* CGIBACPEIDO()
		{
			return ((::System::Action_2<::PFACHJFCILN*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_CGIBACPEIDO_OFFSET))(this);
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
