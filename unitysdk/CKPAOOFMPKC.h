#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"

class CJIEIHEDMME;
class FAFDOHEJMBH;
class FOKGLLCBFPE;
class HJKLKLMHPKG;
class IPGOKLLELPB;
class JONIDDDCNNG;
class OCIAMHMOLOF;
class PFFMFIIINIJ;
namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigOverlordFeast; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class DFDEIDBBGHG_1;

#define CKPAOOFMPKC_AABOCOAGAIP_OFFSET UNITYSDK_OFFSET(0x15A02800)
#define CKPAOOFMPKC_AAEJBBKHFOJ_OFFSET UNITYSDK_OFFSET(0x159FBC90)
#define CKPAOOFMPKC_ACPIPCPEOLG_OFFSET UNITYSDK_OFFSET(0x15A01F50)
#define CKPAOOFMPKC_APPCDBCJNLG_OFFSET UNITYSDK_OFFSET(0x15A055A0)
#define CKPAOOFMPKC_BAKLCBOHGDH_OFFSET UNITYSDK_OFFSET(0x159FCB20)
#define CKPAOOFMPKC_BBNFNFNCBJO_OFFSET UNITYSDK_OFFSET(0x15A067F0)
#define CKPAOOFMPKC_BDHLMIJOHLC_OFFSET UNITYSDK_OFFSET(0x159FE7C0)
#define CKPAOOFMPKC_BHGNGANECLH_OFFSET UNITYSDK_OFFSET(0x15A03BD0)
#define CKPAOOFMPKC_BKGMFKILFJG_OFFSET UNITYSDK_OFFSET(0x159FB830)
#define CKPAOOFMPKC_BKPDDCNNIBI_OFFSET UNITYSDK_OFFSET(0x15A008F0)
#define CKPAOOFMPKC_BOBPJBGNFNL_OFFSET UNITYSDK_OFFSET(0x159FE140)
#define CKPAOOFMPKC_CBBMBPDOLPB_OFFSET UNITYSDK_OFFSET(0x15A065C0)
#define CKPAOOFMPKC_CEOPFCJGCDL_OFFSET UNITYSDK_OFFSET(0x15A05150)
#define CKPAOOFMPKC_CFJNIOFAPKP_OFFSET UNITYSDK_OFFSET(0x15A023E0)
#define CKPAOOFMPKC_CJHECPIPCHL_OFFSET UNITYSDK_OFFSET(0x15A00510)
#define CKPAOOFMPKC_CMJKDMIFAGO_OFFSET UNITYSDK_OFFSET(0x159FE440)
#define CKPAOOFMPKC_CNGICOEPHGA_OFFSET UNITYSDK_OFFSET(0x18DE0C70)
#define CKPAOOFMPKC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x159FC6F0)
#define CKPAOOFMPKC_CPGOADLFEJC_OFFSET UNITYSDK_OFFSET(0x159FA290)
#define CKPAOOFMPKC_DBKABCOGFNP_OFFSET UNITYSDK_OFFSET(0x159FB5F0)
#define CKPAOOFMPKC_DDKMCPGOLIP_OFFSET UNITYSDK_OFFSET(0x15A050E0)
#define CKPAOOFMPKC_DGBIBANKLIC_OFFSET UNITYSDK_OFFSET(0x159FF2E0)
#define CKPAOOFMPKC_DLBCMPFJDOE_OFFSET UNITYSDK_OFFSET(0x159FFC00)
#define CKPAOOFMPKC_DONEJHEDEKK_OFFSET UNITYSDK_OFFSET(0x15A05470)
#define CKPAOOFMPKC_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x15A05040)
#define CKPAOOFMPKC_EDGNEABEHLG_OFFSET UNITYSDK_OFFSET(0x15A05F90)
#define CKPAOOFMPKC_EDMNNNIELFK_OFFSET UNITYSDK_OFFSET(0x15A06800)
#define CKPAOOFMPKC_EHMMDLCPKBO_OFFSET UNITYSDK_OFFSET(0x15A05C10)
#define CKPAOOFMPKC_EMABMJMKMNM_OFFSET UNITYSDK_OFFSET(0x15A00940)
#define CKPAOOFMPKC_ENEFKKEJFIB_OFFSET UNITYSDK_OFFSET(0x18DE0450)
#define CKPAOOFMPKC_EPNMNIBDCNF_OFFSET UNITYSDK_OFFSET(0x159FC8C0)
#define CKPAOOFMPKC_FCPPJFKJHAF_OFFSET UNITYSDK_OFFSET(0x15A00EE0)
#define CKPAOOFMPKC_FGFJFJNCJFK_OFFSET UNITYSDK_OFFSET(0x159FBCE0)
#define CKPAOOFMPKC_FHDKLHBGLDC_OFFSET UNITYSDK_OFFSET(0x15A06A10)
#define CKPAOOFMPKC_FIDLCKFGEAG_OFFSET UNITYSDK_OFFSET(0x159FA380)
#define CKPAOOFMPKC_FIJBMKDDAKN_OFFSET UNITYSDK_OFFSET(0x18DE1310)
#define CKPAOOFMPKC_FMBBFNFHMIH_OFFSET UNITYSDK_OFFSET(0x159FF7B0)
#define CKPAOOFMPKC_GBHBGEBHNPD_OFFSET UNITYSDK_OFFSET(0x15A06810)
#define CKPAOOFMPKC_GCLHMFHKGFG_OFFSET UNITYSDK_OFFSET(0x15A067E0)
#define CKPAOOFMPKC_GDNGKMBJOFF_OFFSET UNITYSDK_OFFSET(0x15A03D50)
#define CKPAOOFMPKC_GDOHHCNBAPF_OFFSET UNITYSDK_OFFSET(0x15A02C60)
#define CKPAOOFMPKC_GEKGGLPMMLK_OFFSET UNITYSDK_OFFSET(0x159FFB70)
#define CKPAOOFMPKC_GGCFCCAPCCF_OFFSET UNITYSDK_OFFSET(0x15A06F10)
#define CKPAOOFMPKC_GLKACALKAGP_OFFSET UNITYSDK_OFFSET(0x15A061F0)
#define CKPAOOFMPKC_GMFAFIGJAOP_OFFSET UNITYSDK_OFFSET(0x159FA6A0)
#define CKPAOOFMPKC_GNDMCJBCBEN_OFFSET UNITYSDK_OFFSET(0x159FA700)
#define CKPAOOFMPKC_GNFCCJCKPDH_OFFSET UNITYSDK_OFFSET(0x15A05EF0)
#define CKPAOOFMPKC_GOLCOJGHMMD_OFFSET UNITYSDK_OFFSET(0x159FC0C0)
#define CKPAOOFMPKC_GPDCLCCFOGF_OFFSET UNITYSDK_OFFSET(0x18DE0ED0)
#define CKPAOOFMPKC_HBIEEPMFDMG_OFFSET UNITYSDK_OFFSET(0x15A000F0)
#define CKPAOOFMPKC_HFCPKAGJJBP_OFFSET UNITYSDK_OFFSET(0x159FFB60)
#define CKPAOOFMPKC_HGMNBEOLMCJ_OFFSET UNITYSDK_OFFSET(0x159FB230)
#define CKPAOOFMPKC_HHLJFHGFKKP_OFFSET UNITYSDK_OFFSET(0x159FCAB0)
#define CKPAOOFMPKC_HHLMBAKFMGA_OFFSET UNITYSDK_OFFSET(0x15A075A0)
#define CKPAOOFMPKC_HIDJCIGLDCK_OFFSET UNITYSDK_OFFSET(0x159FF160)
#define CKPAOOFMPKC_HIEAPGFDPND_OFFSET UNITYSDK_OFFSET(0x15A01D70)
#define CKPAOOFMPKC_HKPECPMOLBA_OFFSET UNITYSDK_OFFSET(0x15A00C10)
#define CKPAOOFMPKC_HMHNHPDKOHF_OFFSET UNITYSDK_OFFSET(0x18DE0640)
#define CKPAOOFMPKC_HMOMKDNFFAI_OFFSET UNITYSDK_OFFSET(0x15A051B0)
#define CKPAOOFMPKC_ICAHBJKLMFA_OFFSET UNITYSDK_OFFSET(0x15A00640)
#define CKPAOOFMPKC_ICFKJPIOIGK_OFFSET UNITYSDK_OFFSET(0x15A00630)
#define CKPAOOFMPKC_IEDDFDAAKIE_OFFSET UNITYSDK_OFFSET(0x159FC780)
#define CKPAOOFMPKC_IGNIJAOFPCA_OFFSET UNITYSDK_OFFSET(0x15A03320)
#define CKPAOOFMPKC_IJNLIKBFNAD_OFFSET UNITYSDK_OFFSET(0x18DE14B0)
#define CKPAOOFMPKC_IKCJBODMIAA_OFFSET UNITYSDK_OFFSET(0x159FFB20)
#define CKPAOOFMPKC_IKFGEIJPOLL_OFFSET UNITYSDK_OFFSET(0x15A02860)
#define CKPAOOFMPKC_IKHDAHADPKB_OFFSET UNITYSDK_OFFSET(0x159FE150)
#define CKPAOOFMPKC_ILDILDHDBIJ_OFFSET UNITYSDK_OFFSET(0x15A03890)
#define CKPAOOFMPKC_IPOFJPDNGBG_OFFSET UNITYSDK_OFFSET(0x159FBE90)
#define CKPAOOFMPKC_JANBABLBNJB_OFFSET UNITYSDK_OFFSET(0x15A00F40)
#define CKPAOOFMPKC_JBFHDMNOKJE_OFFSET UNITYSDK_OFFSET(0x159FB8D0)
#define CKPAOOFMPKC_JIEMJAIBDFA_OFFSET UNITYSDK_OFFSET(0x15A01EF0)
#define CKPAOOFMPKC_JJINOCJKPAJ_OFFSET UNITYSDK_OFFSET(0x15A00520)
#define CKPAOOFMPKC_JPCOOHLCMIJ_OFFSET UNITYSDK_OFFSET(0x18DE0320)
#define CKPAOOFMPKC_JPIAODBLDPH_OFFSET UNITYSDK_OFFSET(0x15A05160)
#define CKPAOOFMPKC_JPLHMDHAFDH_OFFSET UNITYSDK_OFFSET(0x18DE1460)
#define CKPAOOFMPKC_KCGDPEIJHMJ_OFFSET UNITYSDK_OFFSET(0x15A05540)
#define CKPAOOFMPKC_KIKPMOKEBBL_OFFSET UNITYSDK_OFFSET(0x159FF0D0)
#define CKPAOOFMPKC_KJBDAIBKMPE_OFFSET UNITYSDK_OFFSET(0x15A047F0)
#define CKPAOOFMPKC_KJKDPAIEPMC_OFFSET UNITYSDK_OFFSET(0x15A063B0)
#define CKPAOOFMPKC_KMCIKCMFDDM_OFFSET UNITYSDK_OFFSET(0x15A02F30)
#define CKPAOOFMPKC_KMLBCCOOBBI_OFFSET UNITYSDK_OFFSET(0x159FA6B0)
#define CKPAOOFMPKC_LBCBMJFHEBC_OFFSET UNITYSDK_OFFSET(0x159FE720)
#define CKPAOOFMPKC_LDJPOBPGKLO_OFFSET UNITYSDK_OFFSET(0x15A049A0)
#define CKPAOOFMPKC_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x159FFB10)
#define CKPAOOFMPKC_LFKKEEIKHPK_OFFSET UNITYSDK_OFFSET(0x15A02780)
#define CKPAOOFMPKC_LNIAPFPPNOM_OFFSET UNITYSDK_OFFSET(0x18DE06A0)
#define CKPAOOFMPKC_LNNHGAPKPMK_OFFSET UNITYSDK_OFFSET(0x15A06410)
#define CKPAOOFMPKC_LOEKKKOHLJM_OFFSET UNITYSDK_OFFSET(0x159FF760)
#define CKPAOOFMPKC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x15A07180)
#define CKPAOOFMPKC_MAEPBKIDDCK_OFFSET UNITYSDK_OFFSET(0x15A02870)
#define CKPAOOFMPKC_MCBHBHHHIHK_OFFSET UNITYSDK_OFFSET(0x15A01CA0)
#define CKPAOOFMPKC_MCCNJEKCEMH_OFFSET UNITYSDK_OFFSET(0x159FA5D0)
#define CKPAOOFMPKC_MCPFGDJDFGI_OFFSET UNITYSDK_OFFSET(0x159FBA40)
#define CKPAOOFMPKC_MDMFNOHNNCO_OFFSET UNITYSDK_OFFSET(0x15A06B90)
#define CKPAOOFMPKC_MFAIOPIGNEE_OFFSET UNITYSDK_OFFSET(0x159FCAC0)
#define CKPAOOFMPKC_MFGLBGBBBDF_OFFSET UNITYSDK_OFFSET(0x18DE1360)
#define CKPAOOFMPKC_MJFJAIMDHNF_OFFSET UNITYSDK_OFFSET(0x15A02FA0)
#define CKPAOOFMPKC_MJGPNFKLBCN_OFFSET UNITYSDK_OFFSET(0x15A04310)
#define CKPAOOFMPKC_MJIEEJGIGMJ_OFFSET UNITYSDK_OFFSET(0x15A02C50)
#define CKPAOOFMPKC_MLMOPEFJGGB_OFFSET UNITYSDK_OFFSET(0x15A071B0)
#define CKPAOOFMPKC_MMEEAEEFBJK_OFFSET UNITYSDK_OFFSET(0x15A00F50)
#define CKPAOOFMPKC_NKHEOLFIMJO_OFFSET UNITYSDK_OFFSET(0x18DE0E70)
#define CKPAOOFMPKC_NKLNCMGDCJO_OFFSET UNITYSDK_OFFSET(0x15A00310)
#define CKPAOOFMPKC_NLHOLEMHBEE_OFFSET UNITYSDK_OFFSET(0x15A05170)
#define CKPAOOFMPKC_NMIIJPPJBOO_OFFSET UNITYSDK_OFFSET(0x15A04D70)
#define CKPAOOFMPKC_NOCBCAINPIO_OFFSET UNITYSDK_OFFSET(0x15A06240)
#define CKPAOOFMPKC_NPAOCFLBKMC_OFFSET UNITYSDK_OFFSET(0x15A05F80)
#define CKPAOOFMPKC_NPCICCHBKCE_OFFSET UNITYSDK_OFFSET(0x159FEDC0)
#define CKPAOOFMPKC_OAEPDDFEECH_OFFSET UNITYSDK_OFFSET(0x15A05D80)
#define CKPAOOFMPKC_OCGLGFMJJEJ_OFFSET UNITYSDK_OFFSET(0x159FF8F0)
#define CKPAOOFMPKC_OEFIKNAJAFE_OFFSET UNITYSDK_OFFSET(0x15A04C50)
#define CKPAOOFMPKC_OFJDCOHFMDP_OFFSET UNITYSDK_OFFSET(0x15A000E0)
#define CKPAOOFMPKC_OGLKLJHDBJJ_OFFSET UNITYSDK_OFFSET(0x159FE710)
#define CKPAOOFMPKC_OHLKAICJONE_OFFSET UNITYSDK_OFFSET(0x15A034B0)
#define CKPAOOFMPKC_OIHBBEPHEKA_OFFSET UNITYSDK_OFFSET(0x15A050D0)
#define CKPAOOFMPKC_ONGBBCOABJO_OFFSET UNITYSDK_OFFSET(0x15A04A60)
#define CKPAOOFMPKC_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x18DDEDF0)
#define CKPAOOFMPKC_ONSTART_OFFSET UNITYSDK_OFFSET(0x18DDEC40)
#define CKPAOOFMPKC_OOGJNLDFOLO_OFFSET UNITYSDK_OFFSET(0x15A07190)
#define CKPAOOFMPKC_OOJBMGPLHGD_OFFSET UNITYSDK_OFFSET(0x18DDF4D0)
#define CKPAOOFMPKC_OONHCBCLDNN_OFFSET UNITYSDK_OFFSET(0x15A014B0)
#define CKPAOOFMPKC_OPJNBAJHLNI_OFFSET UNITYSDK_OFFSET(0x159FD880)
#define CKPAOOFMPKC_PFIKPCBLIDH_OFFSET UNITYSDK_OFFSET(0x15A071A0)
#define CKPAOOFMPKC_PFOIBDCACAC_OFFSET UNITYSDK_OFFSET(0x18DDFAE0)
#define CKPAOOFMPKC_PHCOBOAMMGK_OFFSET UNITYSDK_OFFSET(0x15A03BC0)
#define CKPAOOFMPKC_PHDDNMDFMAO_OFFSET UNITYSDK_OFFSET(0x159FEDB0)
#define CKPAOOFMPKC_PHFOAINMKLA_OFFSET UNITYSDK_OFFSET(0x18DE00C0)
#define CKPAOOFMPKC_PKIFEECEJNB_OFFSET UNITYSDK_OFFSET(0x159FA2F0)
#define CKPAOOFMPKC_PKMLBJOHDKC_OFFSET UNITYSDK_OFFSET(0x15A05C20)
#define CKPAOOFMPKC_PPKCDHEGMJL_OFFSET UNITYSDK_OFFSET(0x18DDFF60)
#define CKPAOOFMPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDEF60)

inline static constexpr unsigned int CKPAOOFMPKC_TypeDefinitionIndex = 90490;

class CKPAOOFMPKC : public ::JGELKBLKFHE
{
public:
	// static const ::System::Single AMNNFMKLPHN; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* GDINNENAGPF; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* CEHILLFJNOO; // 0x20
	::System::String* OHPLPLOJANB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* DPNCCIFNDKA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* DPHDBNKGHHN; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::UIOverlordFeastDishObjectControlWidgetController*>* MMEFMJHFBMO; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>*>* CPAACEGGFOD; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PCFEEPGKOHP; // 0x50
	::MoleMole::Config::ConfigOverlordFeast* POMPBKJLDIC; // 0x58
	::System::Collections::Generic::List_1<::IPGOKLLELPB*>* HJMDAGLEEPP; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* COAGNMGIEID; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* FDNKLBDHCJH; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* KGDAHLLAMNB; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* DBFGJKDAKHD; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NBKPBPNKLIH; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* PIGECJLMGLB; // 0x90
	::System::Collections::Generic::List_1<::PFFMFIIINIJ*>* _CBDIPAMJBLJ_k__BackingField; // 0x98
	::System::Collections::Generic::HashSet_1<::System::Int32>* FOJGBPHCPKJ; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* EJEAFNEOFFN; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* FHEBOACKIKM; // 0xB0
	::System::Collections::Generic::List_1<::System::Int32>* PDMDDKIFGHF; // 0xB8
	::JONIDDDCNNG* MFDIFEOLBLG; // 0xC0
	::System::UInt64 _HAAABLLLFFI_k__BackingField; // 0xC8
	::System::Int32 _LGIGEODDHCP_k__BackingField; // 0xD0
	::System::Int32 _BNJFLDNGNBM_k__BackingField; // 0xD4
	::System::UInt32 _OPGDMEGKDEO_k__BackingField; // 0xD8
	::System::Boolean _ELOCPGEGHIO_k__BackingField; // 0xDC
	::System::Byte _padding0[0x3];
	::System::Int32 _MLFJCOLNGKN_k__BackingField; // 0xE0
	::System::Int32 _CPMAOIBBFPE_k__BackingField; // 0xE4
	::System::Int32 _ECDLKHCCBCG_k__BackingField; // 0xE8
	::System::UInt32 _HKGPNLEHMAF_k__BackingField; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void OOJBMGPLHGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OOJBMGPLHGD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FOKGLLCBFPE*>* PFOIBDCACAC()
	{
		return ((::System::Collections::Generic::List_1<::FOKGLLCBFPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PFOIBDCACAC_OFFSET))(this);
	}

	::System::Int32 PPKCDHEGMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PPKCDHEGMJL_OFFSET))(this);
	}

	::System::Int32 PHFOAINMKLA(::System::Int32 MIPMFJPJENO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PHFOAINMKLA_OFFSET))(this, MIPMFJPJENO);
	}

	::System::Void JPCOOHLCMIJ(::System::Int32 EJFGMAHJMHK, ::System::Single NHLCCIEKEPD, ::System::String* MABGFIGCIGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JPCOOHLCMIJ_OFFSET))(this, EJFGMAHJMHK, NHLCCIEKEPD, MABGFIGCIGD);
	}

	::System::Void ENEFKKEJFIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ENEFKKEJFIB_OFFSET))(this);
	}

	::System::Boolean HMHNHPDKOHF(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HMHNHPDKOHF_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Void LNIAPFPPNOM(::System::Boolean DAGFJPONOGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LNIAPFPPNOM_OFFSET))(this, DAGFJPONOGC);
	}

	::System::Boolean NKHEOLFIMJO(::System::Int32 PFEJPGOCAIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NKHEOLFIMJO_OFFSET))(this, PFEJPGOCAIO);
	}

	::System::Void CNGICOEPHGA(::System::Int32 NPKEGCLAKJF, ::System::Int32 OGMFOALCDAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CNGICOEPHGA_OFFSET))(this, NPKEGCLAKJF, OGMFOALCDAE);
	}

	::System::Boolean GPDCLCCFOGF(::FAFDOHEJMBH* FMCHOLIBKGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAFDOHEJMBH*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GPDCLCCFOGF_OFFSET))(this, FMCHOLIBKGE);
	}

	::System::Boolean FIJBMKDDAKN(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FIJBMKDDAKN_OFFSET))(this, ABHBKFJKINO);
	}

	::CJIEIHEDMME* MFGLBGBBBDF()
	{
		return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MFGLBGBBBDF_OFFSET))(this);
	}

	::CJIEIHEDMME* JPLHMDHAFDH()
	{
		return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JPLHMDHAFDH_OFFSET))(this);
	}

	::System::Void IJNLIKBFNAD(::System::Collections::Generic::List_1<::System::Int32>* MPJOLKIAAIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IJNLIKBFNAD_OFFSET))(this, MPJOLKIAAIL);
	}

	::System::Boolean CPGOADLFEJC(::System::Int32 FMJPOIFLFOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CPGOADLFEJC_OFFSET))(this, FMJPOIFLFOJ);
	}

	::System::Void PKIFEECEJNB(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PKIFEECEJNB_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void FIDLCKFGEAG(::System::Boolean COMHKJLKMEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FIDLCKFGEAG_OFFSET))(this, COMHKJLKMEL);
	}

	::MoleMole::UIOverlordFeastDishObjectControlWidgetController* MCCNJEKCEMH(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::UIOverlordFeastDishObjectControlWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MCCNJEKCEMH_OFFSET))(this, ABHBKFJKINO);
	}

	::System::UInt64 GMFAFIGJAOP()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GMFAFIGJAOP_OFFSET))(this);
	}

	::CJIEIHEDMME* KMLBCCOOBBI()
	{
		return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KMLBCCOOBBI_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::UnityEngine::Vector3> GNDMCJBCBEN(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* ELIHJHAAANF)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GNDMCJBCBEN_OFFSET))(this, ELIHJHAAANF);
	}

	::System::Boolean BKGMFKILFJG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BKGMFKILFJG_OFFSET))(this);
	}

	static ::System::Void MCPFGDJDFGI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MCPFGDJDFGI_OFFSET))();
	}

	::System::Boolean AAEJBBKHFOJ(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_AAEJBBKHFOJ_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 FGFJFJNCJFK(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FGFJFJNCJFK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void GOLCOJGHMMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GOLCOJGHMMD_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void IEDDFDAAKIE(::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC, ::DFDEIDBBGHG_1<::System::UInt32>* OBBNOMJGAAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::DFDEIDBBGHG_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IEDDFDAAKIE_OFFSET))(this, DJLOKMMLFJC, OBBNOMJGAAK);
	}

	::System::Void EPNMNIBDCNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_EPNMNIBDCNF_OFFSET))(this);
	}

	::System::Void HHLJFHGFKKP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HHLJFHGFKKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MFAIOPIGNEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MFAIOPIGNEE_OFFSET))(this);
	}

	::System::Void BOBPJBGNFNL(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BOBPJBGNFNL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BAKLCBOHGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BAKLCBOHGDH_OFFSET))(this);
	}

	::System::Void CMJKDMIFAGO(::System::Collections::Generic::List_1<::System::Int32>* FDJEKOKCGGJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CMJKDMIFAGO_OFFSET))(this, FDJEKOKCGGJ);
	}

	::System::Void OGLKLJHDBJJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OGLKLJHDBJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LBCBMJFHEBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LBCBMJFHEBC_OFFSET))(this);
	}

	::System::Void PHDDNMDFMAO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PHDDNMDFMAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPCICCHBKCE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NPCICCHBKCE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KIKPMOKEBBL(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KIKPMOKEBBL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void HIDJCIGLDCK(::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* ALLCAEEHNCE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HIDJCIGLDCK_OFFSET))(this, ALLCAEEHNCE, ABHBKFJKINO);
	}

	::System::Void DGBIBANKLIC(::System::UInt32 HHEGANCPILH, ::HJKLKLMHPKG* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HJKLKLMHPKG*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DGBIBANKLIC_OFFSET))(this, HHEGANCPILH, HMMMOCJAEOA);
	}

	::System::Void OCGLGFMJJEJ(::System::Int32 PFEJPGOCAIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OCGLGFMJJEJ_OFFSET))(this, PFEJPGOCAIO);
	}

	::System::UInt32 LFGIDEIHCID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Int32 IKCJBODMIAA(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IKCJBODMIAA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 HFCPKAGJJBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HFCPKAGJJBP_OFFSET))(this);
	}

	::System::Int32 GEKGGLPMMLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GEKGGLPMMLK_OFFSET))(this);
	}

	::System::Void DLBCMPFJDOE(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DLBCMPFJDOE_OFFSET))(this, PAEEEHKILOC);
	}

	::System::UInt32 OFJDCOHFMDP()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OFJDCOHFMDP_OFFSET))(this);
	}

	::System::Void HBIEEPMFDMG(::System::Int32 FMJPOIFLFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HBIEEPMFDMG_OFFSET))(this, FMJPOIFLFOJ);
	}

	::System::Void HGMNBEOLMCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HGMNBEOLMCJ_OFFSET))(this);
	}

	::System::Void NKLNCMGDCJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NKLNCMGDCJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* CJHECPIPCHL()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CJHECPIPCHL_OFFSET))(this);
	}

	::UnityEngine::Vector3 JJINOCJKPAJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JJINOCJKPAJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void ICFKJPIOIGK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ICFKJPIOIGK_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void ICAHBJKLMFA(::System::Boolean LLNMHCPBFLJ)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ICAHBJKLMFA_OFFSET))(LLNMHCPBFLJ);
	}

	::System::Void BKPDDCNNIBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BKPDDCNNIBI_OFFSET))(this);
	}

	::System::Void EMABMJMKMNM(::System::Collections::Generic::List_1<::System::Int32>* BIKLLNIIAKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_EMABMJMKMNM_OFFSET))(this, BIKLLNIIAKE);
	}

	::System::Void HKPECPMOLBA(::System::Collections::Generic::List_1<::System::Int32>* CMIANMPJLLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HKPECPMOLBA_OFFSET))(this, CMIANMPJLLA);
	}

	::System::Boolean FCPPJFKJHAF(::System::Int32 JMIJLGOIFOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FCPPJFKJHAF_OFFSET))(this, JMIJLGOIFOJ);
	}

	::System::Boolean JANBABLBNJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JANBABLBNJB_OFFSET))(this);
	}

	::System::Void MMEEAEEFBJK(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MMEEAEEFBJK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void OONHCBCLDNN(::System::Collections::Generic::List_1<::OCIAMHMOLOF*>* ENMPODCIJGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OCIAMHMOLOF*>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OONHCBCLDNN_OFFSET))(this, ENMPODCIJGH);
	}

	::System::Boolean MCBHBHHHIHK(::System::Int32 DEGHHNGDMNJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MCBHBHHHIHK_OFFSET))(this, DEGHHNGDMNJ);
	}

	::System::Single HIEAPGFDPND()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HIEAPGFDPND_OFFSET))(this);
	}

	::System::Boolean JIEMJAIBDFA(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JIEMJAIBDFA_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Boolean ACPIPCPEOLG(::System::Int32 KPMKFCCIPAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ACPIPCPEOLG_OFFSET))(this, KPMKFCCIPAJ);
	}

	::System::Void CFJNIOFAPKP(::System::Int32 CANJKOGCPAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CFJNIOFAPKP_OFFSET))(this, CANJKOGCPAF);
	}

	::System::Void IKFGEIJPOLL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IKFGEIJPOLL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MAEPBKIDDCK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MAEPBKIDDCK_OFFSET))(this);
	}

	::System::Void MJIEEJGIGMJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MJIEEJGIGMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IKHDAHADPKB(::System::Int32 HIIPLPLPBID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IKHDAHADPKB_OFFSET))(this, HIIPLPLPBID);
	}

	::System::Void GDOHHCNBAPF(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GDOHHCNBAPF_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>* IPOFJPDNGBG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IPOFJPDNGBG_OFFSET))(this);
	}

	::System::Void MJFJAIMDHNF(::System::Boolean DAGFJPONOGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MJFJAIMDHNF_OFFSET))(this, DAGFJPONOGC);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> ILDILDHDBIJ(::System::Int32 FMJPOIFLFOJ)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ILDILDHDBIJ_OFFSET))(this, FMJPOIFLFOJ);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* PHCOBOAMMGK()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PHCOBOAMMGK_OFFSET))(this);
	}

	::System::Int32 BHGNGANECLH(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BHGNGANECLH_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GDNGKMBJOFF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GDNGKMBJOFF_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::UnityEngine::Vector3> MJGPNFKLBCN(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* ELIHJHAAANF, ::System::Int32 KDLFPIFEKCL)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MJGPNFKLBCN_OFFSET))(this, ELIHJHAAANF, KDLFPIFEKCL);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* DBKABCOGFNP(::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* ALLCAEEHNCE, ::System::Int32 JJPJKMJFGMI)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DBKABCOGFNP_OFFSET))(this, ALLCAEEHNCE, JJPJKMJFGMI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KJBDAIBKMPE(::System::Int32 MIPMFJPJENO)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KJBDAIBKMPE_OFFSET))(this, MIPMFJPJENO);
	}

	::System::Void LDJPOBPGKLO(::System::UInt32 HPBOOBIACHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LDJPOBPGKLO_OFFSET))(this, HPBOOBIACHG);
	}

	::System::Void ONGBBCOABJO(::System::Int32 FMJPOIFLFOJ, ::System::Int32 CJBHCGONAHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_ONGBBCOABJO_OFFSET))(this, FMJPOIFLFOJ, CJBHCGONAHG);
	}

	::System::Void OPJNBAJHLNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OPJNBAJHLNI_OFFSET))(this);
	}

	::System::Void OHLKAICJONE(::System::String* NEMPLBEOHAK, ::System::Boolean PJHHCOMDBND)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OHLKAICJONE_OFFSET))(this, NEMPLBEOHAK, PJHHCOMDBND);
	}

	::System::Void IGNIJAOFPCA(::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_IGNIJAOFPCA_OFFSET))(this, IHLBALNBGKM);
	}

	::System::Void NMIIJPPJBOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NMIIJPPJBOO_OFFSET))(this);
	}

	::System::Boolean AABOCOAGAIP(::System::Int32 MIPMFJPJENO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_AABOCOAGAIP_OFFSET))(this, MIPMFJPJENO);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* OIHBBEPHEKA()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OIHBBEPHEKA_OFFSET))(this);
	}

	::System::Boolean DDKMCPGOLIP(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DDKMCPGOLIP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CEOPFCJGCDL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CEOPFCJGCDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* JPIAODBLDPH()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JPIAODBLDPH_OFFSET))(this);
	}

	::MoleMole::Config::ConfigOverlordFeast* NLHOLEMHBEE()
	{
		return ((::MoleMole::Config::ConfigOverlordFeast*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NLHOLEMHBEE_OFFSET))(this);
	}

	::System::Boolean HMOMKDNFFAI(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HMOMKDNFFAI_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Void LOEKKKOHLJM(::System::UInt32 HHEGANCPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LOEKKKOHLJM_OFFSET))(this, HHEGANCPILH);
	}

	::System::Boolean DONEJHEDEKK(::FAFDOHEJMBH* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAFDOHEJMBH*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_DONEJHEDEKK_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean APPCDBCJNLG(::System::Int32 ABHBKFJKINO, ::System::Int32 GPFBJLEHCKG, ::System::Int32 MFMMNGCBIGD, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*& ALLCAEEHNCE, ::UnityEngine::Vector3& OMPDANBKBME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_APPCDBCJNLG_OFFSET))(this, ABHBKFJKINO, GPFBJLEHCKG, MFMMNGCBIGD, ALLCAEEHNCE, OMPDANBKBME);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* EHMMDLCPKBO()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_EHMMDLCPKBO_OFFSET))(this);
	}

	::System::Int32 PKMLBJOHDKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PKMLBJOHDKC_OFFSET))(this);
	}

	::System::Void LFKKEEIKHPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LFKKEEIKHPK_OFFSET))(this);
	}

	::System::Void OAEPDDFEECH(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OAEPDDFEECH_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void GNFCCJCKPDH(::System::Int32 ABHBKFJKINO, ::UnityEngine::Vector3 BFICHLHBHJD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GNFCCJCKPDH_OFFSET))(this, ABHBKFJKINO, BFICHLHBHJD);
	}

	::System::Void NPAOCFLBKMC(::System::Collections::Generic::List_1<::PFFMFIIINIJ*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PFFMFIIINIJ*>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NPAOCFLBKMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EDGNEABEHLG(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* ELIHJHAAANF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_EDGNEABEHLG_OFFSET))(this, ELIHJHAAANF);
	}

	::System::Void GLKACALKAGP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GLKACALKAGP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean KCGDPEIJHMJ(::System::Int32 PFEJPGOCAIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KCGDPEIJHMJ_OFFSET))(this, PFEJPGOCAIO);
	}

	::System::Void NOCBCAINPIO(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_NOCBCAINPIO_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Void KJKDPAIEPMC(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EDPEJJKGCOI, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IPAEOAMHEOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KJKDPAIEPMC_OFFSET))(this, EDPEJJKGCOI, IPAEOAMHEOH);
	}

	::System::Void LNNHGAPKPMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LNNHGAPKPMK_OFFSET))(this);
	}

	::System::Boolean BDHLMIJOHLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BDHLMIJOHLC_OFFSET))(this);
	}

	::System::Void CBBMBPDOLPB(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CBBMBPDOLPB_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Boolean KMCIKCMFDDM(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_KMCIKCMFDDM_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 GCLHMFHKGFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GCLHMFHKGFG_OFFSET))(this);
	}

	::System::Int32 BBNFNFNCBJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_BBNFNFNCBJO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::PFFMFIIINIJ*>* EDMNNNIELFK()
	{
		return ((::System::Collections::Generic::List_1<::PFFMFIIINIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_EDMNNNIELFK_OFFSET))(this);
	}

	::System::Void FMBBFNFHMIH(::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC, ::DFDEIDBBGHG_1<::System::UInt32>* OBBNOMJGAAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::DFDEIDBBGHG_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FMBBFNFHMIH_OFFSET))(this, DJLOKMMLFJC, OBBNOMJGAAK);
	}

	::System::Void GBHBGEBHNPD(::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GBHBGEBHNPD_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Int32 FHDKLHBGLDC(::System::Int32 FMJPOIFLFOJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_FHDKLHBGLDC_OFFSET))(this, FMJPOIFLFOJ);
	}

	::System::Boolean MDMFNOHNNCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MDMFNOHNNCO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::PFFMFIIINIJ*>* GGCFCCAPCCF(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Collections::Generic::List_1<::PFFMFIIINIJ*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GGCFCCAPCCF_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 OOGJNLDFOLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OOGJNLDFOLO_OFFSET))(this);
	}

	::System::Void OEFIKNAJAFE(::System::Int32 EJFGMAHJMHK, ::System::Single NHLCCIEKEPD, ::System::String* MABGFIGCIGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OEFIKNAJAFE_OFFSET))(this, EJFGMAHJMHK, NHLCCIEKEPD, MABGFIGCIGD);
	}

	::System::Void PFIKPCBLIDH(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PFIKPCBLIDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::FAFDOHEJMBH*>* JBFHDMNOKJE()
	{
		return ((::System::Collections::Generic::List_1<::FAFDOHEJMBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JBFHDMNOKJE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MLMOPEFJGGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MLMOPEFJGGB_OFFSET))(this);
	}

	::System::Void HHLMBAKFMGA(::System::UInt32 HHEGANCPILH, ::HJKLKLMHPKG* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HJKLKLMHPKG*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HHLMBAKFMGA_OFFSET))(this, HHEGANCPILH, HMMMOCJAEOA);
	}
};
