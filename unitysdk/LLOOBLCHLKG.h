#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIBLOGEIACA.h"
#include "unitysdk/IAEAIIIKDFC.h"
#include "unitysdk/JPNPGNEJLNK.h"
#include "unitysdk/LAHLPILMPMN.h"
#include "unitysdk/MHBHNMGDBGI.h"
#include "unitysdk/OLJPAMKGJAH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Foundation/AssetPath.h"

class CFHOEGBMPKN;
class CKKFPPNEMIJ;
class DEPFFHDJHKL;
class EAOAPCGBHBP;
class IDIEEOGFPAO;
class ILDGBMPPCGP;
class LLPHAEAKLMP;
class MBBCFJKMFNF;
class OBINJGMPCIH;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class CharacterConfigPhotoCamera; }
namespace MoleMole::Config { class ConfigPhotoCamera; }
namespace MoleMole::Config { class ConfigPhotoCameraFrameInner; }
namespace MoleMole::Config { class ConfigPhotoCameraFrameOuter; }
namespace MoleMole::Config { class ConfigPhotoCameraFramePhoto; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define LLOOBLCHLKG_AAFFFKHMDGF_OFFSET UNITYSDK_OFFSET(0x14DC7A30)
#define LLOOBLCHLKG_AFDDLAEINOC_OFFSET UNITYSDK_OFFSET(0x14DC5650)
#define LLOOBLCHLKG_AIBDMEDGKPE_OFFSET UNITYSDK_OFFSET(0x14DC5040)
#define LLOOBLCHLKG_APLGEGHPHGE_OFFSET UNITYSDK_OFFSET(0x14DC83D0)
#define LLOOBLCHLKG_BAJJDPJCHGC_OFFSET UNITYSDK_OFFSET(0x14DC6140)
#define LLOOBLCHLKG_BDHLGHAODDO_OFFSET UNITYSDK_OFFSET(0x14DC8270)
#define LLOOBLCHLKG_BEDBNKAJPMP_OFFSET UNITYSDK_OFFSET(0x14DC7A50)
#define LLOOBLCHLKG_BJKGAIIEDLA_OFFSET UNITYSDK_OFFSET(0x14DC82D0)
#define LLOOBLCHLKG_BODJEJOHENN_OFFSET UNITYSDK_OFFSET(0x14DC6030)
#define LLOOBLCHLKG_CBKGHIMEBCM_OFFSET UNITYSDK_OFFSET(0x14DC3D90)
#define LLOOBLCHLKG_CJOEEHHLFLB_OFFSET UNITYSDK_OFFSET(0x14DC8260)
#define LLOOBLCHLKG_CJPOHCHOKFN_OFFSET UNITYSDK_OFFSET(0x14DC8280)
#define LLOOBLCHLKG_CLLIFDBJPBF_OFFSET UNITYSDK_OFFSET(0x14DC5B80)
#define LLOOBLCHLKG_CMMEGMNCJPE_OFFSET UNITYSDK_OFFSET(0x14DC3670)
#define LLOOBLCHLKG_CNFBHKNMDJP_OFFSET UNITYSDK_OFFSET(0x14DC4810)
#define LLOOBLCHLKG_CNPNHLJCNOP_OFFSET UNITYSDK_OFFSET(0x14DC6370)
#define LLOOBLCHLKG_COIOLHHPGDE_OFFSET UNITYSDK_OFFSET(0x14DC7E40)
#define LLOOBLCHLKG_DCCMCDFJMGE_OFFSET UNITYSDK_OFFSET(0x14DC52A0)
#define LLOOBLCHLKG_DFBAFPEKAEK_OFFSET UNITYSDK_OFFSET(0x14DC64E0)
#define LLOOBLCHLKG_DFHEIBBBACP_OFFSET UNITYSDK_OFFSET(0x14DC4120)
#define LLOOBLCHLKG_DGNKBGEHECK_OFFSET UNITYSDK_OFFSET(0x14DC7630)
#define LLOOBLCHLKG_DGPGFAHAEOK_OFFSET UNITYSDK_OFFSET(0x14DC8250)
#define LLOOBLCHLKG_DHAAHABBNKA_OFFSET UNITYSDK_OFFSET(0x14DC5250)
#define LLOOBLCHLKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DC34E0)
#define LLOOBLCHLKG_DJMONJBOCAB_OFFSET UNITYSDK_OFFSET(0x14DC3AC0)
#define LLOOBLCHLKG_DKBLMLDMHPP_OFFSET UNITYSDK_OFFSET(0x14DC58B0)
#define LLOOBLCHLKG_EACLPBBHCNM_OFFSET UNITYSDK_OFFSET(0x14DC40B0)
#define LLOOBLCHLKG_ECABKIKGBIJ_OFFSET UNITYSDK_OFFSET(0x14DC5CD0)
#define LLOOBLCHLKG_ECDLPCHACPG_OFFSET UNITYSDK_OFFSET(0x14DC76A0)
#define LLOOBLCHLKG_EGHPMLGMMHG_1_OFFSET UNITYSDK_OFFSET(0x14DC5D80)
#define LLOOBLCHLKG_EGHPMLGMMHG_OFFSET UNITYSDK_OFFSET(0x14DC49F0)
#define LLOOBLCHLKG_EHHJLDIOKKJ_OFFSET UNITYSDK_OFFSET(0x14DC6630)
#define LLOOBLCHLKG_EMPDAOOPDCG_OFFSET UNITYSDK_OFFSET(0x14DC3930)
#define LLOOBLCHLKG_EPDKPIGAHDB_OFFSET UNITYSDK_OFFSET(0x14DC7FD0)
#define LLOOBLCHLKG_EPKOKEAANCK_OFFSET UNITYSDK_OFFSET(0x14DC40C0)
#define LLOOBLCHLKG_FBEKAGLOIEN_OFFSET UNITYSDK_OFFSET(0x14DC64F0)
#define LLOOBLCHLKG_FBMFBJAKKBP_OFFSET UNITYSDK_OFFSET(0x14DC5350)
#define LLOOBLCHLKG_FJFHBFGLFCC_OFFSET UNITYSDK_OFFSET(0x14DC80C0)
#define LLOOBLCHLKG_FLMBCNMFOGF_OFFSET UNITYSDK_OFFSET(0x14DC33D0)
#define LLOOBLCHLKG_FOFHJNCJGNE_OFFSET UNITYSDK_OFFSET(0x14DC41C0)
#define LLOOBLCHLKG_GJEDKGFKIGJ_OFFSET UNITYSDK_OFFSET(0x14DC5CE0)
#define LLOOBLCHLKG_HGHGCKPKCKF_OFFSET UNITYSDK_OFFSET(0x14DC6EB0)
#define LLOOBLCHLKG_HGKMACCNOHE_OFFSET UNITYSDK_OFFSET(0x14DC3A70)
#define LLOOBLCHLKG_HINHBNBGNJK_OFFSET UNITYSDK_OFFSET(0x14DC47B0)
#define LLOOBLCHLKG_HLEGJFHNPCK_OFFSET UNITYSDK_OFFSET(0x14DC6B40)
#define LLOOBLCHLKG_IBCIIPJOODK_OFFSET UNITYSDK_OFFSET(0x14DC52F0)
#define LLOOBLCHLKG_IDIFDOBFBNM_OFFSET UNITYSDK_OFFSET(0x14DC7640)
#define LLOOBLCHLKG_IGBNFHBDCBG_OFFSET UNITYSDK_OFFSET(0x14DC5CC0)
#define LLOOBLCHLKG_IKCPCBJCFNB_OFFSET UNITYSDK_OFFSET(0x14DC69E0)
#define LLOOBLCHLKG_IMPPBBOIOCO_OFFSET UNITYSDK_OFFSET(0x14DC7E70)
#define LLOOBLCHLKG_IOCPINLEHBM_OFFSET UNITYSDK_OFFSET(0x14DC5F40)
#define LLOOBLCHLKG_JBNBBIOACIL_OFFSET UNITYSDK_OFFSET(0x14DC6020)
#define LLOOBLCHLKG_JCHKIFGHLCC_OFFSET UNITYSDK_OFFSET(0x14DC3430)
#define LLOOBLCHLKG_JDGEKAGJCMH_OFFSET UNITYSDK_OFFSET(0x14DC64C0)
#define LLOOBLCHLKG_JDKCEPDPIKA_OFFSET UNITYSDK_OFFSET(0x14DC3DF0)
#define LLOOBLCHLKG_JHDBMOEDACB_OFFSET UNITYSDK_OFFSET(0x14DC7710)
#define LLOOBLCHLKG_JHMNPEHLHMF_OFFSET UNITYSDK_OFFSET(0x14DC5B60)
#define LLOOBLCHLKG_JLOIFHBDGDE_OFFSET UNITYSDK_OFFSET(0x14DC7E50)
#define LLOOBLCHLKG_KEACDKJNACO_OFFSET UNITYSDK_OFFSET(0x14DC7620)
#define LLOOBLCHLKG_KHNFIGLJMDI_OFFSET UNITYSDK_OFFSET(0x14DC5360)
#define LLOOBLCHLKG_LDGOFCKOCGD_OFFSET UNITYSDK_OFFSET(0x14DC7E60)
#define LLOOBLCHLKG_LDLLBGOGCFI_OFFSET UNITYSDK_OFFSET(0x14DC6ED0)
#define LLOOBLCHLKG_LFEPDFPKMFF_OFFSET UNITYSDK_OFFSET(0x14DC82A0)
#define LLOOBLCHLKG_LHNDMNLOLNO_OFFSET UNITYSDK_OFFSET(0x14DC4C80)
#define LLOOBLCHLKG_LPMLKLILGII_OFFSET UNITYSDK_OFFSET(0x14DC5F30)
#define LLOOBLCHLKG_MKAOEMKJHBK_OFFSET UNITYSDK_OFFSET(0x14DC7A40)
#define LLOOBLCHLKG_MLBLAGGINNP_OFFSET UNITYSDK_OFFSET(0x14DC5990)
#define LLOOBLCHLKG_MLKKMIGGGKF_OFFSET UNITYSDK_OFFSET(0x14DC54E0)
#define LLOOBLCHLKG_NAFGGBCHLDN_OFFSET UNITYSDK_OFFSET(0x14DC65E0)
#define LLOOBLCHLKG_NEAGLBIJMAC_OFFSET UNITYSDK_OFFSET(0x14DC3C20)
#define LLOOBLCHLKG_NIHHBOIAFGG_OFFSET UNITYSDK_OFFSET(0x14DC3FF0)
#define LLOOBLCHLKG_NKCPGBDPHNM_OFFSET UNITYSDK_OFFSET(0x14DC76B0)
#define LLOOBLCHLKG_NKEIPAJNIBE_OFFSET UNITYSDK_OFFSET(0x14DC40D0)
#define LLOOBLCHLKG_NMEJJDOOKDG_OFFSET UNITYSDK_OFFSET(0x14DC6E50)
#define LLOOBLCHLKG_NNEKFGGDKBE_OFFSET UNITYSDK_OFFSET(0x14DC3C30)
#define LLOOBLCHLKG_OIAKJKDBOJH_OFFSET UNITYSDK_OFFSET(0x14DC5F20)
#define LLOOBLCHLKG_OKBBEFMKCLJ_OFFSET UNITYSDK_OFFSET(0x14DC6EC0)
#define LLOOBLCHLKG_OKJELJKEBEO_OFFSET UNITYSDK_OFFSET(0x14DC82B0)
#define LLOOBLCHLKG_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14DC3210)
#define LLOOBLCHLKG_OPEDFOEHOIL_OFFSET UNITYSDK_OFFSET(0x14DC8290)
#define LLOOBLCHLKG_PAGLBKOGCFB_OFFSET UNITYSDK_OFFSET(0x14DC4C20)
#define LLOOBLCHLKG_PEDBKDDAGJE_OFFSET UNITYSDK_OFFSET(0x14DC39F0)
#define LLOOBLCHLKG_PFHLIEBMDBN_OFFSET UNITYSDK_OFFSET(0x14DC4820)
#define LLOOBLCHLKG_PJMLENNGBGE_OFFSET UNITYSDK_OFFSET(0x14DC56B0)
#define LLOOBLCHLKG_PLLIPNLANHI_OFFSET UNITYSDK_OFFSET(0x14DC6470)
#define LLOOBLCHLKG_PPILFFCAPPL_OFFSET UNITYSDK_OFFSET(0x14DC5AC0)
#define LLOOBLCHLKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DC3910)
#define LLOOBLCHLKG__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC3820)

inline static constexpr unsigned int LLOOBLCHLKG_TypeDefinitionIndex = 83936;

class LLOOBLCHLKG
{
public:
	static ::UnityEngine::Vector2* StaticGet_HPDELPBGIHO()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(LLOOBLCHLKG_TypeDefinitionIndex)->GetStaticField(0xCF30);
	}
	static ::UnityEngine::Vector2* StaticGet_BHEPMIJENDC()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(LLOOBLCHLKG_TypeDefinitionIndex)->GetStaticField(0xCF38);
	}
	static ::UnityEngine::Vector2* StaticGet_JBLILOOAODM()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(LLOOBLCHLKG_TypeDefinitionIndex)->GetStaticField(0xCF40);
	}
	// static const ::System::Int32 JLNMFPBIMGF = 0x0; // 0x0
	// static const ::System::Int32 IDLECFENMAJ = 0x0; // 0x0
	// static const ::System::Int32 JDGCHIGIFHA = 0x1; // 0x0
	// static const ::System::Int32 ADEOFLPMADJ = -0x1; // 0x0
	// static const ::System::Int32 HGPEFFMHHOM = -0x1; // 0x0
	// static const ::System::String* JFBDHEHKPEF; // 0x0
	// static const ::System::String* CAICIHDDPLL; // 0x0
	// static const ::System::String* KENCIKDNIGM; // 0x0
	// static const ::System::String* HJNGDEFOAPC; // 0x0
	// static const ::System::String* EFPJEBKBIMB; // 0x0
	::MHBHNMGDBGI _IPHAEKNOGFN_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::OLJPAMKGJAH>* DLBBCMEIMFN; // 0x20
	::DBMAHDDGMHM_1<::LLPHAEAKLMP*>* _DFAFHMGHGKH_k__BackingField; // 0x28
	::UnityEngine::GameObject* _BCMNDNFODHD_k__BackingField; // 0x30
	::CFHOEGBMPKN* IEDKNGNLDIB; // 0x38
	::CKKFPPNEMIJ* _MACLNIOCGKL_k__BackingField; // 0x40
	::MoleMole::Config::ConfigPhotoCamera* CEJENBBHBBG; // 0x48
	::IDIEEOGFPAO* _PCCNJBBJHEL_k__BackingField; // 0x50
	::DIBLOGEIACA _CIFHAGOIBEI_k__BackingField; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::CharacterConfigPhotoCamera*>* BMNPDKCNGFE; // 0x68
	::LAHLPILMPMN _KPKIOPCLAIK_k__BackingField; // 0x70
	::MoleMole::Config::UIConfigPhotoCamera* OOEADMOEJIF; // 0x90
	::NMANHEHIJAL_1<::LLPHAEAKLMP*>* _DJEJPBOILBC_k__BackingField; // 0x98
	::DEPFFHDJHKL* _CDDAHCLLJJP_k__BackingField; // 0xA0
	::MBBCFJKMFNF* KNANKKNCPNB; // 0xA8
	::EAOAPCGBHBP* KFCCLHAMCIK; // 0xB0
	::OBINJGMPCIH* _PBGFLHCCINH_k__BackingField; // 0xB8
	::System::Single _LDGMKGPMOKB_k__BackingField; // 0xC0
	::System::Int32 _MEADPCHHEIL_k__BackingField; // 0xC4
	::System::Int32 _EPEJAHDPMDD_k__BackingField; // 0xC8
	::System::Int32 BCGOMNHMNHE; // 0xCC
	::System::Nullable_1<::IAEAIIIKDFC> _DNAFIKGDMLO_k__BackingField; // 0xD0
	::System::Boolean MDEOHJCLIMC; // 0xD8
	::System::Boolean LMDIOOALJCK; // 0xD9
	::System::Boolean CKBCEPLFCLJ; // 0xDA
	::System::Boolean BEBJNGHINOO; // 0xDB
	::System::Boolean ODJGALGMCDC; // 0xDC
	::System::Boolean OFAEPLLIPHE; // 0xDD
	::System::Boolean BOMNGDMJNEE; // 0xDE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOOBLCHLKG__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DISPOSE_OFFSET))(this);
	}

	::System::Void EMPDAOOPDCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EMPDAOOPDCG_OFFSET))(this);
	}

	::System::Void HGKMACCNOHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_HGKMACCNOHE_OFFSET))(this);
	}

	::System::Single NEAGLBIJMAC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NEAGLBIJMAC_OFFSET))(this);
	}

	::Foundation::AssetPath NNEKFGGDKBE()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NNEKFGGDKBE_OFFSET))(this);
	}

	::System::Boolean NIHHBOIAFGG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NIHHBOIAFGG_OFFSET))(this);
	}

	::System::Void EACLPBBHCNM(::DBMAHDDGMHM_1<::LLPHAEAKLMP*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DBMAHDDGMHM_1<::LLPHAEAKLMP*>*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EACLPBBHCNM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EPKOKEAANCK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EPKOKEAANCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NKEIPAJNIBE(::System::Int32 ACEENLFDLKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NKEIPAJNIBE_OFFSET))(this, ACEENLFDLKM);
	}

	::System::Void CMMEGMNCJPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CMMEGMNCJPE_OFFSET))(this);
	}

	::System::Void DFHEIBBBACP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DFHEIBBBACP_OFFSET))(this);
	}

	::System::Void FOFHJNCJGNE(::System::Int32 CJOHLGBKIIL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_FOFHJNCJGNE_OFFSET))(this, CJOHLGBKIIL, ABHBKFJKINO);
	}

	::System::Int32 HINHBNBGNJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_HINHBNBGNJK_OFFSET))(this);
	}

	::NMANHEHIJAL_1<::LLPHAEAKLMP*>* CNFBHKNMDJP()
	{
		return ((::NMANHEHIJAL_1<::LLPHAEAKLMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CNFBHKNMDJP_OFFSET))(this);
	}

	::System::Void JCHKIFGHLCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JCHKIFGHLCC_OFFSET))(this);
	}

	::System::Void DJMONJBOCAB(::System::Int32 BMPFDAECMCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DJMONJBOCAB_OFFSET))(this, BMPFDAECMCG);
	}

	::System::Boolean EGHPMLGMMHG(::System::Int32 CJOHLGBKIIL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EGHPMLGMMHG_OFFSET))(this, CJOHLGBKIIL, ABHBKFJKINO);
	}

	::MoleMole::Config::UIConfigPhotoCamera* PAGLBKOGCFB()
	{
		return ((::MoleMole::Config::UIConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PAGLBKOGCFB_OFFSET))(this);
	}

	::System::Void AIBDMEDGKPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_AIBDMEDGKPE_OFFSET))(this);
	}

	::System::Nullable_1<::IAEAIIIKDFC> FBMFBJAKKBP()
	{
		return ((::System::Nullable_1<::IAEAIIIKDFC>(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_FBMFBJAKKBP_OFFSET))(this);
	}

	::System::String* KHNFIGLJMDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_KHNFIGLJMDI_OFFSET))(this);
	}

	::Foundation::AssetPath MLKKMIGGGKF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_MLKKMIGGGKF_OFFSET))(this);
	}

	::System::Boolean AFDDLAEINOC(::MoleMole::Config::ConfigPhotoCameraFrameInner*& CGOPJACCKDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPhotoCameraFrameInner*&))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_AFDDLAEINOC_OFFSET))(this, CGOPJACCKDD);
	}

	::MoleMole::Config::CharacterConfigPhotoCamera* DKBLMLDMHPP()
	{
		return ((::MoleMole::Config::CharacterConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DKBLMLDMHPP_OFFSET))(this);
	}

	::System::Void DCCMCDFJMGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DCCMCDFJMGE_OFFSET))(this);
	}

	::JPNPGNEJLNK PPILFFCAPPL()
	{
		return ((::JPNPGNEJLNK(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PPILFFCAPPL_OFFSET))(this);
	}

	::System::Void JHMNPEHLHMF(::LAHLPILMPMN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LAHLPILMPMN))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JHMNPEHLHMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath CLLIFDBJPBF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CLLIFDBJPBF_OFFSET))(this);
	}

	::System::Void IGBNFHBDCBG(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IGBNFHBDCBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::IDIEEOGFPAO* ECABKIKGBIJ()
	{
		return ((::IDIEEOGFPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_ECABKIKGBIJ_OFFSET))(this);
	}

	::System::Single GJEDKGFKIGJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_GJEDKGFKIGJ_OFFSET))(this);
	}

	::System::Boolean EGHPMLGMMHG_1(::System::Int32 CJOHLGBKIIL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EGHPMLGMMHG_1_OFFSET))(this, CJOHLGBKIIL);
	}

	::System::Void OIAKJKDBOJH(::MHBHNMGDBGI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MHBHNMGDBGI))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_OIAKJKDBOJH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPMLKLILGII(::DEPFFHDJHKL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DEPFFHDJHKL*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_LPMLKLILGII_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::ConfigPhotoCameraFramePhoto* IOCPINLEHBM(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::MoleMole::Config::ConfigPhotoCameraFramePhoto*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IOCPINLEHBM_OFFSET))(this, OIIHCACKLHD);
	}

	::DIBLOGEIACA JBNBBIOACIL()
	{
		return ((::DIBLOGEIACA(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JBNBBIOACIL_OFFSET))(this);
	}

	::System::Void BODJEJOHENN(::ILDGBMPPCGP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ILDGBMPPCGP*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_BODJEJOHENN_OFFSET))(this, AAOCANGHBDG);
	}

	::LLPHAEAKLMP* BAJJDPJCHGC(::System::Int32 CJOHLGBKIIL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::LLPHAEAKLMP*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_BAJJDPJCHGC_OFFSET))(this, CJOHLGBKIIL, ABHBKFJKINO);
	}

	::System::Int32 CNPNHLJCNOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CNPNHLJCNOP_OFFSET))(this);
	}

	::System::Void IBCIIPJOODK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IBCIIPJOODK_OFFSET))(this);
	}

	::System::Boolean PJMLENNGBGE(::Foundation::AssetPath KDGEDPMJADN, ::MoleMole::Config::ConfigPhotoCameraFrameInner*& FAKHCNLCBCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigPhotoCameraFrameInner*&))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PJMLENNGBGE_OFFSET))(this, KDGEDPMJADN, FAKHCNLCBCE);
	}

	::System::Boolean PLLIPNLANHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PLLIPNLANHI_OFFSET))(this);
	}

	::System::Boolean JDGEKAGJCMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JDGEKAGJCMH_OFFSET))(this);
	}

	::System::Void DFBAFPEKAEK(::CKKFPPNEMIJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CKKFPPNEMIJ*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DFBAFPEKAEK_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath FBEKAGLOIEN()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_FBEKAGLOIEN_OFFSET))(this);
	}

	::System::Void PEDBKDDAGJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PEDBKDDAGJE_OFFSET))(this);
	}

	::System::Void NAFGGBCHLDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NAFGGBCHLDN_OFFSET))(this);
	}

	::System::Void EHHJLDIOKKJ(::System::Nullable_1<::System::Boolean> NMCPPJCHCEB, ::System::Nullable_1<::System::Boolean> IKACPFEHLOG, ::System::Nullable_1<::System::Boolean> EHKHEINLAIG, ::System::Nullable_1<::System::Int32> LFLENDLLBEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EHHJLDIOKKJ_OFFSET))(this, NMCPPJCHCEB, IKACPFEHLOG, EHKHEINLAIG, LFLENDLLBEG);
	}

	::System::Boolean NMEJJDOOKDG(::System::Int32 ACEENLFDLKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NMEJJDOOKDG_OFFSET))(this, ACEENLFDLKM);
	}

	::DEPFFHDJHKL* HGHGCKPKCKF()
	{
		return ((::DEPFFHDJHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_HGHGCKPKCKF_OFFSET))(this);
	}

	::System::Void OKBBEFMKCLJ(::OBINJGMPCIH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OBINJGMPCIH*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_OKBBEFMKCLJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDLLBGOGCFI(::System::Int32 CJOHLGBKIIL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_LDLLBGOGCFI_OFFSET))(this, CJOHLGBKIIL, ABHBKFJKINO);
	}

	::System::Int32 KEACDKJNACO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_KEACDKJNACO_OFFSET))(this);
	}

	::System::Void DGNKBGEHECK(::System::Nullable_1<::IAEAIIIKDFC> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::IAEAIIIKDFC>))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DGNKBGEHECK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single IDIFDOBFBNM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IDIFDOBFBNM_OFFSET))(this);
	}

	::OBINJGMPCIH* ECDLPCHACPG()
	{
		return ((::OBINJGMPCIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_ECDLPCHACPG_OFFSET))(this);
	}

	::System::Int32 NKCPGBDPHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_NKCPGBDPHNM_OFFSET))(this);
	}

	::System::Boolean JHDBMOEDACB(::System::Int32 CJOHLGBKIIL, ::System::Int32& DKGIAMPJNFG, ::UnityEngine::Vector2 OHOGDOMNHNK, ::System::Single BFBELMDIAHI, ::System::Single CLMNLPKFBFA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JHDBMOEDACB_OFFSET))(this, CJOHLGBKIIL, DKGIAMPJNFG, OHOGDOMNHNK, BFBELMDIAHI, CLMNLPKFBFA);
	}

	::System::Int32 AAFFFKHMDGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_AAFFFKHMDGF_OFFSET))(this);
	}

	::System::Void MKAOEMKJHBK(::NMANHEHIJAL_1<::LLPHAEAKLMP*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NMANHEHIJAL_1<::LLPHAEAKLMP*>*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_MKAOEMKJHBK_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::CharacterConfigPhotoCamera* BEDBNKAJPMP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::CharacterConfigPhotoCamera*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_BEDBNKAJPMP_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void COIOLHHPGDE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_COIOLHHPGDE_OFFSET))(this, EGEGIMGMJHN);
	}

	::DBMAHDDGMHM_1<::LLPHAEAKLMP*>* JLOIFHBDGDE()
	{
		return ((::DBMAHDDGMHM_1<::LLPHAEAKLMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JLOIFHBDGDE_OFFSET))(this);
	}

	::System::Void LDGOFCKOCGD(::DIBLOGEIACA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DIBLOGEIACA))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_LDGOFCKOCGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IMPPBBOIOCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IMPPBBOIOCO_OFFSET))(this);
	}

	::System::Void HLEGJFHNPCK(::System::Nullable_1<::System::Boolean> FDKHJBGLAIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_HLEGJFHNPCK_OFFSET))(this, FDKHJBGLAIB);
	}

	::System::Void FLMBCNMFOGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_FLMBCNMFOGF_OFFSET))(this);
	}

	::System::Void IKCPCBJCFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_IKCPCBJCFNB_OFFSET))(this);
	}

	::System::Void EPDKPIGAHDB(::CKKFPPNEMIJ* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::PVOID, ::CKKFPPNEMIJ*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_EPDKPIGAHDB_OFFSET))(this, PNPMMLNCDNK);
	}

	::System::Void PFHLIEBMDBN(::OBINJGMPCIH* FAKHCNLCBCE)
	{
		return ((::System::Void(*)(::PVOID, ::OBINJGMPCIH*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_PFHLIEBMDBN_OFFSET))(this, FAKHCNLCBCE);
	}

	::System::Int32 DGPGFAHAEOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DGPGFAHAEOK_OFFSET))(this);
	}

	::System::Void CJOEEHHLFLB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CJOEEHHLFLB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* BDHLGHAODDO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_BDHLGHAODDO_OFFSET))(this);
	}

	::System::Boolean JDKCEPDPIKA(::Foundation::AssetPath KDGEDPMJADN, ::MoleMole::Config::ConfigPhotoCameraFrameOuter*& FAKHCNLCBCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigPhotoCameraFrameOuter*&))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_JDKCEPDPIKA_OFFSET))(this, KDGEDPMJADN, FAKHCNLCBCE);
	}

	::MHBHNMGDBGI CJPOHCHOKFN()
	{
		return ((::MHBHNMGDBGI(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CJPOHCHOKFN_OFFSET))(this);
	}

	::System::Void MLBLAGGINNP(::DEPFFHDJHKL* HIOPECMGIIF)
	{
		return ((::System::Void(*)(::PVOID, ::DEPFFHDJHKL*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_MLBLAGGINNP_OFFSET))(this, HIOPECMGIIF);
	}

	::System::Void OPEDFOEHOIL(::IDIEEOGFPAO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IDIEEOGFPAO*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_OPEDFOEHOIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::CKKFPPNEMIJ* LFEPDFPKMFF()
	{
		return ((::CKKFPPNEMIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_LFEPDFPKMFF_OFFSET))(this);
	}

	::LAHLPILMPMN OKJELJKEBEO()
	{
		return ((::LAHLPILMPMN(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_OKJELJKEBEO_OFFSET))(this);
	}

	::System::Void BJKGAIIEDLA(::Foundation::AssetPath BAFOEALJEFJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_BJKGAIIEDLA_OFFSET))(this, BAFOEALJEFJ);
	}

	::System::Void LHNDMNLOLNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_LHNDMNLOLNO_OFFSET))(this);
	}

	::System::Void DHAAHABBNKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_DHAAHABBNKA_OFFSET))(this);
	}

	::System::Void FJFHBFGLFCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_FJFHBFGLFCC_OFFSET))(this);
	}

	::System::Int32 CBKGHIMEBCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_CBKGHIMEBCM_OFFSET))(this);
	}

	::System::Void APLGEGHPHGE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLOOBLCHLKG_APLGEGHPHGE_OFFSET))(this, PMNLNNGEIFM);
	}
};
