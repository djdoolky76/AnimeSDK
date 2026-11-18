#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIBCEMJODDD_BNJNGGJICPE.h"
#include "unitysdk/CHHAEBJKNNH.h"
#include "unitysdk/CKCMDIFIPDP.h"
#include "unitysdk/DEHFOAMKBOL.h"
#include "unitysdk/EKPCBCABNNJ.h"
#include "unitysdk/EPCBKDFGMAP.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/ICOBHHOCPHM.h"
#include "unitysdk/LOCFBJHPDND.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/NPGFCBHOLJE.h"
#include "unitysdk/PNDMHFGFJEB.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IJBOMPDBFHA.h"

class CBJCBKKAJOH;
class CJOALINCCMM;
class DMLLGKLKDCK;
class IHPELIJBNAH;
class KBALNFBNAFI;
class LOEOKOBPNBA;
class NPCStreamingProxy;
class OAMAMDGEJKH;
namespace MoleMole { class DynamicBoneGroup; }
namespace MoleMole { class MDBClothToRenderersMapping; }
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define GEIHCPAOKKK_ACBAKIPCMLJ_OFFSET UNITYSDK_OFFSET(0x13DD2380)
#define GEIHCPAOKKK_AOGCCJDELGD_OFFSET UNITYSDK_OFFSET(0x13DCE3E0)
#define GEIHCPAOKKK_BFMFHIPHJDB_OFFSET UNITYSDK_OFFSET(0x13DD0310)
#define GEIHCPAOKKK_BNBEHHPBGDP_OFFSET UNITYSDK_OFFSET(0x13DCE550)
#define GEIHCPAOKKK_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x13DCD980)
#define GEIHCPAOKKK_DDHKGBEFBKM_OFFSET UNITYSDK_OFFSET(0x13DD1B10)
#define GEIHCPAOKKK_DGEGLHGJALC_OFFSET UNITYSDK_OFFSET(0x13DCF440)
#define GEIHCPAOKKK_DIBMBMLMDIP_OFFSET UNITYSDK_OFFSET(0x13DCED50)
#define GEIHCPAOKKK_DKGGDJEIOND_OFFSET UNITYSDK_OFFSET(0x13DD1470)
#define GEIHCPAOKKK_EANBBCJCOFC_OFFSET UNITYSDK_OFFSET(0x13DD0890)
#define GEIHCPAOKKK_EEIFEAHDNIF_OFFSET UNITYSDK_OFFSET(0x13DD06F0)
#define GEIHCPAOKKK_EFAGGNLGIFP_OFFSET UNITYSDK_OFFSET(0x13DD14F0)
#define GEIHCPAOKKK_FGGDFIFKHAK_OFFSET UNITYSDK_OFFSET(0x13DCF0E0)
#define GEIHCPAOKKK_FNGDMKPLNKM_OFFSET UNITYSDK_OFFSET(0x13DCF400)
#define GEIHCPAOKKK_FOBCIGOMANC_OFFSET UNITYSDK_OFFSET(0x13DD1D00)
#define GEIHCPAOKKK_GALGFCPKMGC_1_OFFSET UNITYSDK_OFFSET(0x13DD1FE0)
#define GEIHCPAOKKK_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13DCE000)
#define GEIHCPAOKKK_GCPDMBKJDGC_OFFSET UNITYSDK_OFFSET(0x13DCFC40)
#define GEIHCPAOKKK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13DCD0C0)
#define GEIHCPAOKKK_GGNONOLIEEA_OFFSET UNITYSDK_OFFSET(0x13DD1B70)
#define GEIHCPAOKKK_GHCOFEPEIBP_OFFSET UNITYSDK_OFFSET(0x13DD2370)
#define GEIHCPAOKKK_GIDLPKDLECH_OFFSET UNITYSDK_OFFSET(0x13DCFE70)
#define GEIHCPAOKKK_GJDFMDFCBKA_OFFSET UNITYSDK_OFFSET(0x13DCF5D0)
#define GEIHCPAOKKK_HBPEJNAKICN_OFFSET UNITYSDK_OFFSET(0x13DCFE40)
#define GEIHCPAOKKK_HFLHIEOELPH_OFFSET UNITYSDK_OFFSET(0x13DD0B30)
#define GEIHCPAOKKK_HOBAANNDFGE_OFFSET UNITYSDK_OFFSET(0x13DD1680)
#define GEIHCPAOKKK_IADDEPPGHPD_OFFSET UNITYSDK_OFFSET(0x13DD1260)
#define GEIHCPAOKKK_IHBPFGHPJJP_OFFSET UNITYSDK_OFFSET(0x13DCDE20)
#define GEIHCPAOKKK_IIPHHHLPPJO_OFFSET UNITYSDK_OFFSET(0x13DD0A70)
#define GEIHCPAOKKK_IJMJNCGMLHI_OFFSET UNITYSDK_OFFSET(0x13DCBC10)
#define GEIHCPAOKKK_IKCKJGACLHJ_OFFSET UNITYSDK_OFFSET(0x13DCDB40)
#define GEIHCPAOKKK_IPMOMMJPOGM_OFFSET UNITYSDK_OFFSET(0x13DCF5E0)
#define GEIHCPAOKKK_JABNCBMGIAI_OFFSET UNITYSDK_OFFSET(0x13DCF240)
#define GEIHCPAOKKK_JBJAPLOEMGK_OFFSET UNITYSDK_OFFSET(0x13DCF9C0)
#define GEIHCPAOKKK_JCFFNMGEPJB_OFFSET UNITYSDK_OFFSET(0x13DCEF10)
#define GEIHCPAOKKK_JCJHCEBFNAJ_OFFSET UNITYSDK_OFFSET(0x13DD1CF0)
#define GEIHCPAOKKK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13DCF930)
#define GEIHCPAOKKK_JLCCJELKGDC_OFFSET UNITYSDK_OFFSET(0x13DD1480)
#define GEIHCPAOKKK_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x13DCEF20)
#define GEIHCPAOKKK_JLNLOHBMNNN_OFFSET UNITYSDK_OFFSET(0x13DD08B0)
#define GEIHCPAOKKK_JNDBNGKBBFE_OFFSET UNITYSDK_OFFSET(0x13DCE5C0)
#define GEIHCPAOKKK_JNDFIEKDLKP_OFFSET UNITYSDK_OFFSET(0x13DD1670)
#define GEIHCPAOKKK_JOGMDALOBOA_OFFSET UNITYSDK_OFFSET(0x13DCE5D0)
#define GEIHCPAOKKK_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x13DCF600)
#define GEIHCPAOKKK_KAIIMAJPHDC_OFFSET UNITYSDK_OFFSET(0x13DD15E0)
#define GEIHCPAOKKK_KJKIHNBLLAA_OFFSET UNITYSDK_OFFSET(0x13DD0700)
#define GEIHCPAOKKK_LDGACKHGEMG_OFFSET UNITYSDK_OFFSET(0x13DCBE20)
#define GEIHCPAOKKK_LJNFLLJLHLL_OFFSET UNITYSDK_OFFSET(0x13DD1500)
#define GEIHCPAOKKK_LMAPCPIJLAH_OFFSET UNITYSDK_OFFSET(0x13DCFC50)
#define GEIHCPAOKKK_LNBEKAKCEAM_OFFSET UNITYSDK_OFFSET(0x13DD1B00)
#define GEIHCPAOKKK_LNPHAEDINJJ_OFFSET UNITYSDK_OFFSET(0x13DCD670)
#define GEIHCPAOKKK_LPCJCOHDKMI_OFFSET UNITYSDK_OFFSET(0x13DD1850)
#define GEIHCPAOKKK_MCHHIOEEDOK_OFFSET UNITYSDK_OFFSET(0x13DCFF10)
#define GEIHCPAOKKK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13DCFBB0)
#define GEIHCPAOKKK_MHKEMOPKIHE_OFFSET UNITYSDK_OFFSET(0x13DCCF40)
#define GEIHCPAOKKK_MIOCNEKHFIJ_OFFSET UNITYSDK_OFFSET(0x13DCF9E0)
#define GEIHCPAOKKK_MNNOJHDGFFN_OFFSET UNITYSDK_OFFSET(0x13DD0A50)
#define GEIHCPAOKKK_NDEIMLEMLHA_OFFSET UNITYSDK_OFFSET(0x13DCD5E0)
#define GEIHCPAOKKK_NINGBLLMCKG_OFFSET UNITYSDK_OFFSET(0x13DCE800)
#define GEIHCPAOKKK_NJANNLHHGFB_OFFSET UNITYSDK_OFFSET(0x13DCED40)
#define GEIHCPAOKKK_NJNOEFEBHGP_OFFSET UNITYSDK_OFFSET(0x13DD1660)
#define GEIHCPAOKKK_NPDCHPMNKOK_OFFSET UNITYSDK_OFFSET(0x13DCFE50)
#define GEIHCPAOKKK_OAHMNPPCEKO_OFFSET UNITYSDK_OFFSET(0x13DCF9B0)
#define GEIHCPAOKKK_ODPCFCLCEMD_OFFSET UNITYSDK_OFFSET(0x13DD0B20)
#define GEIHCPAOKKK_OEIAEDAOLBA_OFFSET UNITYSDK_OFFSET(0x13DD1020)
#define GEIHCPAOKKK_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x13DCD6B0)
#define GEIHCPAOKKK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13DCA2B0)
#define GEIHCPAOKKK_PHAHNPKBFPG_OFFSET UNITYSDK_OFFSET(0x13DD1D10)
#define GEIHCPAOKKK_PJDGCKHMBBL_OFFSET UNITYSDK_OFFSET(0x13DCF5F0)
#define GEIHCPAOKKK_PMGADDFGBCM_OFFSET UNITYSDK_OFFSET(0x13DCF3F0)
#define GEIHCPAOKKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DCD110)
#define GEIHCPAOKKK__CTOR_OFFSET UNITYSDK_OFFSET(0x13DCD190)

inline static constexpr unsigned int GEIHCPAOKKK_TypeDefinitionIndex = 64166;

class GEIHCPAOKKK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* LEOBBCNCMPN; // 0x0
	// static const ::System::String* DCJMMJGNJCM; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x22; // 0x0
	::System::String* AHNGFBPINAK; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* DOBBMEBAAFM; // 0x50
	::UnityEngine::Transform* AFLAODBKOCK; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HMLHBCNIKPI; // 0x60
	::UnityEngine::Collider* ALBOBDDMFPN; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* CBEKFMMNFNB; // 0x70
	::MoleMole::MDBClothToRenderersMapping* HAIKGMCNHNG; // 0x78
	::MoleMole::MonoGhostEffect* EBMEDLCMOMA; // 0x80
	::MoleMole::MonoEntityModelModifier* _FEMNLCKFHFF_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::OAMAMDGEJKH*>* MJPDCKOPEMF; // 0x90
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* FFCPEFOLHIA; // 0x98
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::IHPELIJBNAH*>* GDGPOMPCEKJ; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* JKNEPDPBPNH; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::PNDMHFGFJEB>*>* CLKMDOIIFHP; // 0xB0
	::UnityEngine::GameObject* JCFADCIKCOM; // 0xB8
	::System::Action_1<::System::Boolean>* CFIHCHKCCGC; // 0xC0
	::OAMAMDGEJKH* PHHPIJBPFEC; // 0xC8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::CKCMDIFIPDP>* CAELHIMEFPK; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* ODNHONPDCEL; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* GCFKMHHGGJC; // 0xE0
	::NPCStreamingProxy* FNNKNHMGAFI; // 0xE8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::List_1<::DEHFOAMKBOL>*>* DNCPCHNBBDH; // 0xF0
	::UnityEngine::MdbComponent* GHCLIJIMJJJ; // 0xF8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean>* JEAGFCBPJHN; // 0x100
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JEFNCKDJGDD; // 0x108
	::Foundation::AssetPath KHNILJHEHCN; // 0x110
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* FLENFHLCIPC; // 0x120
	::Il2CppArray<::UnityEngine::Light*>* KMKEPJKPCGM; // 0x128
	::UnityEngine::GameObject* NHGEGANPLKO; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* EINGHJEEMEI; // 0x138
	::LOEOKOBPNBA* ECEANGIALBM; // 0x140
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* HGNNPPAEIIF; // 0x148
	::Foundation::AssetPath CCEEANCEPEP; // 0x150
	::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* LNGEILIIMPP; // 0x160
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* DPBKGOLBOIG; // 0x168
	::System::Collections::Generic::List_1<::LOCFBJHPDND>* AOPFFBKOHDP; // 0x170
	::MoleMole::MonoEntityColliderManager* KLHIDOHGKLB; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* NHAFPCJLENM; // 0x180
	::UnityEngine::Collider* JAFBJABCKHM; // 0x188
	::DMLLGKLKDCK* PNOECBCPOHC; // 0x190
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OHBCKIJOFNB; // 0x198
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KBALNFBNAFI*>* NEHKAMCINCN; // 0x1A0
	::UnityEngine::Transform* DHEBNNLJNLG; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::CHHAEBJKNNH, ::CJOALINCCMM*>* MOGBOLJAMFG; // 0x1B0
	::UnityEngine::Transform* ILDFEIAMNIC; // 0x1B8
	::Il2CppArray<::UnityEngine::Renderer*>* MIBMIBAMHDE; // 0x1C0
	::UnityEngine::GameObject* FFAJHOCCCKC; // 0x1C8
	::Il2CppArray<::UnityEngine::Collider*>* EPLIDGFHBCE; // 0x1D0
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* CLHDBJEAONP; // 0x1D8
	::KBALNFBNAFI* OHDDEBPDLPP; // 0x1E0
	::System::Int64 FCFKNAJJHLD; // 0x1E8
	::System::Single PKOIOKMAJML; // 0x1F0
	::EPCBKDFGMAP NAEDDKEHLBL; // 0x1F4
	::System::Single MJNEHHCPPIJ; // 0x1F8
	::System::Single NPCMPAGMNOP; // 0x1FC
	::UnityEngine::Vector3 MJFOOBLHLPJ; // 0x200
	::System::Single PKBCLEEHPCA; // 0x20C
	::UnityEngine::RigidbodyConstraints OGFGDJJCALM; // 0x210
	::System::Single NIJECIADNME; // 0x214
	::System::Boolean FHEFEAJJIBC; // 0x218
	::System::Boolean PPBNKJCPGFM; // 0x219
	::System::Boolean PJFPACOEIMC; // 0x21A
	::System::Boolean DHHKDCDLLFD; // 0x21B
	::System::Int32 EMLDFJBGJOE; // 0x21C
	::System::Single BIPLEJIGMOG; // 0x220
	::UnityEngine::Vector3 IADGHPECHML; // 0x224
	::UnityEngine::Vector3 EBKHHBCNDIA; // 0x230
	::System::Boolean LPAGMHJPBIC; // 0x23C
	::System::Boolean IJGGLEMHGAF; // 0x23D
	::System::Boolean OEBEHIDFODH; // 0x23E
	::System::Boolean DHMCKKJOEFJ; // 0x23F
	::UnityEngine::Vector3 DJIFPKOPFLC; // 0x240
	::UnityEngine::Vector3 DCCGJECPPDA; // 0x24C
	::System::Boolean PHJCBGMGEDK; // 0x258
	::System::Boolean NIENKMLDCDB; // 0x259
	::System::Boolean GEJKLMOINLO; // 0x25A
	::System::Boolean GNNLHKOINLG; // 0x25B
	::System::Boolean KNOLPHJFJML; // 0x25C
	::System::Byte _padding0[0x3];
	::System::Single JJODDOPJGGP; // 0x260
	::System::Boolean PNFLIAAKFDF; // 0x264
	::System::Boolean HKMGOJFCCNK; // 0x265
	::System::Boolean LHBNNHAIJCM; // 0x266
	::System::Boolean PEPMJMMAGCF; // 0x267
	::System::Single JNONCIBIOPE; // 0x268
	::ICOBHHOCPHM FOJFFJGCMPK; // 0x26C
	::AIBCEMJODDD_BNJNGGJICPE CMAPANJMFDF; // 0x270
	::System::Boolean IKHOMJKHEBM; // 0x274
	::System::Boolean OIGJCAFICBF; // 0x275
	::System::Boolean LGJBGKJGOCG; // 0x276
	::System::Boolean OEEBEGDOLDK; // 0x277
	::UnityEngine::PhysicMaterialCombine NJNCPCCMEHA; // 0x278
	::UnityEngine::Vector3 DLJDBOIFHIH; // 0x27C
	::System::Int32 NMMOAGHHJNB; // 0x288
	::System::Boolean DMJMEDBHBAM; // 0x28C
	::System::Boolean MDPDNMEDDAD; // 0x28D
	::System::Boolean KEBGFPEKBCG; // 0x28E
	::System::Boolean BLGGJFNAAFI; // 0x28F
	::EKPCBCABNNJ PDKMPOEOJJG; // 0x290
	::System::Int32 BBNJENHEOEP; // 0x294
	::System::Single CKCKFGCGOGI; // 0x298
	::UnityEngine::Quaternion NOILGJCNMHK; // 0x29C
	::System::Single LJOAMFGPGDJ; // 0x2AC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIHCPAOKKK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GETCLASSID_OFFSET))(this);
	}

	::System::Void NDEIMLEMLHA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_NDEIMLEMLHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single LNPHAEDINJJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LNPHAEDINJJ_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_COBPIICGJJA_OFFSET))(this);
	}

	::UnityEngine::Vector3 IKCKJGACLHJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IKCKJGACLHJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 IHBPFGHPJJP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IHBPFGHPJJP_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::Foundation::AssetPath BLIGEBLANDA, ::System::Single CLMNLPKFBFA, ::System::Boolean OECHNBLPKLB, ::System::Boolean IGMOPAMBCAK, ::System::Boolean KEBGFPEKBCG, ::MoleMole::MonoEntityModelModifier* BEOFKLACFGE, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* JMKEMGKMGGI, ::System::Boolean PHJCBGMGEDK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GALGFCPKMGC_OFFSET))(this, CKPGOKHECCH, CFJFMMGPGKE, BLIGEBLANDA, CLMNLPKFBFA, OECHNBLPKLB, IGMOPAMBCAK, KEBGFPEKBCG, BEOFKLACFGE, JMKEMGKMGGI, PHJCBGMGEDK);
	}

	::System::Boolean AOGCCJDELGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_AOGCCJDELGD_OFFSET))(this);
	}

	::System::Void JNDBNGKBBFE(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JNDBNGKBBFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::OAMAMDGEJKH* JOGMDALOBOA()
	{
		return ((::OAMAMDGEJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JOGMDALOBOA_OFFSET))(this);
	}

	::System::Boolean NINGBLLMCKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_NINGBLLMCKG_OFFSET))(this);
	}

	::System::Void NJANNLHHGFB(::UnityEngine::Collider* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_NJANNLHHGFB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DIBMBMLMDIP(::OAMAMDGEJKH* HODAIDNDKHD, ::System::Boolean CPNDAKKGLCH)
	{
		return ((::System::Void(*)(::PVOID, ::OAMAMDGEJKH*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_DIBMBMLMDIP_OFFSET))(this, HODAIDNDKHD, CPNDAKKGLCH);
	}

	::UnityEngine::Quaternion JCFFNMGEPJB()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JCFFNMGEPJB_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean FGGDFIFKHAK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_FGGDFIFKHAK_OFFSET))(this);
	}

	::System::Boolean JABNCBMGIAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JABNCBMGIAI_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Light*>* PMGADDFGBCM()
	{
		return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_PMGADDFGBCM_OFFSET))(this);
	}

	::UnityEngine::Vector3 FNGDMKPLNKM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_FNGDMKPLNKM_OFFSET))(this);
	}

	::System::Void DGEGLHGJALC(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_DGEGLHGJALC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GJDFMDFCBKA(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GJDFMDFCBKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoEntityModelModifier* IPMOMMJPOGM()
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IPMOMMJPOGM_OFFSET))(this);
	}

	::MoleMole::MonoEntityColliderManager* PJDGCKHMBBL()
	{
		return ((::MoleMole::MonoEntityColliderManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_PJDGCKHMBBL_OFFSET))(this);
	}

	::UnityEngine::Vector3 JOJDEGMHKKD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JOJDEGMHKKD_OFFSET))(this);
	}

	static ::GEIHCPAOKKK* JFDOOELFAOA()
	{
		return ((::GEIHCPAOKKK*(*)())((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::Collider* OAHMNPPCEKO()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_OAHMNPPCEKO_OFFSET))(this);
	}

	::System::Void MHKEMOPKIHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_MHKEMOPKIHE_OFFSET))(this);
	}

	::UnityEngine::Vector3 JBJAPLOEMGK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JBJAPLOEMGK_OFFSET))(this);
	}

	static ::System::Boolean MIOCNEKHFIJ(::UnityEngine::GameObject* JEIDPPCEHLD, ::IJBOMPDBFHA& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::IJBOMPDBFHA&))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_MIOCNEKHFIJ_OFFSET))(JEIDPPCEHLD, HODAIDNDKHD);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GCPDMBKJDGC(::Il2CppArray<::UnityEngine::Collider*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GCPDMBKJDGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* LMAPCPIJLAH()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LMAPCPIJLAH_OFFSET))(this);
	}

	::System::Single HBPEJNAKICN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_HBPEJNAKICN_OFFSET))(this);
	}

	::UnityEngine::Vector3 NPDCHPMNKOK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_NPDCHPMNKOK_OFFSET))(this);
	}

	::UnityEngine::Vector3 GIDLPKDLECH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GIDLPKDLECH_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_OKEDOCPENDA_OFFSET))(this);
	}

	static ::System::Boolean MCHHIOEEDOK(::UnityEngine::GameObject* JEIDPPCEHLD, ::IJBOMPDBFHA& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::IJBOMPDBFHA&))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_MCHHIOEEDOK_OFFSET))(JEIDPPCEHLD, HODAIDNDKHD);
	}

	static ::System::Boolean BFMFHIPHJDB(::UnityEngine::GameObject* JEIDPPCEHLD, ::IJBOMPDBFHA& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::IJBOMPDBFHA&))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_BFMFHIPHJDB_OFFSET))(JEIDPPCEHLD, HODAIDNDKHD);
	}

	::System::Void EEIFEAHDNIF(::UnityEngine::Collider* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_EEIFEAHDNIF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJKIHNBLLAA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_KJKIHNBLLAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EANBBCJCOFC(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_EANBBCJCOFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JLNLOHBMNNN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JLNLOHBMNNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNNOJHDGFFN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_MNNOJHDGFFN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IIPHHHLPPJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IIPHHHLPPJO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* ODPCFCLCEMD()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_ODPCFCLCEMD_OFFSET))(this);
	}

	::System::Void HFLHIEOELPH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_HFLHIEOELPH_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::IJBOMPDBFHA OEIAEDAOLBA(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::IJBOMPDBFHA(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_OEIAEDAOLBA_OFFSET))(OHPJHPEOFLD);
	}

	::System::Boolean IADDEPPGHPD(::MoleMole::GameplayTag AELLPLBJELA, ::OAMAMDGEJKH*& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::OAMAMDGEJKH*&))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IADDEPPGHPD_OFFSET))(this, AELLPLBJELA, HODAIDNDKHD);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* DKGGDJEIOND()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_DKGGDJEIOND_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLCCJELKGDC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JLCCJELKGDC_OFFSET))(this);
	}

	::System::Boolean EFAGGNLGIFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_EFAGGNLGIFP_OFFSET))(this);
	}

	::UnityEngine::Vector3 LJNFLLJLHLL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LJNFLLJLHLL_OFFSET))(this);
	}

	::IJBOMPDBFHA KAIIMAJPHDC()
	{
		return ((::IJBOMPDBFHA(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_KAIIMAJPHDC_OFFSET))(this);
	}

	::System::Void NJNOEFEBHGP(::Il2CppArray<::UnityEngine::Light*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_NJNOEFEBHGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JNDFIEKDLKP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JNDFIEKDLKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDGACKHGEMG(::System::Collections::Generic::Dictionary_2<::NPGFCBHOLJE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CBJCBKKAJOH*>*>* NPFFGPBPAHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NPGFCBHOLJE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CBJCBKKAJOH*>*>*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LDGACKHGEMG_OFFSET))(this, NPFFGPBPAHM);
	}

	::System::Void HOBAANNDFGE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_HOBAANNDFGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LPCJCOHDKMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LPCJCOHDKMI_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Collider*>* LNBEKAKCEAM()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_LNBEKAKCEAM_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* BNBEHHPBGDP()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_BNBEHHPBGDP_OFFSET))(this);
	}

	::System::Void DDHKGBEFBKM(::System::Boolean DNENFHFJFAN, ::AIBCEMJODDD_BNJNGGJICPE OMHMJIGAMFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::AIBCEMJODDD_BNJNGGJICPE))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_DDHKGBEFBKM_OFFSET))(this, DNENFHFJFAN, OMHMJIGAMFG);
	}

	::System::Boolean GGNONOLIEEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GGNONOLIEEA_OFFSET))(this);
	}

	::UnityEngine::Collider* JCJHCEBFNAJ()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_JCJHCEBFNAJ_OFFSET))(this);
	}

	::System::Void FOBCIGOMANC(::MoleMole::MonoEntityColliderManager* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_FOBCIGOMANC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PHAHNPKBFPG(::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*& ILIGPJJDIMP, ::System::Boolean AEOJEGDHGKE, ::System::Func_2<::OAMAMDGEJKH*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*&, ::System::Boolean, ::System::Func_2<::OAMAMDGEJKH*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_PHAHNPKBFPG_OFFSET))(this, ILIGPJJDIMP, AEOJEGDHGKE, PNPMMLNCDNK);
	}

	::System::Void GALGFCPKMGC_1(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::String* BLIGEBLANDA, ::System::Single CLMNLPKFBFA, ::System::Boolean OECHNBLPKLB, ::System::Boolean IGMOPAMBCAK, ::System::Boolean KEBGFPEKBCG, ::MoleMole::MonoEntityModelModifier* BEOFKLACFGE, ::System::Collections::Generic::List_1<::System::String*>* JMKEMGKMGGI, ::System::Boolean PHJCBGMGEDK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::MonoEntityModelModifier*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GALGFCPKMGC_1_OFFSET))(this, CKPGOKHECCH, CFJFMMGPGKE, BLIGEBLANDA, CLMNLPKFBFA, OECHNBLPKLB, IGMOPAMBCAK, KEBGFPEKBCG, BEOFKLACFGE, JMKEMGKMGGI, PHJCBGMGEDK);
	}

	::System::Void IJMJNCGMLHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_IJMJNCGMLHI_OFFSET))(this);
	}

	::System::Void GHCOFEPEIBP(::MoleMole::MonoEntityModelModifier* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_GHCOFEPEIBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath ACBAKIPCMLJ()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIHCPAOKKK_ACBAKIPCMLJ_OFFSET))(this);
	}
};
