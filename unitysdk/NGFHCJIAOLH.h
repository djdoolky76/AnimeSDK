#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/ELFHDNANEMN.h"
#include "unitysdk/ILGMJDIJMHN.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALCFDKEJMBI;
class AOBFJFEJOKL;
class APOLGMPILBI;
class BAMOCNEALHK;
class DEMPJKLAAPG;
class DNIHJEFNKKO;
class DOLKBNJPNAI;
class EGJDABKLFEF;
class EPBHHKLMKNK;
class FAHDGLFOOAK;
class FMNAMHLNOJB;
class FOLHKNBFONK;
class HGOPEPJHPPP;
class IJKOMCMLFGH;
class ILFILLOHKIL;
class IMFGILLIKOL;
class KNPKEPDMNFN;
class LHLNLPDCCJJ;
class LHOFLNPEAFD;
class LLNKDOGGCOA;
class MDIHMNFMNBH;
class MLBEFCJKMGG;
class NBBAJMIICFE;
class NMBCLGEHKKG;
class ODHBFMIFIIK;
class OHGBBCKIDCG;
class OKJBIPGNAAG;
class ONDHPCOOMID;
class PBBHMJFLBGC;
namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NGFHCJIAOLH_AAFFJOLPJLP_OFFSET UNITYSDK_OFFSET(0x1C95E240)
#define NGFHCJIAOLH_ADDGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C95E090)
#define NGFHCJIAOLH_ADDGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C95DDD0)
#define NGFHCJIAOLH_ADDGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C95E330)
#define NGFHCJIAOLH_ADDGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95E5D0)
#define NGFHCJIAOLH_ADDGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95E8B0)
#define NGFHCJIAOLH_ADDSTATETREE_OFFSET UNITYSDK_OFFSET(0x1C95EFB0)
#define NGFHCJIAOLH_ADDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C95EBB0)
#define NGFHCJIAOLH_AFGGONGFGHN_OFFSET UNITYSDK_OFFSET(0x1C95C490)
#define NGFHCJIAOLH_AHFOEDCKJIA_OFFSET UNITYSDK_OFFSET(0x1C95D430)
#define NGFHCJIAOLH_AHNOPHIBEBL_OFFSET UNITYSDK_OFFSET(0x1C95B140)
#define NGFHCJIAOLH_AIEAKHKKAJA_OFFSET UNITYSDK_OFFSET(0x1C95A560)
#define NGFHCJIAOLH_AJGOEJHKOKE_OFFSET UNITYSDK_OFFSET(0x1C95A370)
#define NGFHCJIAOLH_AJIJOEDLMJD_OFFSET UNITYSDK_OFFSET(0x1C9608C0)
#define NGFHCJIAOLH_AJINGNEMHJF_OFFSET UNITYSDK_OFFSET(0x1C9609D0)
#define NGFHCJIAOLH_AJLOHJJNMKK_OFFSET UNITYSDK_OFFSET(0x1C95FAF0)
#define NGFHCJIAOLH_AOJBFBAOCLE_OFFSET UNITYSDK_OFFSET(0x1C95C5F0)
#define NGFHCJIAOLH_BEGCBNAAKFG_OFFSET UNITYSDK_OFFSET(0x1C95BF40)
#define NGFHCJIAOLH_BGDEPINODJN_OFFSET UNITYSDK_OFFSET(0x1C95D000)
#define NGFHCJIAOLH_BIKKGDDMNNF_OFFSET UNITYSDK_OFFSET(0x1C95E7C0)
#define NGFHCJIAOLH_BJOHCMEPPAP_OFFSET UNITYSDK_OFFSET(0x1C95F500)
#define NGFHCJIAOLH_BMDGOBBDEMM_OFFSET UNITYSDK_OFFSET(0x1C95DCE0)
#define NGFHCJIAOLH_CAEABAKMOFB_OFFSET UNITYSDK_OFFSET(0x1C95A740)
#define NGFHCJIAOLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C960CD0)
#define NGFHCJIAOLH_CFCLAMGAPDA_OFFSET UNITYSDK_OFFSET(0x1C95AE20)
#define NGFHCJIAOLH_CFGMIMIDIJF_OFFSET UNITYSDK_OFFSET(0x1C960920)
#define NGFHCJIAOLH_CFMIBMGLEAE_OFFSET UNITYSDK_OFFSET(0x1C95F7D0)
#define NGFHCJIAOLH_CIHDMACAGPN_OFFSET UNITYSDK_OFFSET(0x1C95F160)
#define NGFHCJIAOLH_CMKDNFLABCO_OFFSET UNITYSDK_OFFSET(0x1C95A7A0)
#define NGFHCJIAOLH_CNNDANEDCDH_OFFSET UNITYSDK_OFFSET(0x1C95B190)
#define NGFHCJIAOLH_COEHAFNLPAJ_OFFSET UNITYSDK_OFFSET(0x1C95C590)
#define NGFHCJIAOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960C50)
#define NGFHCJIAOLH_DFFGICDOKEG_OFFSET UNITYSDK_OFFSET(0x1C95CA30)
#define NGFHCJIAOLH_DGAGLGCGMDA_OFFSET UNITYSDK_OFFSET(0x1C95D110)
#define NGFHCJIAOLH_DGALANGBLDP_OFFSET UNITYSDK_OFFSET(0x1C95DD70)
#define NGFHCJIAOLH_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1C95EAA0)
#define NGFHCJIAOLH_DJIPPDICEGB_OFFSET UNITYSDK_OFFSET(0x1C95DA20)
#define NGFHCJIAOLH_DKLGJDOAAHO_OFFSET UNITYSDK_OFFSET(0x1C960330)
#define NGFHCJIAOLH_DLNELGFDOBO_OFFSET UNITYSDK_OFFSET(0x1C95BBD0)
#define NGFHCJIAOLH_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x1C95D710)
#define NGFHCJIAOLH_DNMFIJDADNC_OFFSET UNITYSDK_OFFSET(0x1C95F8E0)
#define NGFHCJIAOLH_DPCFJILMMCL_OFFSET UNITYSDK_OFFSET(0x1C95ABC0)
#define NGFHCJIAOLH_DPLKDKBHICH_OFFSET UNITYSDK_OFFSET(0x1C95F260)
#define NGFHCJIAOLH_EBDECBFLFGH_OFFSET UNITYSDK_OFFSET(0x1C95E850)
#define NGFHCJIAOLH_EHAIAJIFFNB_OFFSET UNITYSDK_OFFSET(0x1C960000)
#define NGFHCJIAOLH_EHDEIMECKCA_OFFSET UNITYSDK_OFFSET(0x1C95A480)
#define NGFHCJIAOLH_EHMEOPMBFNG_OFFSET UNITYSDK_OFFSET(0x1C95A420)
#define NGFHCJIAOLH_ELJGLGCLDKC_OFFSET UNITYSDK_OFFSET(0x1C95BEF0)
#define NGFHCJIAOLH_FAAPKMJABLF_OFFSET UNITYSDK_OFFSET(0x1C95ADC0)
#define NGFHCJIAOLH_FBMOAGMEGKK_OFFSET UNITYSDK_OFFSET(0x1C95EF50)
#define NGFHCJIAOLH_FCLANJCKCLM_OFFSET UNITYSDK_OFFSET(0x1C95F940)
#define NGFHCJIAOLH_FGALBFJJMED_OFFSET UNITYSDK_OFFSET(0x1C95F720)
#define NGFHCJIAOLH_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x1C95CA90)
#define NGFHCJIAOLH_FKICLHGJPFN_OFFSET UNITYSDK_OFFSET(0x1C95C930)
#define NGFHCJIAOLH_FKMIHGNFIPH_OFFSET UNITYSDK_OFFSET(0x1C95AA60)
#define NGFHCJIAOLH_FMBGAKEIDNM_OFFSET UNITYSDK_OFFSET(0x1C95D770)
#define NGFHCJIAOLH_FNDCNEAHGOP_OFFSET UNITYSDK_OFFSET(0x1C95A640)
#define NGFHCJIAOLH_FODBMMCKAEN_OFFSET UNITYSDK_OFFSET(0x1C95D660)
#define NGFHCJIAOLH_GET_GENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C95FC40)
#define NGFHCJIAOLH_GET_GENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C95FB50)
#define NGFHCJIAOLH_GET_GENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C95FD30)
#define NGFHCJIAOLH_GET_GENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95FE20)
#define NGFHCJIAOLH_GET_GENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95FF10)
#define NGFHCJIAOLH_GET_HASGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C95FCD0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C95FBE0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C95FDC0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95FEB0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95FFA0)
#define NGFHCJIAOLH_GET_HASSTATETREE_OFFSET UNITYSDK_OFFSET(0x1C9607B0)
#define NGFHCJIAOLH_GET_HASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C960BF0)
#define NGFHCJIAOLH_GET_STATETREE_OFFSET UNITYSDK_OFFSET(0x1C960720)
#define NGFHCJIAOLH_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C960B40)
#define NGFHCJIAOLH_GHHCOKPNPNP_OFFSET UNITYSDK_OFFSET(0x1C95C790)
#define NGFHCJIAOLH_GLNDKFGLDHH_OFFSET UNITYSDK_OFFSET(0x1C95ACC0)
#define NGFHCJIAOLH_GOHJEIAIMBI_OFFSET UNITYSDK_OFFSET(0x1C95D1F0)
#define NGFHCJIAOLH_HINDEMICDMK_OFFSET UNITYSDK_OFFSET(0x1C95BCD0)
#define NGFHCJIAOLH_HMIDFNDMBHF_OFFSET UNITYSDK_OFFSET(0x1C95AFB0)
#define NGFHCJIAOLH_HNCHGGLIOLK_OFFSET UNITYSDK_OFFSET(0x1C95F4A0)
#define NGFHCJIAOLH_HNHELHGGILI_OFFSET UNITYSDK_OFFSET(0x1C95B5C0)
#define NGFHCJIAOLH_ICCLLKEKJAI_OFFSET UNITYSDK_OFFSET(0x1C960610)
#define NGFHCJIAOLH_ICHBHNHEKNM_OFFSET UNITYSDK_OFFSET(0x1C95A690)
#define NGFHCJIAOLH_IFNIMAACNHL_OFFSET UNITYSDK_OFFSET(0x1C95D3D0)
#define NGFHCJIAOLH_IGEIDPNEPGL_OFFSET UNITYSDK_OFFSET(0x1C95AAC0)
#define NGFHCJIAOLH_IHKGGIGNDNH_OFFSET UNITYSDK_OFFSET(0x1C95F610)
#define NGFHCJIAOLH_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0x1C95B760)
#define NGFHCJIAOLH_INJLGPLLAEI_OFFSET UNITYSDK_OFFSET(0x1C9600B0)
#define NGFHCJIAOLH_IPGIADLECHP_OFFSET UNITYSDK_OFFSET(0x1C95E030)
#define NGFHCJIAOLH_JBFAJJKPPBP_OFFSET UNITYSDK_OFFSET(0x1C95D2D0)
#define NGFHCJIAOLH_JBHEJHCJPDN_OFFSET UNITYSDK_OFFSET(0x1C95F830)
#define NGFHCJIAOLH_JDFJMPHPAHK_OFFSET UNITYSDK_OFFSET(0x1C95B360)
#define NGFHCJIAOLH_JDKFBILBLAE_OFFSET UNITYSDK_OFFSET(0x1C960A30)
#define NGFHCJIAOLH_JGFCFJALDIG_OFFSET UNITYSDK_OFFSET(0x1C95F9D0)
#define NGFHCJIAOLH_JIGNDCKMPGN_OFFSET UNITYSDK_OFFSET(0x1C95D520)
#define NGFHCJIAOLH_JLKJCBCPLBL_OFFSET UNITYSDK_OFFSET(0x1C960810)
#define NGFHCJIAOLH_JMMAMJENJKC_OFFSET UNITYSDK_OFFSET(0x1C95BA20)
#define NGFHCJIAOLH_JNIOMFCPFGC_OFFSET UNITYSDK_OFFSET(0x1C95BD30)
#define NGFHCJIAOLH_JPGOGEDKFOM_OFFSET UNITYSDK_OFFSET(0x1C95F1F0)
#define NGFHCJIAOLH_KBJMHPDNHDN_OFFSET UNITYSDK_OFFSET(0x1C95F6C0)
#define NGFHCJIAOLH_KDFAHBECGHE_OFFSET UNITYSDK_OFFSET(0x1C960390)
#define NGFHCJIAOLH_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1C95EB50)
#define NGFHCJIAOLH_KKOPKPMBMFM_OFFSET UNITYSDK_OFFSET(0x1C95B870)
#define NGFHCJIAOLH_KMCDMMDNEMP_OFFSET UNITYSDK_OFFSET(0x1C9602D0)
#define NGFHCJIAOLH_LADMDMBPJCA_OFFSET UNITYSDK_OFFSET(0x1C95DAB0)
#define NGFHCJIAOLH_LCPEEHIMCNO_OFFSET UNITYSDK_OFFSET(0x1C95EEC0)
#define NGFHCJIAOLH_LDCINHMDDPB_OFFSET UNITYSDK_OFFSET(0x1C95BE10)
#define NGFHCJIAOLH_LDPNBEGMBJL_OFFSET UNITYSDK_OFFSET(0x1C95D320)
#define NGFHCJIAOLH_LFDFLHAAJKE_OFFSET UNITYSDK_OFFSET(0x1C95D0B0)
#define NGFHCJIAOLH_LKKPLKINALG_OFFSET UNITYSDK_OFFSET(0x1C95D9D0)
#define NGFHCJIAOLH_LLJEOGOFOBC_OFFSET UNITYSDK_OFFSET(0x1C960110)
#define NGFHCJIAOLH_LOMJJNCMJMK_OFFSET UNITYSDK_OFFSET(0x1C9606C0)
#define NGFHCJIAOLH_LPEHGMGDCIO_OFFSET UNITYSDK_OFFSET(0x1C95FA40)
#define NGFHCJIAOLH_MAEONODHOIL_OFFSET UNITYSDK_OFFSET(0x1C95C050)
#define NGFHCJIAOLH_MAHNJMEJDMD_OFFSET UNITYSDK_OFFSET(0x1C95C4E0)
#define NGFHCJIAOLH_MAPJDKFIJFJ_OFFSET UNITYSDK_OFFSET(0x1C95CD20)
#define NGFHCJIAOLH_MCLLALGABAB_OFFSET UNITYSDK_OFFSET(0x1C95A9B0)
#define NGFHCJIAOLH_MENOFPHKCNC_OFFSET UNITYSDK_OFFSET(0x1C95D8A0)
#define NGFHCJIAOLH_MGLOEIFKDMB_OFFSET UNITYSDK_OFFSET(0x1C95B410)
#define NGFHCJIAOLH_MIDANFKAAKL_OFFSET UNITYSDK_OFFSET(0x1C95F5B0)
#define NGFHCJIAOLH_MLBDBGHGPKK_OFFSET UNITYSDK_OFFSET(0x1C95AD10)
#define NGFHCJIAOLH_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0x1C95CFB0)
#define NGFHCJIAOLH_NBHCPPPBFIK_OFFSET UNITYSDK_OFFSET(0x1C960220)
#define NGFHCJIAOLH_NBMHBNLFHHI_OFFSET UNITYSDK_OFFSET(0x1C95C270)
#define NGFHCJIAOLH_NDOCHPMPPDA_OFFSET UNITYSDK_OFFSET(0x1C95F3C0)
#define NGFHCJIAOLH_NFNFKKKMFKK_OFFSET UNITYSDK_OFFSET(0x1C95B470)
#define NGFHCJIAOLH_NGJHPGPCAII_OFFSET UNITYSDK_OFFSET(0x1C9605B0)
#define NGFHCJIAOLH_NIOJMANDKML_OFFSET UNITYSDK_OFFSET(0x1C95DFA0)
#define NGFHCJIAOLH_NIPDHCMBOMK_OFFSET UNITYSDK_OFFSET(0x1C9601C0)
#define NGFHCJIAOLH_NJMIJKLKFMA_OFFSET UNITYSDK_OFFSET(0x1C95DC90)
#define NGFHCJIAOLH_NLFCABFPJHD_OFFSET UNITYSDK_OFFSET(0x1C95C980)
#define NGFHCJIAOLH_NLNHJGBKGBE_OFFSET UNITYSDK_OFFSET(0x1C95B810)
#define NGFHCJIAOLH_OAFCJEIHNJA_OFFSET UNITYSDK_OFFSET(0x1C95DB10)
#define NGFHCJIAOLH_ODONBKOGCAJ_OFFSET UNITYSDK_OFFSET(0x1C95BFF0)
#define NGFHCJIAOLH_OFAOEPKFFIM_OFFSET UNITYSDK_OFFSET(0x1C960AE0)
#define NGFHCJIAOLH_OINDPPOAHKE_OFFSET UNITYSDK_OFFSET(0x1C95E4E0)
#define NGFHCJIAOLH_OJDODKBLLAP_OFFSET UNITYSDK_OFFSET(0x1C95F410)
#define NGFHCJIAOLH_OJFBBGJPPCP_OFFSET UNITYSDK_OFFSET(0x1C95B710)
#define NGFHCJIAOLH_OJLHLDCJLGJ_OFFSET UNITYSDK_OFFSET(0x1C95A880)
#define NGFHCJIAOLH_PALJEJGHKFH_OFFSET UNITYSDK_OFFSET(0x1C95A960)
#define NGFHCJIAOLH_PBAFGHEOGPM_OFFSET UNITYSDK_OFFSET(0x1C95E2D0)
#define NGFHCJIAOLH_PGIDENFONNA_OFFSET UNITYSDK_OFFSET(0x1C95BC20)
#define NGFHCJIAOLH_PHMBIJHDOCD_OFFSET UNITYSDK_OFFSET(0x1C95B1F0)
#define NGFHCJIAOLH_PICFJNDGBBG_OFFSET UNITYSDK_OFFSET(0x1C95F310)
#define NGFHCJIAOLH_PIFKIAKFENE_OFFSET UNITYSDK_OFFSET(0x1C95D610)
#define NGFHCJIAOLH_PJJMAGLOLJC_OFFSET UNITYSDK_OFFSET(0x1C95E570)
#define NGFHCJIAOLH_PKNALBDHJNI_OFFSET UNITYSDK_OFFSET(0x1C960500)
#define NGFHCJIAOLH_PNGPHDNDKMO_OFFSET UNITYSDK_OFFSET(0x1C95DBD0)
#define NGFHCJIAOLH_REMOVEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C95E1F0)
#define NGFHCJIAOLH_REMOVEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C95DF50)
#define NGFHCJIAOLH_REMOVEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C95E490)
#define NGFHCJIAOLH_REMOVEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95E770)
#define NGFHCJIAOLH_REMOVEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95EA50)
#define NGFHCJIAOLH_REMOVESTATETREE_OFFSET UNITYSDK_OFFSET(0x1C95F110)
#define NGFHCJIAOLH_REMOVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C95EE70)
#define NGFHCJIAOLH_REPLACEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C95E140)
#define NGFHCJIAOLH_REPLACEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C95DE90)
#define NGFHCJIAOLH_REPLACEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C95E3E0)
#define NGFHCJIAOLH_REPLACEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95E6A0)
#define NGFHCJIAOLH_REPLACEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C95E980)
#define NGFHCJIAOLH_REPLACESTATETREE_OFFSET UNITYSDK_OFFSET(0x1C95F060)
#define NGFHCJIAOLH_REPLACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C95ED10)

	class NGFHCJIAOLH : public ::Entitas::Entity
	{
	public:
		static ::ONDHPCOOMID** StaticGet_MODDNOEIMMM()
		{
			return (::ONDHPCOOMID**)UnitySDK::FromName("", "NGFHCJIAOLH")->GetStaticField(0x57F60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CCTOR_OFFSET))();
		}

		::FAHDGLFOOAK* AJGOEJHKOKE()
		{
			return ((::FAHDGLFOOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AJGOEJHKOKE_OFFSET))(this);
		}

		::System::Boolean EHMEOPMBFNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_EHMEOPMBFNG_OFFSET))(this);
		}

		::System::Void EHDEIMECKCA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_EHDEIMECKCA_OFFSET))(this, a1);
		}

		::System::Void AIEAKHKKAJA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AIEAKHKKAJA_OFFSET))(this, a1);
		}

		::System::Void FNDCNEAHGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FNDCNEAHGOP_OFFSET))(this);
		}

		::ODHBFMIFIIK* ICHBHNHEKNM()
		{
			return ((::ODHBFMIFIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ICHBHNHEKNM_OFFSET))(this);
		}

		::System::Boolean CAEABAKMOFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CAEABAKMOFB_OFFSET))(this);
		}

		::System::Void CMKDNFLABCO(::System::Collections::Generic::List_1<::ALCFDKEJMBI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ALCFDKEJMBI*>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CMKDNFLABCO_OFFSET))(this, a1);
		}

		::System::Void OJLHLDCJLGJ(::System::Collections::Generic::List_1<::ALCFDKEJMBI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ALCFDKEJMBI*>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OJLHLDCJLGJ_OFFSET))(this, a1);
		}

		::System::Void PALJEJGHKFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PALJEJGHKFH_OFFSET))(this);
		}

		::LLNKDOGGCOA* MCLLALGABAB()
		{
			return ((::LLNKDOGGCOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MCLLALGABAB_OFFSET))(this);
		}

		::System::Boolean FKMIHGNFIPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FKMIHGNFIPH_OFFSET))(this);
		}

		::System::Void IGEIDPNEPGL(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_IGEIDPNEPGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPCFJILMMCL(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DPCFJILMMCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GLNDKFGLDHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GLNDKFGLDHH_OFFSET))(this);
		}

		::EGJDABKLFEF* MLBDBGHGPKK()
		{
			return ((::EGJDABKLFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MLBDBGHGPKK_OFFSET))(this);
		}

		::System::Boolean FAAPKMJABLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FAAPKMJABLF_OFFSET))(this);
		}

		::System::Void CFCLAMGAPDA(::System::UInt32 a1, ::RPG::GameCore::ChenLingFesPosition* a2, ::RPG::GameCore::ChenLingFesCellType a3, ::RPG::GameCore::ChenLingFesDirection a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChenLingFesPosition*, ::RPG::GameCore::ChenLingFesCellType, ::RPG::GameCore::ChenLingFesDirection, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CFCLAMGAPDA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HMIDFNDMBHF(::System::UInt32 a1, ::RPG::GameCore::ChenLingFesPosition* a2, ::RPG::GameCore::ChenLingFesCellType a3, ::RPG::GameCore::ChenLingFesDirection a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChenLingFesPosition*, ::RPG::GameCore::ChenLingFesCellType, ::RPG::GameCore::ChenLingFesDirection, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_HMIDFNDMBHF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AHNOPHIBEBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AHNOPHIBEBL_OFFSET))(this);
		}

		::System::Boolean CNNDANEDCDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CNNDANEDCDH_OFFSET))(this);
		}

		::System::Void PHMBIJHDOCD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PHMBIJHDOCD_OFFSET))(this, a1);
		}

		::KNPKEPDMNFN* JDFJMPHPAHK()
		{
			return ((::KNPKEPDMNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JDFJMPHPAHK_OFFSET))(this);
		}

		::System::Boolean MGLOEIFKDMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MGLOEIFKDMB_OFFSET))(this);
		}

		::System::Void NFNFKKKMFKK(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NFNFKKKMFKK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HNHELHGGILI(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_HNHELHGGILI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OJFBBGJPPCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OJFBBGJPPCP_OFFSET))(this);
		}

		::FMNAMHLNOJB* ILHMIIBGBCB()
		{
			return ((::FMNAMHLNOJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ILHMIIBGBCB_OFFSET))(this);
		}

		::System::Boolean NLNHJGBKGBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NLNHJGBKGBE_OFFSET))(this);
		}

		::System::Void KKOPKPMBMFM(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_KKOPKPMBMFM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void JMMAMJENJKC(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JMMAMJENJKC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DLNELGFDOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DLNELGFDOBO_OFFSET))(this);
		}

		::DEMPJKLAAPG* PGIDENFONNA()
		{
			return ((::DEMPJKLAAPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PGIDENFONNA_OFFSET))(this);
		}

		::System::Boolean HINDEMICDMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_HINDEMICDMK_OFFSET))(this);
		}

		::System::Void JNIOMFCPFGC(::System::Collections::Generic::List_1<::IMFGILLIKOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IMFGILLIKOL*>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JNIOMFCPFGC_OFFSET))(this, a1);
		}

		::System::Void LDCINHMDDPB(::System::Collections::Generic::List_1<::IMFGILLIKOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IMFGILLIKOL*>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LDCINHMDDPB_OFFSET))(this, a1);
		}

		::System::Void ELJGLGCLDKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ELJGLGCLDKC_OFFSET))(this);
		}

		::OHGBBCKIDCG* BEGCBNAAKFG()
		{
			return ((::OHGBBCKIDCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_BEGCBNAAKFG_OFFSET))(this);
		}

		::System::Boolean ODONBKOGCAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ODONBKOGCAJ_OFFSET))(this);
		}

		::System::Void MAEONODHOIL(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::Boolean a2, ::RPG::GameCore::ChenLingFesDialogStyleType a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::RPG::GameCore::ChenLingFesProperty a7, ::System::Single a8, ::System::Boolean a9, ::RPG::GameCore::ChenLingFesDialogStyleType a10, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Boolean, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::ChenLingFesProperty, ::System::Single, ::System::Boolean, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MAEONODHOIL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void NBMHBNLFHHI(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::Boolean a2, ::RPG::GameCore::ChenLingFesDialogStyleType a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::RPG::GameCore::ChenLingFesProperty a7, ::System::Single a8, ::System::Boolean a9, ::RPG::GameCore::ChenLingFesDialogStyleType a10, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Boolean, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::ChenLingFesProperty, ::System::Single, ::System::Boolean, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NBMHBNLFHHI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void AFGGONGFGHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AFGGONGFGHN_OFFSET))(this);
		}

		::EPBHHKLMKNK* MAHNJMEJDMD()
		{
			return ((::EPBHHKLMKNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MAHNJMEJDMD_OFFSET))(this);
		}

		::System::Boolean COEHAFNLPAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_COEHAFNLPAJ_OFFSET))(this);
		}

		::System::Void AOJBFBAOCLE(::System::Boolean a1, ::RPG::GameCore::ChenLingFesToastStyleType a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AOJBFBAOCLE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GHHCOKPNPNP(::System::Boolean a1, ::RPG::GameCore::ChenLingFesToastStyleType a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GHHCOKPNPNP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void FKICLHGJPFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FKICLHGJPFN_OFFSET))(this);
		}

		::DOLKBNJPNAI* NLFCABFPJHD()
		{
			return ((::DOLKBNJPNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NLFCABFPJHD_OFFSET))(this);
		}

		::System::Boolean DFFGICDOKEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DFFGICDOKEG_OFFSET))(this);
		}

		::System::Void FIPDBFMPEKH(::System::UInt32 a1, ::RPG::GameCore::ChenLingFesItemConfig* a2, ::RPG::GameCore::ChenLingFesPosition* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Collections::Generic::List_1<::System::Int32>* a6, ::System::Collections::Generic::List_1<::System::Int32>* a7, ::System::Collections::Generic::List_1<::System::Int32>* a8, ::System::Collections::Generic::List_1<::System::Int32>* a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChenLingFesItemConfig*, ::RPG::GameCore::ChenLingFesPosition*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FIPDBFMPEKH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void MAPJDKFIJFJ(::System::UInt32 a1, ::RPG::GameCore::ChenLingFesItemConfig* a2, ::RPG::GameCore::ChenLingFesPosition* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Collections::Generic::List_1<::System::Int32>* a6, ::System::Collections::Generic::List_1<::System::Int32>* a7, ::System::Collections::Generic::List_1<::System::Int32>* a8, ::System::Collections::Generic::List_1<::System::Int32>* a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChenLingFesItemConfig*, ::RPG::GameCore::ChenLingFesPosition*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MAPJDKFIJFJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void NAGADEEMABM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NAGADEEMABM_OFFSET))(this);
		}

		::APOLGMPILBI* BGDEPINODJN()
		{
			return ((::APOLGMPILBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_BGDEPINODJN_OFFSET))(this);
		}

		::System::Boolean LFDFLHAAJKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LFDFLHAAJKE_OFFSET))(this);
		}

		::System::Void DGAGLGCGMDA(::MDIHMNFMNBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDIHMNFMNBH*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DGAGLGCGMDA_OFFSET))(this, a1);
		}

		::System::Void GOHJEIAIMBI(::MDIHMNFMNBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDIHMNFMNBH*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GOHJEIAIMBI_OFFSET))(this, a1);
		}

		::System::Void JBFAJJKPPBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JBFAJJKPPBP_OFFSET))(this);
		}

		::IJKOMCMLFGH* LDPNBEGMBJL()
		{
			return ((::IJKOMCMLFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LDPNBEGMBJL_OFFSET))(this);
		}

		::System::Boolean IFNIMAACNHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_IFNIMAACNHL_OFFSET))(this);
		}

		::System::Void AHFOEDCKJIA(::System::Int32 a1, ::System::Collections::Generic::Queue_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Queue_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AHFOEDCKJIA_OFFSET))(this, a1, a2);
		}

		::System::Void JIGNDCKMPGN(::System::Int32 a1, ::System::Collections::Generic::Queue_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Queue_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JIGNDCKMPGN_OFFSET))(this, a1, a2);
		}

		::System::Void PIFKIAKFENE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PIFKIAKFENE_OFFSET))(this);
		}

		::BAMOCNEALHK* FODBMMCKAEN()
		{
			return ((::BAMOCNEALHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FODBMMCKAEN_OFFSET))(this);
		}

		::System::Boolean DMEDLCMMIJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DMEDLCMMIJA_OFFSET))(this);
		}

		::System::Void FMBGAKEIDNM(::Il2CppArray<::System::Single>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FMBGAKEIDNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MENOFPHKCNC(::Il2CppArray<::System::Single>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MENOFPHKCNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKKPLKINALG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LKKPLKINALG_OFFSET))(this);
		}

		::AOBFJFEJOKL* DJIPPDICEGB()
		{
			return ((::AOBFJFEJOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DJIPPDICEGB_OFFSET))(this);
		}

		::System::Boolean LADMDMBPJCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LADMDMBPJCA_OFFSET))(this);
		}

		::System::Void OAFCJEIHNJA(::ELFHDNANEMN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELFHDNANEMN))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OAFCJEIHNJA_OFFSET))(this, a1);
		}

		::System::Void PNGPHDNDKMO(::ELFHDNANEMN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELFHDNANEMN))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PNGPHDNDKMO_OFFSET))(this, a1);
		}

		::System::Void NJMIJKLKFMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NJMIJKLKFMA_OFFSET))(this);
		}

		::NMBCLGEHKKG* BMDGOBBDEMM()
		{
			return ((::NMBCLGEHKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_BMDGOBBDEMM_OFFSET))(this);
		}

		::System::Boolean DGALANGBLDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DGALANGBLDP_OFFSET))(this);
		}

		::System::Void AddGenericViewAsset(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDGENERICVIEWASSET_OFFSET))(this, a1, a2);
		}

		::System::Void ReplaceGenericViewAsset(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACEGENERICVIEWASSET_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGenericViewAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVEGENERICVIEWASSET_OFFSET))(this);
		}

		::LHLNLPDCCJJ* NIOJMANDKML()
		{
			return ((::LHLNLPDCCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NIOJMANDKML_OFFSET))(this);
		}

		::System::Boolean IPGIADLECHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_IPGIADLECHP_OFFSET))(this);
		}

		::System::Void AddGenericViewAssetLoading(::OKJBIPGNAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJBIPGNAAG*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDGENERICVIEWASSETLOADING_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewAssetLoading(::OKJBIPGNAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJBIPGNAAG*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACEGENERICVIEWASSETLOADING_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewAssetLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVEGENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::HGOPEPJHPPP* AAFFJOLPJLP()
		{
			return ((::HGOPEPJHPPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AAFFJOLPJLP_OFFSET))(this);
		}

		::System::Boolean PBAFGHEOGPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PBAFGHEOGPM_OFFSET))(this);
		}

		::System::Void AddGenericViewBridge(::FOLHKNBFONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLHKNBFONK*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDGENERICVIEWBRIDGE_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewBridge(::FOLHKNBFONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLHKNBFONK*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACEGENERICVIEWBRIDGE_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewBridge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVEGENERICVIEWBRIDGE_OFFSET))(this);
		}

		::LHOFLNPEAFD* OINDPPOAHKE()
		{
			return ((::LHOFLNPEAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OINDPPOAHKE_OFFSET))(this);
		}

		::System::Boolean PJJMAGLOLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PJJMAGLOLJC_OFFSET))(this);
		}

		::System::Void AddGenericViewLoadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDGENERICVIEWLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewLoadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACEGENERICVIEWLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewLoadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVEGENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::MLBEFCJKMGG* BIKKGDDMNNF()
		{
			return ((::MLBEFCJKMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_BIKKGDDMNNF_OFFSET))(this);
		}

		::System::Boolean EBDECBFLFGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_EBDECBFLFGH_OFFSET))(this);
		}

		::System::Void AddGenericViewUnloadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDGENERICVIEWUNLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewUnloadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACEGENERICVIEWUNLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewUnloadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVEGENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

		::ILFILLOHKIL* DICDJJOJKGF()
		{
			return ((::ILFILLOHKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DICDJJOJKGF_OFFSET))(this);
		}

		::System::Boolean KFKBPJDGJDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_KFKBPJDGJDK_OFFSET))(this);
		}

		::System::Void AddTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReplaceTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACETRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVETRANSFORM_OFFSET))(this);
		}

		::DNIHJEFNKKO* LCPEEHIMCNO()
		{
			return ((::DNIHJEFNKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LCPEEHIMCNO_OFFSET))(this);
		}

		::System::Boolean FBMOAGMEGKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FBMOAGMEGKK_OFFSET))(this);
		}

		::System::Void AddStateTree(::PBBHMJFLBGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBBHMJFLBGC*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ADDSTATETREE_OFFSET))(this, a1);
		}

		::System::Void ReplaceStateTree(::PBBHMJFLBGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBBHMJFLBGC*))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REPLACESTATETREE_OFFSET))(this, a1);
		}

		::System::Void RemoveStateTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_REMOVESTATETREE_OFFSET))(this);
		}

		::NBBAJMIICFE* CIHDMACAGPN()
		{
			return ((::NBBAJMIICFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CIHDMACAGPN_OFFSET))(this);
		}

		::System::Boolean JPGOGEDKFOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JPGOGEDKFOM_OFFSET))(this);
		}

		::System::Void DPLKDKBHICH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DPLKDKBHICH_OFFSET))(this, a1);
		}

		::System::Void PICFJNDGBBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PICFJNDGBBG_OFFSET))(this, a1);
		}

		::System::Void NDOCHPMPPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NDOCHPMPPDA_OFFSET))(this);
		}

		::AOBFJFEJOKL* OJDODKBLLAP()
		{
			return ((::AOBFJFEJOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OJDODKBLLAP_OFFSET))(this);
		}

		::System::Boolean HNCHGGLIOLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_HNCHGGLIOLK_OFFSET))(this);
		}

		::ODHBFMIFIIK* BJOHCMEPPAP()
		{
			return ((::ODHBFMIFIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_BJOHCMEPPAP_OFFSET))(this);
		}

		::System::Boolean MIDANFKAAKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_MIDANFKAAKL_OFFSET))(this);
		}

		::EGJDABKLFEF* IHKGGIGNDNH()
		{
			return ((::EGJDABKLFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_IHKGGIGNDNH_OFFSET))(this);
		}

		::System::Boolean KBJMHPDNHDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_KBJMHPDNHDN_OFFSET))(this);
		}

		::KNPKEPDMNFN* FGALBFJJMED()
		{
			return ((::KNPKEPDMNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FGALBFJJMED_OFFSET))(this);
		}

		::System::Boolean CFMIBMGLEAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CFMIBMGLEAE_OFFSET))(this);
		}

		::OHGBBCKIDCG* JBHEJHCJPDN()
		{
			return ((::OHGBBCKIDCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JBHEJHCJPDN_OFFSET))(this);
		}

		::System::Boolean DNMFIJDADNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DNMFIJDADNC_OFFSET))(this);
		}

		::NBBAJMIICFE* FCLANJCKCLM()
		{
			return ((::NBBAJMIICFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_FCLANJCKCLM_OFFSET))(this);
		}

		::System::Boolean JGFCFJALDIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JGFCFJALDIG_OFFSET))(this);
		}

		::FAHDGLFOOAK* LPEHGMGDCIO()
		{
			return ((::FAHDGLFOOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LPEHGMGDCIO_OFFSET))(this);
		}

		::System::Boolean AJLOHJJNMKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AJLOHJJNMKK_OFFSET))(this);
		}

		::NMBCLGEHKKG* get_genericViewAsset()
		{
			return ((::NMBCLGEHKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_GENERICVIEWASSET_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASGENERICVIEWASSET_OFFSET))(this);
		}

		::LHLNLPDCCJJ* get_genericViewAssetLoading()
		{
			return ((::LHLNLPDCCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_GENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewAssetLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASGENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::HGOPEPJHPPP* get_genericViewBridge()
		{
			return ((::HGOPEPJHPPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_GENERICVIEWBRIDGE_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewBridge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASGENERICVIEWBRIDGE_OFFSET))(this);
		}

		::LHOFLNPEAFD* get_genericViewLoadCallback()
		{
			return ((::LHOFLNPEAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_GENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewLoadCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASGENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::MLBEFCJKMGG* get_genericViewUnloadCallback()
		{
			return ((::MLBEFCJKMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_GENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewUnloadCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASGENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

		::DOLKBNJPNAI* EHAIAJIFFNB()
		{
			return ((::DOLKBNJPNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_EHAIAJIFFNB_OFFSET))(this);
		}

		::System::Boolean INJLGPLLAEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_INJLGPLLAEI_OFFSET))(this);
		}

		::APOLGMPILBI* LLJEOGOFOBC()
		{
			return ((::APOLGMPILBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LLJEOGOFOBC_OFFSET))(this);
		}

		::System::Boolean NIPDHCMBOMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NIPDHCMBOMK_OFFSET))(this);
		}

		::DEMPJKLAAPG* NBHCPPPBFIK()
		{
			return ((::DEMPJKLAAPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NBHCPPPBFIK_OFFSET))(this);
		}

		::System::Boolean KMCDMMDNEMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_KMCDMMDNEMP_OFFSET))(this);
		}

		::System::Boolean DKLGJDOAAHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_DKLGJDOAAHO_OFFSET))(this);
		}

		::System::Void KDFAHBECGHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_KDFAHBECGHE_OFFSET))(this, a1);
		}

		::FMNAMHLNOJB* PKNALBDHJNI()
		{
			return ((::FMNAMHLNOJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_PKNALBDHJNI_OFFSET))(this);
		}

		::System::Boolean NGJHPGPCAII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_NGJHPGPCAII_OFFSET))(this);
		}

		::BAMOCNEALHK* ICCLLKEKJAI()
		{
			return ((::BAMOCNEALHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_ICCLLKEKJAI_OFFSET))(this);
		}

		::System::Boolean LOMJJNCMJMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_LOMJJNCMJMK_OFFSET))(this);
		}

		::DNIHJEFNKKO* get_stateTree()
		{
			return ((::DNIHJEFNKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_STATETREE_OFFSET))(this);
		}

		::System::Boolean get_hasStateTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASSTATETREE_OFFSET))(this);
		}

		::IJKOMCMLFGH* JLKJCBCPLBL()
		{
			return ((::IJKOMCMLFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JLKJCBCPLBL_OFFSET))(this);
		}

		::System::Boolean AJIJOEDLMJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AJIJOEDLMJD_OFFSET))(this);
		}

		::LLNKDOGGCOA* CFGMIMIDIJF()
		{
			return ((::LLNKDOGGCOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_CFGMIMIDIJF_OFFSET))(this);
		}

		::System::Boolean AJINGNEMHJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_AJINGNEMHJF_OFFSET))(this);
		}

		::EPBHHKLMKNK* JDKFBILBLAE()
		{
			return ((::EPBHHKLMKNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_JDKFBILBLAE_OFFSET))(this);
		}

		::System::Boolean OFAOEPKFFIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_OFAOEPKFFIM_OFFSET))(this);
		}

		::ILFILLOHKIL* get_transform()
		{
			return ((::ILFILLOHKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_hasTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFHCJIAOLH_GET_HASTRANSFORM_OFFSET))(this);
		}

	};
