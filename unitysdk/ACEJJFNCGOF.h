#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACEJJFNCGOF_CDGGNOINEKB.h"
#include "unitysdk/CCFLLOLBCLC.h"
#include "unitysdk/EJEPGMHFOMD_KKAEOOPJKAF.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/NKJMEIDLMAL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ABNPGOGDDJH_NIKGLCBCFJK;
class ACEJJFNCGOF_KFCKDFFDJNP;
class ACEJJFNCGOF_LNILKHIAPGN;
class ACEJJFNCGOF_MOBHGNONNJH;
class ACEJJFNCGOF_NPMFJOBKKNO;
class AJLFPMDBKFA;
class BFLPANDDGHG;
class BKNOKGBFDIE;
class CLJPAELKBLF;
class DCAKJJFMPLN;
class EKKLMFFPCOI;
class GCIMMDDIFBJ;
class GIEJNOEAKAK;
class HJDNNLKBHBA;
class HNLACBJDCGI;
class KOGPMKOGCLC;
class ODNBJIEICJH;
class PEIPCHALOLP;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIInLevelUpToolbarBOSSBarrierWidgetController; }
namespace MoleMole { class UIStunDamageWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define ACEJJFNCGOF_AACDCMKDPJC_OFFSET UNITYSDK_OFFSET(0x17CA6A80)
#define ACEJJFNCGOF_ABPKEGDDDMF_OFFSET UNITYSDK_OFFSET(0x17CB0090)
#define ACEJJFNCGOF_ADMKCADKGCE_OFFSET UNITYSDK_OFFSET(0x17CA6910)
#define ACEJJFNCGOF_AFFJFFKIELI_OFFSET UNITYSDK_OFFSET(0x17CA69A0)
#define ACEJJFNCGOF_AHBENKNMOCC_OFFSET UNITYSDK_OFFSET(0x17CAB3F0)
#define ACEJJFNCGOF_AHPABIDCNFF_OFFSET UNITYSDK_OFFSET(0x17CAB5C0)
#define ACEJJFNCGOF_ALGADDEMLPJ_OFFSET UNITYSDK_OFFSET(0x17CA76A0)
#define ACEJJFNCGOF_ALIKOCECDHA_OFFSET UNITYSDK_OFFSET(0x17CAD220)
#define ACEJJFNCGOF_ALNHAMAMKPB_OFFSET UNITYSDK_OFFSET(0x17CAF400)
#define ACEJJFNCGOF_AMKCDDCKJAC_OFFSET UNITYSDK_OFFSET(0x17CA41E0)
#define ACEJJFNCGOF_ANDGECCHNIG_OFFSET UNITYSDK_OFFSET(0x17CAD8C0)
#define ACEJJFNCGOF_ANLFOBOEGPJ_OFFSET UNITYSDK_OFFSET(0x17CB2170)
#define ACEJJFNCGOF_AODFOMFJEDI_OFFSET UNITYSDK_OFFSET(0x17CA55B0)
#define ACEJJFNCGOF_APIKPMBACPI_OFFSET UNITYSDK_OFFSET(0x17CB3770)
#define ACEJJFNCGOF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17CA0940)
#define ACEJJFNCGOF_BEOHBHPDDOK_OFFSET UNITYSDK_OFFSET(0x17CA1E00)
#define ACEJJFNCGOF_BJKGNPHBHLG_OFFSET UNITYSDK_OFFSET(0x17CA77B0)
#define ACEJJFNCGOF_BLHGBFLJJOK_OFFSET UNITYSDK_OFFSET(0x17CA8790)
#define ACEJJFNCGOF_BOGNMPBALII_OFFSET UNITYSDK_OFFSET(0x17CAF9F0)
#define ACEJJFNCGOF_BPCJCMLICBH_OFFSET UNITYSDK_OFFSET(0x17CA6BC0)
#define ACEJJFNCGOF_CBAIMPPEFIK_OFFSET UNITYSDK_OFFSET(0x17CA5420)
#define ACEJJFNCGOF_CDBOJKHGJMD_OFFSET UNITYSDK_OFFSET(0x17CB0A30)
#define ACEJJFNCGOF_CEFKCGAGODL_OFFSET UNITYSDK_OFFSET(0x17CA6E40)
#define ACEJJFNCGOF_CFEPMCABFBH_OFFSET UNITYSDK_OFFSET(0x17CAD420)
#define ACEJJFNCGOF_CFPKCKOBFHM_OFFSET UNITYSDK_OFFSET(0x17CB38B0)
#define ACEJJFNCGOF_CGIIGFPCGEG_OFFSET UNITYSDK_OFFSET(0x17CAA760)
#define ACEJJFNCGOF_CHMBMPCLABG_OFFSET UNITYSDK_OFFSET(0x17CAAC70)
#define ACEJJFNCGOF_COBLONKBEEL_OFFSET UNITYSDK_OFFSET(0x17CAF410)
#define ACEJJFNCGOF_DBEPDNEPEGF_OFFSET UNITYSDK_OFFSET(0x17CB1850)
#define ACEJJFNCGOF_DCBLLBBHCDO_OFFSET UNITYSDK_OFFSET(0x17CAC4C0)
#define ACEJJFNCGOF_DDHELOOAIOG_OFFSET UNITYSDK_OFFSET(0x17CAE600)
#define ACEJJFNCGOF_DJIFEEEONEG_OFFSET UNITYSDK_OFFSET(0x17CB3920)
#define ACEJJFNCGOF_DJMNLDGBBKK_OFFSET UNITYSDK_OFFSET(0x17CABC70)
#define ACEJJFNCGOF_DKALHHBHKCC_1_OFFSET UNITYSDK_OFFSET(0x17CB2280)
#define ACEJJFNCGOF_DKALHHBHKCC_OFFSET UNITYSDK_OFFSET(0x17CA8130)
#define ACEJJFNCGOF_DMLHOGAMCJK_OFFSET UNITYSDK_OFFSET(0x17CB0500)
#define ACEJJFNCGOF_EABKDMJEJHI_OFFSET UNITYSDK_OFFSET(0x17CAC170)
#define ACEJJFNCGOF_EDBCLEABAJG_OFFSET UNITYSDK_OFFSET(0x17CA2190)
#define ACEJJFNCGOF_EEDFOGALENH_OFFSET UNITYSDK_OFFSET(0x17CA9B00)
#define ACEJJFNCGOF_EICIBLMKDIB_OFFSET UNITYSDK_OFFSET(0x17CA7090)
#define ACEJJFNCGOF_EKMFIBMIAIL_OFFSET UNITYSDK_OFFSET(0x17CA26B0)
#define ACEJJFNCGOF_EOFBPIDLEMP_OFFSET UNITYSDK_OFFSET(0x17CAD1C0)
#define ACEJJFNCGOF_EOOFACDHDNO_OFFSET UNITYSDK_OFFSET(0x17CB2950)
#define ACEJJFNCGOF_FBNCMAPCACM_OFFSET UNITYSDK_OFFSET(0x17CAD580)
#define ACEJJFNCGOF_FEOAIFGFPIH_OFFSET UNITYSDK_OFFSET(0x17CA9140)
#define ACEJJFNCGOF_FFCPIEDHBDP_1_OFFSET UNITYSDK_OFFSET(0x17CAE340)
#define ACEJJFNCGOF_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x17CAE470)
#define ACEJJFNCGOF_FFNKEHBMMJB_OFFSET UNITYSDK_OFFSET(0x17CA3550)
#define ACEJJFNCGOF_FKELHPGGGOA_OFFSET UNITYSDK_OFFSET(0x17CACFC0)
#define ACEJJFNCGOF_FKOGJJDOIAP_1_OFFSET UNITYSDK_OFFSET(0x17CAD5F0)
#define ACEJJFNCGOF_FKOGJJDOIAP_OFFSET UNITYSDK_OFFSET(0x17CB3990)
#define ACEJJFNCGOF_FLHGJNEBLEK_OFFSET UNITYSDK_OFFSET(0x17CAA2A0)
#define ACEJJFNCGOF_GABLKDALFMC_OFFSET UNITYSDK_OFFSET(0x17CA9740)
#define ACEJJFNCGOF_GBPOKEGJJCB_OFFSET UNITYSDK_OFFSET(0x17CB03D0)
#define ACEJJFNCGOF_GCBKEMGAHGN_OFFSET UNITYSDK_OFFSET(0x17CAF5B0)
#define ACEJJFNCGOF_GEGFMOFHGGO_OFFSET UNITYSDK_OFFSET(0x17CAFB20)
#define ACEJJFNCGOF_GGDJCHEHAKL_OFFSET UNITYSDK_OFFSET(0x17CA84E0)
#define ACEJJFNCGOF_GIIOACHJCBE_OFFSET UNITYSDK_OFFSET(0x17CB0650)
#define ACEJJFNCGOF_GLNCEEJOCMI_OFFSET UNITYSDK_OFFSET(0x17CB1170)
#define ACEJJFNCGOF_GNMABMDALML_OFFSET UNITYSDK_OFFSET(0x17CA8840)
#define ACEJJFNCGOF_GOADOGHIDFC_OFFSET UNITYSDK_OFFSET(0x17CB04B0)
#define ACEJJFNCGOF_HBJOGAKIMEC_OFFSET UNITYSDK_OFFSET(0x17CB3980)
#define ACEJJFNCGOF_HDGFMIIDCPG_OFFSET UNITYSDK_OFFSET(0x17CAD790)
#define ACEJJFNCGOF_HFINKMCLIAM_OFFSET UNITYSDK_OFFSET(0x17CA7600)
#define ACEJJFNCGOF_HHDDCIIJNLE_OFFSET UNITYSDK_OFFSET(0x17CA9B40)
#define ACEJJFNCGOF_HHGDBMFNKDE_OFFSET UNITYSDK_OFFSET(0x17CB39F0)
#define ACEJJFNCGOF_HKOLKGJKNGC_OFFSET UNITYSDK_OFFSET(0x17CA51A0)
#define ACEJJFNCGOF_HLFLGFPCBNO_OFFSET UNITYSDK_OFFSET(0x17CA48E0)
#define ACEJJFNCGOF_HNIPHMCJFLL_OFFSET UNITYSDK_OFFSET(0x17CA34F0)
#define ACEJJFNCGOF_IBMIHOKLODA_OFFSET UNITYSDK_OFFSET(0x17CAFD60)
#define ACEJJFNCGOF_IFLMICGOIHN_OFFSET UNITYSDK_OFFSET(0x17CA40F0)
#define ACEJJFNCGOF_IPIMGMJCEJE_OFFSET UNITYSDK_OFFSET(0x17CA0830)
#define ACEJJFNCGOF_IPLEFGIBFCP_OFFSET UNITYSDK_OFFSET(0x17CAB160)
#define ACEJJFNCGOF_JEHHFDJJLAF_OFFSET UNITYSDK_OFFSET(0x17CAB2D0)
#define ACEJJFNCGOF_JHCJMDHNNOH_OFFSET UNITYSDK_OFFSET(0x17CB0460)
#define ACEJJFNCGOF_JIBDBFLJHFE_OFFSET UNITYSDK_OFFSET(0x17CAD430)
#define ACEJJFNCGOF_JIDJGCEBGGF_OFFSET UNITYSDK_OFFSET(0x17CA4330)
#define ACEJJFNCGOF_JJPCIHBHGOD_OFFSET UNITYSDK_OFFSET(0x17CB1940)
#define ACEJJFNCGOF_JKOPDFIJJJG_OFFSET UNITYSDK_OFFSET(0x17CA9D30)
#define ACEJJFNCGOF_JLCLGJIGCNM_OFFSET UNITYSDK_OFFSET(0x17CAC470)
#define ACEJJFNCGOF_JMBMHEPDBOG_OFFSET UNITYSDK_OFFSET(0x17CA2890)
#define ACEJJFNCGOF_JMKFBICKAHJ_OFFSET UNITYSDK_OFFSET(0x17CB01A0)
#define ACEJJFNCGOF_JNJPNIPDOLE_OFFSET UNITYSDK_OFFSET(0x17CAAF40)
#define ACEJJFNCGOF_KBDEPGOCLFP_OFFSET UNITYSDK_OFFSET(0x17CB38A0)
#define ACEJJFNCGOF_KDDKGFENBOE_OFFSET UNITYSDK_OFFSET(0x17CB3820)
#define ACEJJFNCGOF_KIMAPNCODAP_OFFSET UNITYSDK_OFFSET(0x17CA8AD0)
#define ACEJJFNCGOF_KKPLMIOOCPE_OFFSET UNITYSDK_OFFSET(0x17CACAE0)
#define ACEJJFNCGOF_KMGOODOONJN_OFFSET UNITYSDK_OFFSET(0x17CA6F90)
#define ACEJJFNCGOF_KPGLDLFOJFA_OFFSET UNITYSDK_OFFSET(0x17CA9F30)
#define ACEJJFNCGOF_LGLNGNIEIBC_OFFSET UNITYSDK_OFFSET(0x17CA1D70)
#define ACEJJFNCGOF_LHFLDHLMLFC_OFFSET UNITYSDK_OFFSET(0x17CB05D0)
#define ACEJJFNCGOF_LJMEDLHDPOJ_OFFSET UNITYSDK_OFFSET(0x17CA96D0)
#define ACEJJFNCGOF_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x17CB2BA0)
#define ACEJJFNCGOF_MDJOCCADPMN_OFFSET UNITYSDK_OFFSET(0x17CAC7F0)
#define ACEJJFNCGOF_MGAFDLPIICG_OFFSET UNITYSDK_OFFSET(0x17CACCF0)
#define ACEJJFNCGOF_MGOKCJKCLMK_OFFSET UNITYSDK_OFFSET(0x17CB0B70)
#define ACEJJFNCGOF_MJGHFMFCNPH_OFFSET UNITYSDK_OFFSET(0x17CADAF0)
#define ACEJJFNCGOF_MMAKPCCLMPD_OFFSET UNITYSDK_OFFSET(0x17CB16B0)
#define ACEJJFNCGOF_MNCBLLJFAPC_OFFSET UNITYSDK_OFFSET(0x17CA4940)
#define ACEJJFNCGOF_MOBNEPOKFGI_OFFSET UNITYSDK_OFFSET(0x17CA8FD0)
#define ACEJJFNCGOF_NCEEJKMOCCA_OFFSET UNITYSDK_OFFSET(0x17CA53B0)
#define ACEJJFNCGOF_NENHLHIAHKD_OFFSET UNITYSDK_OFFSET(0x17CAF450)
#define ACEJJFNCGOF_NMDNJGOOFDG_OFFSET UNITYSDK_OFFSET(0x17CAC620)
#define ACEJJFNCGOF_NNIHLOAAFDC_OFFSET UNITYSDK_OFFSET(0x17CB0D80)
#define ACEJJFNCGOF_OBGPIMLEGJM_OFFSET UNITYSDK_OFFSET(0x17CA3210)
#define ACEJJFNCGOF_OEJKAFJNNGH_OFFSET UNITYSDK_OFFSET(0x17CAAA50)
#define ACEJJFNCGOF_OEKJGIFILOH_OFFSET UNITYSDK_OFFSET(0x17CB0380)
#define ACEJJFNCGOF_OFBMFCBEJHM_OFFSET UNITYSDK_OFFSET(0x17CAB880)
#define ACEJJFNCGOF_OGBINKJPLNB_OFFSET UNITYSDK_OFFSET(0x17CA47E0)
#define ACEJJFNCGOF_OHPANJGFFAD_OFFSET UNITYSDK_OFFSET(0x17CAD230)
#define ACEJJFNCGOF_OJBKJMBOPDF_OFFSET UNITYSDK_OFFSET(0x17CADAE0)
#define ACEJJFNCGOF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17CB1460)
#define ACEJJFNCGOF_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x17CA8420)
#define ACEJJFNCGOF_OLJCNGKNJNB_OFFSET UNITYSDK_OFFSET(0x17CB06E0)
#define ACEJJFNCGOF_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17CA1A50)
#define ACEJJFNCGOF_PAMIHPEMGAL_OFFSET UNITYSDK_OFFSET(0x17CA9090)
#define ACEJJFNCGOF_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x17CA1920)
#define ACEJJFNCGOF_PDOBIPKMDNH_OFFSET UNITYSDK_OFFSET(0x17CA6CC0)
#define ACEJJFNCGOF_PECGGOBGCIK_OFFSET UNITYSDK_OFFSET(0x17CA88E0)
#define ACEJJFNCGOF_PJJJOJIDPDB_OFFSET UNITYSDK_OFFSET(0x17CA1B20)
#define ACEJJFNCGOF_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x17CAC7A0)
#define ACEJJFNCGOF_PNBDJFPEALP_OFFSET UNITYSDK_OFFSET(0x17CA4440)
#define ACEJJFNCGOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CA1BD0)
#define ACEJJFNCGOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA06A0)

inline static constexpr unsigned int ACEJJFNCGOF_TypeDefinitionIndex = 89551;

class ACEJJFNCGOF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NDBLKEPLIBM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD620);
	}
	static ::UnityEngine::Color32* StaticGet_KODLIOINKLB()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD624);
	}
	static ::System::Int32* StaticGet_BDOFKPOJFKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD628);
	}
	static ::System::Single* StaticGet_IGBIDGAKLHN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD62C);
	}
	static ::UnityEngine::Color32* StaticGet_BPAIBOGPIAK()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD630);
	}
	static ::UnityEngine::Color* StaticGet_HENPFPONHPG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD634);
	}
	static ::System::Int32* StaticGet_NJIHKHEPFNK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD644);
	}
	static ::UnityEngine::Color* StaticGet_HEGBPIGHIAA()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD648);
	}
	static ::UnityEngine::Color32* StaticGet_LBBPMJMLOHE()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD658);
	}
	static ::System::Int32* StaticGet_NHKBIEIKHHN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD65C);
	}
	static ::System::Int32* StaticGet_HNDJCJDAGBE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD660);
	}
	static ::System::Int32* StaticGet_MNKODDCKJEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD664);
	}
	static ::System::Int32* StaticGet_IHDKDEEOCEC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD668);
	}
	static ::UnityEngine::Color32* StaticGet_IOEBPKNANNN()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD66C);
	}
	static ::UnityEngine::Color32* StaticGet_AMLCCNJAPIH()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD670);
	}
	static ::System::Int32* StaticGet_EIOIJLOBFOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD674);
	}
	static ::System::Int32* StaticGet_EHKHEONGNME()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD678);
	}
	static ::UnityEngine::Color32* StaticGet_ACEGFPLKEHN()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD67C);
	}
	static ::System::Int32* StaticGet_ANCLPLPGIFL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD680);
	}
	static ::System::Single* StaticGet_LMCJOKFPIEI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD684);
	}
	static ::UnityEngine::Color32* StaticGet_CNDDHFEDCIM()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD688);
	}
	static ::System::Int32* StaticGet_BFDOGMHFIAH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD68C);
	}
	static ::System::Int32* StaticGet_GDBPJNMFDAC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD690);
	}
	static ::System::Int32* StaticGet_EFMAPOELLHD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD694);
	}
	static ::UnityEngine::Color32* StaticGet_PGLFLNAECDA()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD698);
	}
	static ::System::Int32* StaticGet_IANOGIANGFI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ACEJJFNCGOF_TypeDefinitionIndex)->GetStaticField(0xD69C);
	}
	// static const ::System::String* ILEJAJBKLPA; // 0x0
	// static const ::System::String* PBCJNLDBNGM; // 0x0
	// static const ::System::String* KMBGBPJOFND; // 0x0
	// static const ::System::String* HEFEAGIIGHL; // 0x0
	// static const ::System::String* LCJBCIDALCJ; // 0x0
	// static const ::System::String* LDHKDAPOAGH; // 0x0
	// static const ::System::String* LNNLINNJJHD; // 0x0
	// static const ::System::String* FNHOLGOGJDH; // 0x0
	// static const ::System::String* EPOEKLEPIMG; // 0x0
	// static const ::System::String* NMOIDLNFDNF; // 0x0
	// static const ::System::String* OGMIHBBEFMH; // 0x0
	// static const ::System::String* MCCNDPAKBIN; // 0x0
	// static const ::System::String* NENNDLKBCPL; // 0x0
	// static const ::System::String* ADIHGEBNNIE; // 0x0
	// static const ::System::String* EPGPMNFCCFA; // 0x0
	// static const ::System::String* DCOBCCMAIDP; // 0x0
	// static const ::System::String* LCPAPBNABGO; // 0x0
	// static const ::System::String* CPNCLPNNMNB; // 0x0
	// static const ::System::String* HEPDDHGGOCK; // 0x0
	// static const ::System::String* MJIHDDFDDLN; // 0x0
	// static const ::System::String* JKCMPOLAHBN; // 0x0
	::BKNOKGBFDIE* MCEGJFEKIIJ; // 0x10
	::UnityEngine::Material* BLFCLGOFDBE; // 0x18
	::UnityEngine::Material* CEACJKOEOAL; // 0x20
	::ACEJJFNCGOF_LNILKHIAPGN* CDFFOFLPPIH; // 0x28
	::UnityEngine::Material* IOHFMDGKLHC; // 0x30
	::UnityEngine::Material* LBNKLALPALD; // 0x38
	::UnityEngine::Material* LNPCNAJPIJL; // 0x40
	::ACEJJFNCGOF_MOBHGNONNJH* OPFHDCHOJMD; // 0x48
	::HJDNNLKBHBA* ONBDOFBEMMN; // 0x50
	::EKKLMFFPCOI* JBKPCBPJKNO; // 0x58
	::MoleMole::UIInLevelUpToolbarBOSSBarrierWidgetController* KKMMDMBNLBF; // 0x60
	::UnityEngine::Material* CNGAPLNICOL; // 0x68
	::MoleMole::UIInLevelUpToolBarBossWidgetController* CIDDDCOKFHC; // 0x70
	::UnityEngine::Material* HNFBBEGPKDL; // 0x78
	::UnityEngine::Material* HIOKBOPPKMI; // 0x80
	::UnityEngine::Material* CIEKJLHCJNK; // 0x88
	::HNLACBJDCGI* FOLOGOFJHED; // 0x90
	::UnityEngine::Material* FBHJMBKANBE; // 0x98
	::GIEJNOEAKAK* PALNBEBEHPG; // 0xA0
	::EKKLMFFPCOI* ICMLBMPKPDC; // 0xA8
	::ACEJJFNCGOF_NPMFJOBKKNO* KEOGPFBPMCE; // 0xB0
	::DCAKJJFMPLN* PGAOEGDHHNH; // 0xB8
	::KOGPMKOGCLC* MANHEJPPMEK; // 0xC0
	::UnityEngine::Material* NFCAGKCLEGE; // 0xC8
	::CLJPAELKBLF* HMNNHADCDEP; // 0xD0
	::MoleMole::UIStunDamageWidgetController* AGDNNBOMIKA; // 0xD8
	::System::Collections::Generic::Dictionary_2<::CCFLLOLBCLC, ::System::Single>* BMHCFDJOMIE; // 0xE0
	::MoleMole::CharacterScriptConfig* OALIGEPBGDA; // 0xE8
	::ACEJJFNCGOF_KFCKDFFDJNP* FFDBFAEKDCL; // 0xF0
	::ODNBJIEICJH* FPFDBCJDECN; // 0xF8
	::AJLFPMDBKFA* KMMKMGDHCOI; // 0x100
	::BFLPANDDGHG* JOKNPBMMNCK; // 0x108
	::Il2CppArray<::UnityEngine::Vector3>* FEHDFBAICKF; // 0x110
	::UnityEngine::Material* PKEHBHIKFMM; // 0x118
	::ODNBJIEICJH* OIMHJPLKABL; // 0x120
	::System::Boolean OIIOEOFKPDP; // 0x128
	::System::Boolean JBGOOALMPLL; // 0x129
	::System::Boolean JPLFIEHNEPK; // 0x12A
	::System::Boolean ANOMDGONENE; // 0x12B
	::System::Boolean BPPJBPPDFKL; // 0x12C
	::System::Boolean EIKCEDEAPDA; // 0x12D
	::System::Boolean HHAODEPNHJC; // 0x12E
	::System::Byte _padding0[0x1];
	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FEEOLOKGLKJ; // 0x130
	::System::Single PJKIMJLKOPG; // 0x134
	::System::Single PBJPOPAPHAP; // 0x138
	::ACEJJFNCGOF_CDGGNOINEKB FIFNNPIDNJF; // 0x13C
	::System::Boolean PGEKFMCIGPP; // 0x14C
	::System::Boolean FGMKBHKPJBN; // 0x14D
	::System::Byte _padding1[0x2];
	::Foundation::Coroutine::CoroutineHandle PFCAIAAKALC; // 0x150
	::System::Single FPJLIEBODLN; // 0x154
	::UnityEngine::Color AHGBDMMPMLJ; // 0x158
	::System::Single PNLKJBKBOPA; // 0x168
	::System::Single JLNJLMPHKHC; // 0x16C
	::System::Boolean EOFJEFOBMKM; // 0x170
	::System::Boolean DKNLKMAKBMA; // 0x171
	::System::Boolean KBOPGGFIAID; // 0x172
	::System::Boolean AMPMGBLMOJO; // 0x173

	::System::Void _ctor(::HNLACBJDCGI* JMJGHFAOMNH, ::AJLFPMDBKFA* AEJAMJDBHAM, ::MoleMole::UIInLevelUpToolBarBossWidgetController* AGPEKOMOBLL, ::MoleMole::UIStunDamageWidgetController* CCCLJBGAALC, ::KOGPMKOGCLC* GAOLLJICJEA, ::System::Boolean EIKCEDEAPDA, ::System::Boolean KCNLAPEHAMC)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::AJLFPMDBKFA*, ::MoleMole::UIInLevelUpToolBarBossWidgetController*, ::MoleMole::UIStunDamageWidgetController*, ::KOGPMKOGCLC*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF__CTOR_OFFSET))(this, JMJGHFAOMNH, AEJAMJDBHAM, AGPEKOMOBLL, CCCLJBGAALC, GAOLLJICJEA, EIKCEDEAPDA, KCNLAPEHAMC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEJJFNCGOF__CCTOR_OFFSET))();
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 PPJIIBGDNAP, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, PPJIIBGDNAP, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void LGLNGNIEIBC(::System::Single JABJDGKIFHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_LGLNGNIEIBC_OFFSET))(this, JABJDGKIFHD);
	}

	::System::Void EKMFIBMIAIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EKMFIBMIAIL_OFFSET))(this);
	}

	::System::Void JMBMHEPDBOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JMBMHEPDBOG_OFFSET))(this);
	}

	::System::Void OBGPIMLEGJM(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OBGPIMLEGJM_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void HNIPHMCJFLL(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HNIPHMCJFLL_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void FFNKEHBMMJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FFNKEHBMMJB_OFFSET))(this);
	}

	::System::Single IFLMICGOIHN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_IFLMICGOIHN_OFFSET))(this);
	}

	::System::Void AMKCDDCKJAC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AMKCDDCKJAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IPIMGMJCEJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_IPIMGMJCEJE_OFFSET))(this);
	}

	::System::Void OGBINKJPLNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OGBINKJPLNB_OFFSET))(this);
	}

	::System::Void MNCBLLJFAPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MNCBLLJFAPC_OFFSET))(this);
	}

	::System::Void HKOLKGJKNGC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HKOLKGJKNGC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void NCEEJKMOCCA(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_NCEEJKMOCCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AODFOMFJEDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AODFOMFJEDI_OFFSET))(this);
	}

	::System::Boolean HLFLGFPCBNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HLFLGFPCBNO_OFFSET))(this);
	}

	::System::Boolean BPCJCMLICBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BPCJCMLICBH_OFFSET))(this);
	}

	::System::Void EDBCLEABAJG(::System::Single JABJDGKIFHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EDBCLEABAJG_OFFSET))(this, JABJDGKIFHD);
	}

	::System::Void CEFKCGAGODL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CEFKCGAGODL_OFFSET))(this);
	}

	::System::Boolean KMGOODOONJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KMGOODOONJN_OFFSET))(this);
	}

	::System::Void EICIBLMKDIB(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EICIBLMKDIB_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void HFINKMCLIAM(::System::Single MJODFDBNJIP, ::System::Int32 POKELHACLAE, ::System::Single DNFNKBNBJHM, ::System::Int32 GALMEKPFIKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HFINKMCLIAM_OFFSET))(this, MJODFDBNJIP, POKELHACLAE, DNFNKBNBJHM, GALMEKPFIKN);
	}

	::System::UInt32 ALGADDEMLPJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ALGADDEMLPJ_OFFSET))(this);
	}

	::System::Void BJKGNPHBHLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BJKGNPHBHLG_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OKMEFGGMPFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GGDJCHEHAKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GGDJCHEHAKL_OFFSET))(this);
	}

	::UnityEngine::Rect BLHGBFLJJOK(::UnityEngine::Rect IKLFDIPKIID, ::UnityEngine::Rect NODPNBEAIMH)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BLHGBFLJJOK_OFFSET))(this, IKLFDIPKIID, NODPNBEAIMH);
	}

	::System::Boolean GNMABMDALML(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GNMABMDALML_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Void PECGGOBGCIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PECGGOBGCIK_OFFSET))(this);
	}

	::System::Void KIMAPNCODAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KIMAPNCODAP_OFFSET))(this);
	}

	::System::Void FEOAIFGFPIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FEOAIFGFPIH_OFFSET))(this);
	}

	::System::Void EEDFOGALENH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EEDFOGALENH_OFFSET))(this);
	}

	::System::Void HHDDCIIJNLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HHDDCIIJNLE_OFFSET))(this);
	}

	::System::Void JKOPDFIJJJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JKOPDFIJJJG_OFFSET))(this);
	}

	::System::Void KPGLDLFOJFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KPGLDLFOJFA_OFFSET))(this);
	}

	::System::Void CHMBMPCLABG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CHMBMPCLABG_OFFSET))(this);
	}

	::System::Void JIDJGCEBGGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JIDJGCEBGGF_OFFSET))(this);
	}

	::System::Void IPLEFGIBFCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_IPLEFGIBFCP_OFFSET))(this);
	}

	::System::Void AHBENKNMOCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AHBENKNMOCC_OFFSET))(this);
	}

	::System::Void AHPABIDCNFF(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Single KGGJCGPMAIH, ::System::Single BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AHPABIDCNFF_OFFSET))(this, IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void EABKDMJEJHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EABKDMJEJHI_OFFSET))(this);
	}

	::System::Void AACDCMKDPJC(::NKJMEIDLMAL OCLFHKMKDOL)
	{
		return ((::System::Void(*)(::PVOID, ::NKJMEIDLMAL))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AACDCMKDPJC_OFFSET))(this, OCLFHKMKDOL);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void MDJOCCADPMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MDJOCCADPMN_OFFSET))(this);
	}

	::System::Void JNJPNIPDOLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JNJPNIPDOLE_OFFSET))(this);
	}

	::System::Void FKELHPGGGOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FKELHPGGGOA_OFFSET))(this);
	}

	::System::Boolean EOFBPIDLEMP(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FFILNNIINCL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EOFBPIDLEMP_OFFSET))(this, FCPCLIJNDLA, FFILNNIINCL);
	}

	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag ALIKOCECDHA()
	{
		return ((::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ALIKOCECDHA_OFFSET))(this);
	}

	::System::Void OHPANJGFFAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OHPANJGFFAD_OFFSET))(this);
	}

	::System::Void FLHGJNEBLEK(::EJEPGMHFOMD_KKAEOOPJKAF ANOHIDIPEMN)
	{
		return ((::System::Void(*)(::PVOID, ::EJEPGMHFOMD_KKAEOOPJKAF))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FLHGJNEBLEK_OFFSET))(this, ANOHIDIPEMN);
	}

	::UnityEngine::Rect MOBNEPOKFGI(::UnityEngine::RectTransform* EMDOIDLAFDB)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MOBNEPOKFGI_OFFSET))(this, EMDOIDLAFDB);
	}

	::System::Void CFEPMCABFBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CFEPMCABFBH_OFFSET))(this);
	}

	::System::Void JIBDBFLJHFE(::ACEJJFNCGOF_CDGGNOINEKB JBAAOKJHJMH)
	{
		return ((::System::Void(*)(::PVOID, ::ACEJJFNCGOF_CDGGNOINEKB))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JIBDBFLJHFE_OFFSET))(this, JBAAOKJHJMH);
	}

	::System::Void HDGFMIIDCPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HDGFMIIDCPG_OFFSET))(this);
	}

	::System::Void ANDGECCHNIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ANDGECCHNIG_OFFSET))(this);
	}

	::ACEJJFNCGOF_CDGGNOINEKB OJBKJMBOPDF()
	{
		return ((::ACEJJFNCGOF_CDGGNOINEKB(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OJBKJMBOPDF_OFFSET))(this);
	}

	::System::Boolean GABLKDALFMC(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GABLKDALFMC_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Boolean PDOBIPKMDNH(::CCFLLOLBCLC CIAHAAKLADN, ::System::Single& KGGJCGPMAIH, ::System::Single& BPEGDPLGFPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::CCFLLOLBCLC, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PDOBIPKMDNH_OFFSET))(this, CIAHAAKLADN, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void MJGHFMFCNPH(::System::UInt32 BKLGNCBNEGM, ::System::Boolean HGCBKEJOCAN, ::System::Boolean CHKFMLAKDAJ, ::System::Boolean MAHIAMPMJGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MJGHFMFCNPH_OFFSET))(this, BKLGNCBNEGM, HGCBKEJOCAN, CHKFMLAKDAJ, MAHIAMPMJGO);
	}

	static ::System::Void AFFJFFKIELI(::NKJMEIDLMAL OCLFHKMKDOL, ::System::String*& NNMIAOMGAAO, ::System::String*& GENKEAPFFJG, ::System::String*& ALDFOJEMPFO)
	{
		return ((::System::Void(*)(::NKJMEIDLMAL, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AFFJFFKIELI_OFFSET))(OCLFHKMKDOL, NNMIAOMGAAO, GENKEAPFFJG, ALDFOJEMPFO);
	}

	::System::Boolean ALNHAMAMKPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ALNHAMAMKPB_OFFSET))(this);
	}

	::System::Void DDHELOOAIOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DDHELOOAIOG_OFFSET))(this);
	}

	::System::Void LJMEDLHDPOJ(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_LJMEDLHDPOJ_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Void GCBKEMGAHGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GCBKEMGAHGN_OFFSET))(this);
	}

	::GCIMMDDIFBJ* ADMKCADKGCE(::NKJMEIDLMAL OCLFHKMKDOL)
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID, ::NKJMEIDLMAL))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ADMKCADKGCE_OFFSET))(this, OCLFHKMKDOL);
	}

	::System::Void BOGNMPBALII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BOGNMPBALII_OFFSET))(this);
	}

	::System::Void DJMNLDGBBKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DJMNLDGBBKK_OFFSET))(this);
	}

	::System::Void GEGFMOFHGGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GEGFMOFHGGO_OFFSET))(this);
	}

	::System::Void PNBDJFPEALP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PNBDJFPEALP_OFFSET))(this);
	}

	::System::Void IBMIHOKLODA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_IBMIHOKLODA_OFFSET))(this);
	}

	::System::Void ABPKEGDDDMF(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ABPKEGDDDMF_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void JMKFBICKAHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JMKFBICKAHJ_OFFSET))(this);
	}

	::System::Void OEKJGIFILOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OEKJGIFILOH_OFFSET))(this);
	}

	::System::Void GBPOKEGJJCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GBPOKEGJJCB_OFFSET))(this);
	}

	::System::Void PJJJOJIDPDB(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PJJJOJIDPDB_OFFSET))(this, IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void PDKCHDBODJB(::System::Boolean CHKFMLAKDAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PDKCHDBODJB_OFFSET))(this, CHKFMLAKDAJ);
	}

	::System::Void GOADOGHIDFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GOADOGHIDFC_OFFSET))(this);
	}

	::System::Void BEOHBHPDDOK(::System::Single JABJDGKIFHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_BEOHBHPDDOK_OFFSET))(this, JABJDGKIFHD);
	}

	::System::Void COBLONKBEEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_COBLONKBEEL_OFFSET))(this);
	}

	::System::Void DMLHOGAMCJK(::System::Single DLBFEAOALML, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DMLHOGAMCJK_OFFSET))(this, DLBFEAOALML, EJGDHCIBCJH);
	}

	::System::Void LHFLDHLMLFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_LHFLDHLMLFC_OFFSET))(this);
	}

	::System::Void DKALHHBHKCC(::System::Single MJODFDBNJIP, ::System::Single DNFNKBNBJHM, ::System::Boolean DINMFILPHJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DKALHHBHKCC_OFFSET))(this, MJODFDBNJIP, DNFNKBNBJHM, DINMFILPHJM);
	}

	::UnityEngine::Vector4 PAMIHPEMGAL(::UnityEngine::Rect MGOFOAFCFIJ, ::UnityEngine::Rect PGENGEPPBNF)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_PAMIHPEMGAL_OFFSET))(this, MGOFOAFCFIJ, PGENGEPPBNF);
	}

	::System::Void OFBMFCBEJHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OFBMFCBEJHM_OFFSET))(this);
	}

	::System::Void MGAFDLPIICG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MGAFDLPIICG_OFFSET))(this);
	}

	::System::Void GIIOACHJCBE(::System::Boolean DGNOFJFOCGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GIIOACHJCBE_OFFSET))(this, DGNOFJFOCGF);
	}

	::System::Void OLJCNGKNJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OLJCNGKNJNB_OFFSET))(this);
	}

	::System::Void CDBOJKHGJMD(::System::Boolean PKDOCNOOJLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CDBOJKHGJMD_OFFSET))(this, PKDOCNOOJLB);
	}

	::System::Void CBAIMPPEFIK(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag MDKGGLAFFIN, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag HMFGDMJPKEM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CBAIMPPEFIK_OFFSET))(this, MDKGGLAFFIN, HMFGDMJPKEM);
	}

	::System::Void MGOKCJKCLMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MGOKCJKCLMK_OFFSET))(this);
	}

	::System::Void GLNCEEJOCMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_GLNCEEJOCMI_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FFCPIEDHBDP_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Single DBEPDNEPEGF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DBEPDNEPEGF_OFFSET))(this);
	}

	::System::Void DCBLLBBHCDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DCBLLBBHCDO_OFFSET))(this);
	}

	static ::System::Void NMDNJGOOFDG(::GCIMMDDIFBJ* HHIJHDFHPOI, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::GCIMMDDIFBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_NMDNJGOOFDG_OFFSET))(HHIJHDFHPOI, FIPHFGHNNBE);
	}

	::System::Void JJPCIHBHGOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JJPCIHBHGOD_OFFSET))(this);
	}

	::System::Void JEHHFDJJLAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JEHHFDJJLAF_OFFSET))(this);
	}

	::System::Void ANLFOBOEGPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_ANLFOBOEGPJ_OFFSET))(this);
	}

	::System::Void NNIHLOAAFDC(::System::Single MJLHOGPGHPI, ::System::Single PKKDLNOFMDD, ::System::Single NGCBAGHIOAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_NNIHLOAAFDC_OFFSET))(this, MJLHOGPGHPI, PKKDLNOFMDD, NGCBAGHIOAK);
	}

	::System::Void EOOFACDHDNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_EOOFACDHDNO_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void DKALHHBHKCC_1(::System::Single BFGHPIFHKAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DKALHHBHKCC_1_OFFSET))(this, BFGHPIFHKAO);
	}

	::System::Void APIKPMBACPI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_APIKPMBACPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NENHLHIAHKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_NENHLHIAHKD_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FFCPIEDHBDP_1_OFFSET))(this);
	}

	::System::Boolean JLCLGJIGCNM(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JLCLGJIGCNM_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Void CGIIGFPCGEG(::EJEPGMHFOMD_KKAEOOPJKAF ANOHIDIPEMN, ::System::Boolean CBEKFFGGHPO)
	{
		return ((::System::Void(*)(::PVOID, ::EJEPGMHFOMD_KKAEOOPJKAF, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CGIIGFPCGEG_OFFSET))(this, ANOHIDIPEMN, CBEKFFGGHPO);
	}

	::System::Void KDDKGFENBOE(::System::Int32 BOBBHFPEPHC, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Int32 OBKBDAPONOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KDDKGFENBOE_OFFSET))(this, BOBBHFPEPHC, AMNIHACKELI, OBKBDAPONOJ);
	}

	::System::Void KBDEPGOCLFP(::ACEJJFNCGOF_CDGGNOINEKB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ACEJJFNCGOF_CDGGNOINEKB))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KBDEPGOCLFP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JHCJMDHNNOH(::System::Boolean FNHINDCOJGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_JHCJMDHNNOH_OFFSET))(this, FNHINDCOJGO);
	}

	::System::Void OEJKAFJNNGH(::EJEPGMHFOMD_KKAEOOPJKAF PLFGNEIDEOJ)
	{
		return ((::System::Void(*)(::PVOID, ::EJEPGMHFOMD_KKAEOOPJKAF))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_OEJKAFJNNGH_OFFSET))(this, PLFGNEIDEOJ);
	}

	::System::Void CFPKCKOBFHM(::System::Int32 BOBBHFPEPHC, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean MLOLCDBPEBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_CFPKCKOBFHM_OFFSET))(this, BOBBHFPEPHC, AMNIHACKELI, MLOLCDBPEBH);
	}

	::ABNPGOGDDJH_NIKGLCBCFJK* DJIFEEEONEG()
	{
		return ((::ABNPGOGDDJH_NIKGLCBCFJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_DJIFEEEONEG_OFFSET))(this);
	}

	::System::Void KKPLMIOOCPE(::UnityEngine::Color EJCBEJMGFAJ, ::UnityEngine::Color EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_KKPLMIOOCPE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void HBJOGAKIMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HBJOGAKIMEC_OFFSET))(this);
	}

	::System::Void FKOGJJDOIAP(::PEIPCHALOLP* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::PEIPCHALOLP*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FKOGJJDOIAP_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void MMAKPCCLMPD(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MMAKPCCLMPD_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HHGDBMFNKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_HHGDBMFNKDE_OFFSET))(this);
	}

	::System::Void FKOGJJDOIAP_1(::EJEPGMHFOMD_KKAEOOPJKAF ANOHIDIPEMN, ::System::Single LKMGOPOJJEE)
	{
		return ((::System::Void(*)(::PVOID, ::EJEPGMHFOMD_KKAEOOPJKAF, ::System::Single))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FKOGJJDOIAP_1_OFFSET))(this, ANOHIDIPEMN, LKMGOPOJJEE);
	}

	::System::Void FBNCMAPCACM(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_FBNCMAPCACM_OFFSET))(this, FCPCLIJNDLA);
	}
};
