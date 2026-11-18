#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class EKABGIOPGGF;
class GEKNEEMAHBC;
class HGAJKHIMKJP;
class LFDDLEHKGIK;
namespace Foundation { class AppVersion; }
namespace Foundation { class IAssetPool; }
namespace MoleMole { class IVideoPlayer; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MFCLGIJBDGN_ACHDLIKECCF_OFFSET UNITYSDK_OFFSET(0x151C67A0)
#define MFCLGIJBDGN_ADMJNNPJNIJ_OFFSET UNITYSDK_OFFSET(0x151CA910)
#define MFCLGIJBDGN_AGPHOMOGPHO_OFFSET UNITYSDK_OFFSET(0x151CC0E0)
#define MFCLGIJBDGN_ALPFIJDGHPD_OFFSET UNITYSDK_OFFSET(0x151C9E90)
#define MFCLGIJBDGN_ANALEHOCODI_OFFSET UNITYSDK_OFFSET(0x151C92B0)
#define MFCLGIJBDGN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x151CB230)
#define MFCLGIJBDGN_BLHLMAONFHA_OFFSET UNITYSDK_OFFSET(0x151C9550)
#define MFCLGIJBDGN_CBAFIDDDLMP_OFFSET UNITYSDK_OFFSET(0x151C8C90)
#define MFCLGIJBDGN_CNOAGDNBMHM_OFFSET UNITYSDK_OFFSET(0x151C87D0)
#define MFCLGIJBDGN_DAACHMKLKMC_OFFSET UNITYSDK_OFFSET(0x151C9B50)
#define MFCLGIJBDGN_DFAKKDOBMAI_OFFSET UNITYSDK_OFFSET(0x151C8EA0)
#define MFCLGIJBDGN_EDKDMEEFFDP_OFFSET UNITYSDK_OFFSET(0x151C96B0)
#define MFCLGIJBDGN_EDNICMFHPEI_OFFSET UNITYSDK_OFFSET(0x151C9590)
#define MFCLGIJBDGN_EKGGNLPBOAI_OFFSET UNITYSDK_OFFSET(0x151C8B10)
#define MFCLGIJBDGN_FFBIJLFKHJN_OFFSET UNITYSDK_OFFSET(0x151CBDD0)
#define MFCLGIJBDGN_FGNGAFAPFGI_OFFSET UNITYSDK_OFFSET(0x151C4490)
#define MFCLGIJBDGN_FINMIOPFIMG_OFFSET UNITYSDK_OFFSET(0x151CB1F0)
#define MFCLGIJBDGN_FLGDKKBOIHE_OFFSET UNITYSDK_OFFSET(0x151CBA40)
#define MFCLGIJBDGN_FMIPPEIDFAF_OFFSET UNITYSDK_OFFSET(0x151CB940)
#define MFCLGIJBDGN_GHPFHFLDMIO_OFFSET UNITYSDK_OFFSET(0x151C4DD0)
#define MFCLGIJBDGN_GIDHBGNAOJB_OFFSET UNITYSDK_OFFSET(0x151CC020)
#define MFCLGIJBDGN_GJIBGEDHPFK_OFFSET UNITYSDK_OFFSET(0x151C70F0)
#define MFCLGIJBDGN_GKPMDJDBMMD_OFFSET UNITYSDK_OFFSET(0x151C60C0)
#define MFCLGIJBDGN_GMGGDOJGJEB_OFFSET UNITYSDK_OFFSET(0x151C4410)
#define MFCLGIJBDGN_GMGKKNEHOIM_OFFSET UNITYSDK_OFFSET(0x151CA2A0)
#define MFCLGIJBDGN_GNBMLGCCOAG_OFFSET UNITYSDK_OFFSET(0x151C9650)
#define MFCLGIJBDGN_HBEKFKCNFKC_OFFSET UNITYSDK_OFFSET(0x151C9670)
#define MFCLGIJBDGN_HEGHEHAJLCE_OFFSET UNITYSDK_OFFSET(0x151C8100)
#define MFCLGIJBDGN_HGKNHDAEHCM_OFFSET UNITYSDK_OFFSET(0x151C66A0)
#define MFCLGIJBDGN_HJDHGCLCGKE_OFFSET UNITYSDK_OFFSET(0x151C4800)
#define MFCLGIJBDGN_IAEGNCHBPFB_OFFSET UNITYSDK_OFFSET(0x151C8830)
#define MFCLGIJBDGN_IJGMPJFOOGE_OFFSET UNITYSDK_OFFSET(0x151C8B90)
#define MFCLGIJBDGN_ILDPPEJECAN_OFFSET UNITYSDK_OFFSET(0x151C4B80)
#define MFCLGIJBDGN_JCPELPOCKPP_OFFSET UNITYSDK_OFFSET(0x151C9660)
#define MFCLGIJBDGN_JFAMOODFLOA_OFFSET UNITYSDK_OFFSET(0x151CB570)
#define MFCLGIJBDGN_JFCMJAJKLAN_OFFSET UNITYSDK_OFFSET(0x151C69D0)
#define MFCLGIJBDGN_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x151CBE50)
#define MFCLGIJBDGN_KDBJKLPBILI_1_OFFSET UNITYSDK_OFFSET(0x151C68B0)
#define MFCLGIJBDGN_KDBJKLPBILI_OFFSET UNITYSDK_OFFSET(0x151C5ED0)
#define MFCLGIJBDGN_KGBMIKPBBKL_OFFSET UNITYSDK_OFFSET(0x151C62F0)
#define MFCLGIJBDGN_LEAPEOIOHIF_OFFSET UNITYSDK_OFFSET(0x151AEFB0)
#define MFCLGIJBDGN_MBEJJMNCBOB_OFFSET UNITYSDK_OFFSET(0x151C4590)
#define MFCLGIJBDGN_MDHPPJGDMBC_OFFSET UNITYSDK_OFFSET(0x151C5050)
#define MFCLGIJBDGN_MFKOMJHAGBF_1_OFFSET UNITYSDK_OFFSET(0x151C5CF0)
#define MFCLGIJBDGN_MFKOMJHAGBF_OFFSET UNITYSDK_OFFSET(0x151C5BE0)
#define MFCLGIJBDGN_MHNADNNFBAA_OFFSET UNITYSDK_OFFSET(0x151CAAF0)
#define MFCLGIJBDGN_MKDGHEMJIHI_OFFSET UNITYSDK_OFFSET(0x151CB340)
#define MFCLGIJBDGN_MKELLMKKELG_OFFSET UNITYSDK_OFFSET(0x151C4990)
#define MFCLGIJBDGN_MMCBLDPPHBG_OFFSET UNITYSDK_OFFSET(0x151C8F50)
#define MFCLGIJBDGN_MOFHMEDFKJD_1_OFFSET UNITYSDK_OFFSET(0x151C6240)
#define MFCLGIJBDGN_MOFHMEDFKJD_OFFSET UNITYSDK_OFFSET(0x151C6140)
#define MFCLGIJBDGN_MOGNKKOBAOA_OFFSET UNITYSDK_OFFSET(0x151C55A0)
#define MFCLGIJBDGN_NELFFKGPPOO_OFFSET UNITYSDK_OFFSET(0x151C7FE0)
#define MFCLGIJBDGN_NIBBAHHNINM_OFFSET UNITYSDK_OFFSET(0x151C6640)
#define MFCLGIJBDGN_OLCOHKBNMBJ_OFFSET UNITYSDK_OFFSET(0x151C9450)
#define MFCLGIJBDGN_PGADDBBMFND_OFFSET UNITYSDK_OFFSET(0x151CB790)
#define MFCLGIJBDGN_PMBCIECFDDI_1_OFFSET UNITYSDK_OFFSET(0x151C9D30)
#define MFCLGIJBDGN_PMBCIECFDDI_OFFSET UNITYSDK_OFFSET(0x151C9BF0)
#define MFCLGIJBDGN_PMCPCCMIJKO_OFFSET UNITYSDK_OFFSET(0x151CB510)
#define MFCLGIJBDGN_PNOAEKPPLJG_1_OFFSET UNITYSDK_OFFSET(0x151C89F0)
#define MFCLGIJBDGN_PNOAEKPPLJG_OFFSET UNITYSDK_OFFSET(0x151C6F00)
#define MFCLGIJBDGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x151C4350)

inline static constexpr unsigned int MFCLGIJBDGN_TypeDefinitionIndex = 71153;

class MFCLGIJBDGN : public ::System::Object
{
public:
	static ::Foundation::IAssetPool** StaticGet__LGJMOEJIHAB_k__BackingField()
	{
		return (::Foundation::IAssetPool**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN_TypeDefinitionIndex)->GetStaticField(0x36530);
	}
	static ::System::String** StaticGet_AKOJOHCMPNB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN_TypeDefinitionIndex)->GetStaticField(0x36538);
	}
	static ::Foundation::AppVersion** StaticGet_JLLDHBNFBOB()
	{
		return (::Foundation::AppVersion**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN_TypeDefinitionIndex)->GetStaticField(0x36540);
	}
	static ::System::Boolean* StaticGet_KGBACALLHCE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN_TypeDefinitionIndex)->GetStaticField(0xC240);
	}
	static ::System::Boolean* StaticGet_IKCEPAECMEC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN_TypeDefinitionIndex)->GetStaticField(0xC241);
	}
	// static const ::System::String* EDKPBANFIGB; // 0x0
	// static const ::System::String* DGADHLOEPHO; // 0x0
	// static const ::System::String* DJJGDCHOHGF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN__CCTOR_OFFSET))();
	}

	static ::System::Void GMGGDOJGJEB(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GMGGDOJGJEB_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::String* FGNGAFAPFGI()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_FGNGAFAPFGI_OFFSET))();
	}

	static ::System::UInt64 HJDHGCLCGKE()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_HJDHGCLCGKE_OFFSET))();
	}

	static ::System::Void MKELLMKKELG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MKELLMKKELG_OFFSET))();
	}

	static ::System::Void ILDPPEJECAN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_ILDPPEJECAN_OFFSET))();
	}

	static ::System::Void GHPFHFLDMIO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GHPFHFLDMIO_OFFSET))();
	}

	static ::System::Void MDHPPJGDMBC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MDHPPJGDMBC_OFFSET))();
	}

	static ::UnityEngine::GameObject* MFKOMJHAGBF(::System::String* BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean ACEFMHAALEI)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MFKOMJHAGBF_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ACEFMHAALEI);
	}

	static ::System::Void KDBJKLPBILI(::Foundation::AssetPath BLIGEBLANDA, ::UnityEngine::GameObject* GENFJNEPKEA, ::System::Boolean BENKDAIFHKO, ::Foundation::AssetType PLBEEGPKHNN)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_KDBJKLPBILI_OFFSET))(BLIGEBLANDA, GENFJNEPKEA, BENKDAIFHKO, PLBEEGPKHNN);
	}

	static ::System::Boolean GKPMDJDBMMD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GKPMDJDBMMD_OFFSET))();
	}

	static ::UnityEngine::GameObject* MOFHMEDFKJD(::System::String* ABOMFKBGCAJ, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MOFHMEDFKJD_OFFSET))(ABOMFKBGCAJ, JNLBPMKIFNK);
	}

	static ::System::Void KGBMIKPBBKL(::System::Boolean NPLLIOEAGIM)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_KGBMIKPBBKL_OFFSET))(NPLLIOEAGIM);
	}

	static ::System::Boolean HGKNHDAEHCM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_HGKNHDAEHCM_OFFSET))();
	}

	static ::System::Void KDBJKLPBILI_1(::System::String* BLIGEBLANDA, ::UnityEngine::GameObject* GENFJNEPKEA, ::System::Boolean BENKDAIFHKO, ::Foundation::AssetType PLBEEGPKHNN)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_KDBJKLPBILI_1_OFFSET))(BLIGEBLANDA, GENFJNEPKEA, BENKDAIFHKO, PLBEEGPKHNN);
	}

	static ::System::String* JFCMJAJKLAN(::System::String* FGDDNCDCNNO, ::System::String* LHIJMADONJC)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_JFCMJAJKLAN_OFFSET))(FGDDNCDCNNO, LHIJMADONJC);
	}

	static ::System::Void PNOAEKPPLJG(::Foundation::AssetPath BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO, ::System::Boolean ACEFMHAALEI)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PNOAEKPPLJG_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ADNIDJNEDGO, ACEFMHAALEI);
	}

	static ::System::String* GJIBGEDHPFK()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GJIBGEDHPFK_OFFSET))();
	}

	static ::System::Void NELFFKGPPOO(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NELFFKGPPOO_OFFSET))(NJOAJLDJCCJ, KMOHKCADPNA);
	}

	static ::System::Void HEGHEHAJLCE(::System::Int32 JLDNMNKIAAE)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_HEGHEHAJLCE_OFFSET))(JLDNMNKIAAE);
	}

	static ::Foundation::IAssetPool* CNOAGDNBMHM()
	{
		return ((::Foundation::IAssetPool*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_CNOAGDNBMHM_OFFSET))();
	}

	static ::LFDDLEHKGIK* IAEGNCHBPFB()
	{
		return ((::LFDDLEHKGIK*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_IAEGNCHBPFB_OFFSET))();
	}

	static ::System::Void PNOAEKPPLJG_1(::System::String* BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO, ::System::Boolean ACEFMHAALEI)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PNOAEKPPLJG_1_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ADNIDJNEDGO, ACEFMHAALEI);
	}

	static ::System::Boolean EKGGNLPBOAI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_EKGGNLPBOAI_OFFSET))();
	}

	static ::System::Boolean IJGMPJFOOGE(::System::String* AGGMDBGNPLC)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_IJGMPJFOOGE_OFFSET))(AGGMDBGNPLC);
	}

	static ::System::Void CBAFIDDDLMP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_CBAFIDDDLMP_OFFSET))();
	}

	static ::System::Void DFAKKDOBMAI(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_DFAKKDOBMAI_OFFSET))(NPPMJEIPMFC);
	}

	static ::EKABGIOPGGF* NIBBAHHNINM()
	{
		return ((::EKABGIOPGGF*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NIBBAHHNINM_OFFSET))();
	}

	static ::System::Boolean ANALEHOCODI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_ANALEHOCODI_OFFSET))();
	}

	static ::System::String* OLCOHKBNMBJ()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_OLCOHKBNMBJ_OFFSET))();
	}

	static ::System::Void MOGNKKOBAOA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MOGNKKOBAOA_OFFSET))();
	}

	static ::System::Void BLHLMAONFHA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_BLHLMAONFHA_OFFSET))();
	}

	static ::Foundation::AppVersion* MBEJJMNCBOB()
	{
		return ((::Foundation::AppVersion*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MBEJJMNCBOB_OFFSET))();
	}

	static ::System::Boolean EDNICMFHPEI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_EDNICMFHPEI_OFFSET))();
	}

	static ::System::Boolean GNBMLGCCOAG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GNBMLGCCOAG_OFFSET))();
	}

	static ::System::Boolean JCPELPOCKPP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_JCPELPOCKPP_OFFSET))();
	}

	static ::System::Boolean HBEKFKCNFKC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_HBEKFKCNFKC_OFFSET))();
	}

	static ::System::Void EDKDMEEFFDP(::MoleMole::IVideoPlayer* CEHEDIJEJFG, ::System::String* CJBJONJDOLI, ::Foundation::AssetRequestHandle& DGAAAONDIOD, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::System::Void(*)(::MoleMole::IVideoPlayer*, ::System::String*, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_EDKDMEEFFDP_OFFSET))(CEHEDIJEJFG, CJBJONJDOLI, DGAAAONDIOD, EPGLPGPOOJN);
	}

	static ::System::Void DAACHMKLKMC(::UnityEngine::Object* EIFONLCJOPG, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_DAACHMKLKMC_OFFSET))(EIFONLCJOPG, HIAIKHDFCLN);
	}

	static ::Foundation::AssetRequestHandle PMBCIECFDDI(::System::String* BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO)
	{
		return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PMBCIECFDDI_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ADNIDJNEDGO);
	}

	static ::System::Void ALPFIJDGHPD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_ALPFIJDGHPD_OFFSET))();
	}

	static ::System::Void GMGKKNEHOIM(::System::Boolean PDABBPAODHC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GMGKKNEHOIM_OFFSET))(PDABBPAODHC);
	}

	static ::System::String* ADMJNNPJNIJ()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_ADMJNNPJNIJ_OFFSET))();
	}

	static ::System::String* ACHDLIKECCF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_ACHDLIKECCF_OFFSET))();
	}

	static ::System::String* MHNADNNFBAA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MHNADNNFBAA_OFFSET))();
	}

	static ::System::Boolean FINMIOPFIMG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_FINMIOPFIMG_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_BBOMJDBNHIC_OFFSET))();
	}

	static ::UnityEngine::GameObject* MFKOMJHAGBF_1(::Foundation::AssetPath BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean ACEFMHAALEI)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MFKOMJHAGBF_1_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ACEFMHAALEI);
	}

	static ::System::Void MKDGHEMJIHI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MKDGHEMJIHI_OFFSET))();
	}

	static ::System::Void PMCPCCMIJKO(::Foundation::IAssetPool* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PMCPCCMIJKO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean JFAMOODFLOA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_JFAMOODFLOA_OFFSET))();
	}

	static ::System::Void PGADDBBMFND(::System::String* OLOMNNBBHPJ)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PGADDBBMFND_OFFSET))(OLOMNNBBHPJ);
	}

	static ::System::String* FMIPPEIDFAF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_FMIPPEIDFAF_OFFSET))();
	}

	static ::System::Void FLGDKKBOIHE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_FLGDKKBOIHE_OFFSET))();
	}

	static ::UnityEngine::GameObject* MOFHMEDFKJD_1(::Foundation::AssetPath ABOMFKBGCAJ, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MOFHMEDFKJD_1_OFFSET))(ABOMFKBGCAJ, JNLBPMKIFNK);
	}

	static ::System::Void FFBIJLFKHJN(::UnityEngine::Object* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_FFBIJLFKHJN_OFFSET))(HODAIDNDKHD);
	}

	static ::HGAJKHIMKJP* LEAPEOIOHIF(::System::Int32 KKGGACLGGPN)
	{
		return ((::HGAJKHIMKJP*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_LEAPEOIOHIF_OFFSET))(KKGGACLGGPN);
	}

	static ::Foundation::AssetRequestHandle PMBCIECFDDI_1(::Foundation::AssetPath BLIGEBLANDA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO)
	{
		return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_PMBCIECFDDI_1_OFFSET))(BLIGEBLANDA, JNLBPMKIFNK, ADNIDJNEDGO);
	}

	static ::System::Void JMDEKPONKMF(::System::Boolean BPOEOCKDGPK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_JMDEKPONKMF_OFFSET))(BPOEOCKDGPK);
	}

	static ::System::Void GIDHBGNAOJB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_GIDHBGNAOJB_OFFSET))(EGEGIMGMJHN);
	}

	static ::GEKNEEMAHBC* AGPHOMOGPHO()
	{
		return ((::GEKNEEMAHBC*(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN_AGPHOMOGPHO_OFFSET))();
	}

	static ::System::Void MMCBLDPPHBG(::System::Boolean NPPMJEIPMFC, ::System::String* OJBBANAIMHM, ::System::String* DCLOILBHFBJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_MMCBLDPPHBG_OFFSET))(NPPMJEIPMFC, OJBBANAIMHM, DCLOILBHFBJ);
	}
};
