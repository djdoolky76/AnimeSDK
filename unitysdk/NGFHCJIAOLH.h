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

#define NGFHCJIAOLH_AAFFJOLPJLP_OFFSET UNITYSDK_OFFSET(0x1C930000)
#define NGFHCJIAOLH_ADDGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C92FE50)
#define NGFHCJIAOLH_ADDGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C92FB90)
#define NGFHCJIAOLH_ADDGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C9300F0)
#define NGFHCJIAOLH_ADDGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930390)
#define NGFHCJIAOLH_ADDGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930670)
#define NGFHCJIAOLH_ADDSTATETREE_OFFSET UNITYSDK_OFFSET(0x1C930D70)
#define NGFHCJIAOLH_ADDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C930970)
#define NGFHCJIAOLH_AFGGONGFGHN_OFFSET UNITYSDK_OFFSET(0x1C92E250)
#define NGFHCJIAOLH_AHFOEDCKJIA_OFFSET UNITYSDK_OFFSET(0x1C92F1F0)
#define NGFHCJIAOLH_AHNOPHIBEBL_OFFSET UNITYSDK_OFFSET(0x1C92CF00)
#define NGFHCJIAOLH_AIEAKHKKAJA_OFFSET UNITYSDK_OFFSET(0x1C92C320)
#define NGFHCJIAOLH_AJGOEJHKOKE_OFFSET UNITYSDK_OFFSET(0x1C92C130)
#define NGFHCJIAOLH_AJIJOEDLMJD_OFFSET UNITYSDK_OFFSET(0x1C932680)
#define NGFHCJIAOLH_AJINGNEMHJF_OFFSET UNITYSDK_OFFSET(0x1C932790)
#define NGFHCJIAOLH_AJLOHJJNMKK_OFFSET UNITYSDK_OFFSET(0x1C9318B0)
#define NGFHCJIAOLH_AOJBFBAOCLE_OFFSET UNITYSDK_OFFSET(0x1C92E3B0)
#define NGFHCJIAOLH_BEGCBNAAKFG_OFFSET UNITYSDK_OFFSET(0x1C92DD00)
#define NGFHCJIAOLH_BGDEPINODJN_OFFSET UNITYSDK_OFFSET(0x1C92EDC0)
#define NGFHCJIAOLH_BIKKGDDMNNF_OFFSET UNITYSDK_OFFSET(0x1C930580)
#define NGFHCJIAOLH_BJOHCMEPPAP_OFFSET UNITYSDK_OFFSET(0x1C9312C0)
#define NGFHCJIAOLH_BMDGOBBDEMM_OFFSET UNITYSDK_OFFSET(0x1C92FAA0)
#define NGFHCJIAOLH_CAEABAKMOFB_OFFSET UNITYSDK_OFFSET(0x1C92C500)
#define NGFHCJIAOLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C932A90)
#define NGFHCJIAOLH_CFCLAMGAPDA_OFFSET UNITYSDK_OFFSET(0x1C92CBE0)
#define NGFHCJIAOLH_CFGMIMIDIJF_OFFSET UNITYSDK_OFFSET(0x1C9326E0)
#define NGFHCJIAOLH_CFMIBMGLEAE_OFFSET UNITYSDK_OFFSET(0x1C931590)
#define NGFHCJIAOLH_CIHDMACAGPN_OFFSET UNITYSDK_OFFSET(0x1C930F20)
#define NGFHCJIAOLH_CMKDNFLABCO_OFFSET UNITYSDK_OFFSET(0x1C92C560)
#define NGFHCJIAOLH_CNNDANEDCDH_OFFSET UNITYSDK_OFFSET(0x1C92CF50)
#define NGFHCJIAOLH_COEHAFNLPAJ_OFFSET UNITYSDK_OFFSET(0x1C92E350)
#define NGFHCJIAOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C932A10)
#define NGFHCJIAOLH_DFFGICDOKEG_OFFSET UNITYSDK_OFFSET(0x1C92E7F0)
#define NGFHCJIAOLH_DGAGLGCGMDA_OFFSET UNITYSDK_OFFSET(0x1C92EED0)
#define NGFHCJIAOLH_DGALANGBLDP_OFFSET UNITYSDK_OFFSET(0x1C92FB30)
#define NGFHCJIAOLH_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1C930860)
#define NGFHCJIAOLH_DJIPPDICEGB_OFFSET UNITYSDK_OFFSET(0x1C92F7E0)
#define NGFHCJIAOLH_DKLGJDOAAHO_OFFSET UNITYSDK_OFFSET(0x1C9320F0)
#define NGFHCJIAOLH_DLNELGFDOBO_OFFSET UNITYSDK_OFFSET(0x1C92D990)
#define NGFHCJIAOLH_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x1C92F4D0)
#define NGFHCJIAOLH_DNMFIJDADNC_OFFSET UNITYSDK_OFFSET(0x1C9316A0)
#define NGFHCJIAOLH_DPCFJILMMCL_OFFSET UNITYSDK_OFFSET(0x1C92C980)
#define NGFHCJIAOLH_DPLKDKBHICH_OFFSET UNITYSDK_OFFSET(0x1C931020)
#define NGFHCJIAOLH_EBDECBFLFGH_OFFSET UNITYSDK_OFFSET(0x1C930610)
#define NGFHCJIAOLH_EHAIAJIFFNB_OFFSET UNITYSDK_OFFSET(0x1C931DC0)
#define NGFHCJIAOLH_EHDEIMECKCA_OFFSET UNITYSDK_OFFSET(0x1C92C240)
#define NGFHCJIAOLH_EHMEOPMBFNG_OFFSET UNITYSDK_OFFSET(0x1C92C1E0)
#define NGFHCJIAOLH_ELJGLGCLDKC_OFFSET UNITYSDK_OFFSET(0x1C92DCB0)
#define NGFHCJIAOLH_FAAPKMJABLF_OFFSET UNITYSDK_OFFSET(0x1C92CB80)
#define NGFHCJIAOLH_FBMOAGMEGKK_OFFSET UNITYSDK_OFFSET(0x1C930D10)
#define NGFHCJIAOLH_FCLANJCKCLM_OFFSET UNITYSDK_OFFSET(0x1C931700)
#define NGFHCJIAOLH_FGALBFJJMED_OFFSET UNITYSDK_OFFSET(0x1C9314E0)
#define NGFHCJIAOLH_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x1C92E850)
#define NGFHCJIAOLH_FKICLHGJPFN_OFFSET UNITYSDK_OFFSET(0x1C92E6F0)
#define NGFHCJIAOLH_FKMIHGNFIPH_OFFSET UNITYSDK_OFFSET(0x1C92C820)
#define NGFHCJIAOLH_FMBGAKEIDNM_OFFSET UNITYSDK_OFFSET(0x1C92F530)
#define NGFHCJIAOLH_FNDCNEAHGOP_OFFSET UNITYSDK_OFFSET(0x1C92C400)
#define NGFHCJIAOLH_FODBMMCKAEN_OFFSET UNITYSDK_OFFSET(0x1C92F420)
#define NGFHCJIAOLH_GET_GENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C931A00)
#define NGFHCJIAOLH_GET_GENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C931910)
#define NGFHCJIAOLH_GET_GENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C931AF0)
#define NGFHCJIAOLH_GET_GENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C931BE0)
#define NGFHCJIAOLH_GET_GENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C931CD0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C931A90)
#define NGFHCJIAOLH_GET_HASGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C9319A0)
#define NGFHCJIAOLH_GET_HASGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C931B80)
#define NGFHCJIAOLH_GET_HASGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C931C70)
#define NGFHCJIAOLH_GET_HASGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C931D60)
#define NGFHCJIAOLH_GET_HASSTATETREE_OFFSET UNITYSDK_OFFSET(0x1C932570)
#define NGFHCJIAOLH_GET_HASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C9329B0)
#define NGFHCJIAOLH_GET_STATETREE_OFFSET UNITYSDK_OFFSET(0x1C9324E0)
#define NGFHCJIAOLH_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C932900)
#define NGFHCJIAOLH_GHHCOKPNPNP_OFFSET UNITYSDK_OFFSET(0x1C92E550)
#define NGFHCJIAOLH_GLNDKFGLDHH_OFFSET UNITYSDK_OFFSET(0x1C92CA80)
#define NGFHCJIAOLH_GOHJEIAIMBI_OFFSET UNITYSDK_OFFSET(0x1C92EFB0)
#define NGFHCJIAOLH_HINDEMICDMK_OFFSET UNITYSDK_OFFSET(0x1C92DA90)
#define NGFHCJIAOLH_HMIDFNDMBHF_OFFSET UNITYSDK_OFFSET(0x1C92CD70)
#define NGFHCJIAOLH_HNCHGGLIOLK_OFFSET UNITYSDK_OFFSET(0x1C931260)
#define NGFHCJIAOLH_HNHELHGGILI_OFFSET UNITYSDK_OFFSET(0x1C92D380)
#define NGFHCJIAOLH_ICCLLKEKJAI_OFFSET UNITYSDK_OFFSET(0x1C9323D0)
#define NGFHCJIAOLH_ICHBHNHEKNM_OFFSET UNITYSDK_OFFSET(0x1C92C450)
#define NGFHCJIAOLH_IFNIMAACNHL_OFFSET UNITYSDK_OFFSET(0x1C92F190)
#define NGFHCJIAOLH_IGEIDPNEPGL_OFFSET UNITYSDK_OFFSET(0x1C92C880)
#define NGFHCJIAOLH_IHKGGIGNDNH_OFFSET UNITYSDK_OFFSET(0x1C9313D0)
#define NGFHCJIAOLH_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0x1C92D520)
#define NGFHCJIAOLH_INJLGPLLAEI_OFFSET UNITYSDK_OFFSET(0x1C931E70)
#define NGFHCJIAOLH_IPGIADLECHP_OFFSET UNITYSDK_OFFSET(0x1C92FDF0)
#define NGFHCJIAOLH_JBFAJJKPPBP_OFFSET UNITYSDK_OFFSET(0x1C92F090)
#define NGFHCJIAOLH_JBHEJHCJPDN_OFFSET UNITYSDK_OFFSET(0x1C9315F0)
#define NGFHCJIAOLH_JDFJMPHPAHK_OFFSET UNITYSDK_OFFSET(0x1C92D120)
#define NGFHCJIAOLH_JDKFBILBLAE_OFFSET UNITYSDK_OFFSET(0x1C9327F0)
#define NGFHCJIAOLH_JGFCFJALDIG_OFFSET UNITYSDK_OFFSET(0x1C931790)
#define NGFHCJIAOLH_JIGNDCKMPGN_OFFSET UNITYSDK_OFFSET(0x1C92F2E0)
#define NGFHCJIAOLH_JLKJCBCPLBL_OFFSET UNITYSDK_OFFSET(0x1C9325D0)
#define NGFHCJIAOLH_JMMAMJENJKC_OFFSET UNITYSDK_OFFSET(0x1C92D7E0)
#define NGFHCJIAOLH_JNIOMFCPFGC_OFFSET UNITYSDK_OFFSET(0x1C92DAF0)
#define NGFHCJIAOLH_JPGOGEDKFOM_OFFSET UNITYSDK_OFFSET(0x1C930FB0)
#define NGFHCJIAOLH_KBJMHPDNHDN_OFFSET UNITYSDK_OFFSET(0x1C931480)
#define NGFHCJIAOLH_KDFAHBECGHE_OFFSET UNITYSDK_OFFSET(0x1C932150)
#define NGFHCJIAOLH_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1C930910)
#define NGFHCJIAOLH_KKOPKPMBMFM_OFFSET UNITYSDK_OFFSET(0x1C92D630)
#define NGFHCJIAOLH_KMCDMMDNEMP_OFFSET UNITYSDK_OFFSET(0x1C932090)
#define NGFHCJIAOLH_LADMDMBPJCA_OFFSET UNITYSDK_OFFSET(0x1C92F870)
#define NGFHCJIAOLH_LCPEEHIMCNO_OFFSET UNITYSDK_OFFSET(0x1C930C80)
#define NGFHCJIAOLH_LDCINHMDDPB_OFFSET UNITYSDK_OFFSET(0x1C92DBD0)
#define NGFHCJIAOLH_LDPNBEGMBJL_OFFSET UNITYSDK_OFFSET(0x1C92F0E0)
#define NGFHCJIAOLH_LFDFLHAAJKE_OFFSET UNITYSDK_OFFSET(0x1C92EE70)
#define NGFHCJIAOLH_LKKPLKINALG_OFFSET UNITYSDK_OFFSET(0x1C92F790)
#define NGFHCJIAOLH_LLJEOGOFOBC_OFFSET UNITYSDK_OFFSET(0x1C931ED0)
#define NGFHCJIAOLH_LOMJJNCMJMK_OFFSET UNITYSDK_OFFSET(0x1C932480)
#define NGFHCJIAOLH_LPEHGMGDCIO_OFFSET UNITYSDK_OFFSET(0x1C931800)
#define NGFHCJIAOLH_MAEONODHOIL_OFFSET UNITYSDK_OFFSET(0x1C92DE10)
#define NGFHCJIAOLH_MAHNJMEJDMD_OFFSET UNITYSDK_OFFSET(0x1C92E2A0)
#define NGFHCJIAOLH_MAPJDKFIJFJ_OFFSET UNITYSDK_OFFSET(0x1C92EAE0)
#define NGFHCJIAOLH_MCLLALGABAB_OFFSET UNITYSDK_OFFSET(0x1C92C770)
#define NGFHCJIAOLH_MENOFPHKCNC_OFFSET UNITYSDK_OFFSET(0x1C92F660)
#define NGFHCJIAOLH_MGLOEIFKDMB_OFFSET UNITYSDK_OFFSET(0x1C92D1D0)
#define NGFHCJIAOLH_MIDANFKAAKL_OFFSET UNITYSDK_OFFSET(0x1C931370)
#define NGFHCJIAOLH_MLBDBGHGPKK_OFFSET UNITYSDK_OFFSET(0x1C92CAD0)
#define NGFHCJIAOLH_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0x1C92ED70)
#define NGFHCJIAOLH_NBHCPPPBFIK_OFFSET UNITYSDK_OFFSET(0x1C931FE0)
#define NGFHCJIAOLH_NBMHBNLFHHI_OFFSET UNITYSDK_OFFSET(0x1C92E030)
#define NGFHCJIAOLH_NDOCHPMPPDA_OFFSET UNITYSDK_OFFSET(0x1C931180)
#define NGFHCJIAOLH_NFNFKKKMFKK_OFFSET UNITYSDK_OFFSET(0x1C92D230)
#define NGFHCJIAOLH_NGJHPGPCAII_OFFSET UNITYSDK_OFFSET(0x1C932370)
#define NGFHCJIAOLH_NIOJMANDKML_OFFSET UNITYSDK_OFFSET(0x1C92FD60)
#define NGFHCJIAOLH_NIPDHCMBOMK_OFFSET UNITYSDK_OFFSET(0x1C931F80)
#define NGFHCJIAOLH_NJMIJKLKFMA_OFFSET UNITYSDK_OFFSET(0x1C92FA50)
#define NGFHCJIAOLH_NLFCABFPJHD_OFFSET UNITYSDK_OFFSET(0x1C92E740)
#define NGFHCJIAOLH_NLNHJGBKGBE_OFFSET UNITYSDK_OFFSET(0x1C92D5D0)
#define NGFHCJIAOLH_OAFCJEIHNJA_OFFSET UNITYSDK_OFFSET(0x1C92F8D0)
#define NGFHCJIAOLH_ODONBKOGCAJ_OFFSET UNITYSDK_OFFSET(0x1C92DDB0)
#define NGFHCJIAOLH_OFAOEPKFFIM_OFFSET UNITYSDK_OFFSET(0x1C9328A0)
#define NGFHCJIAOLH_OINDPPOAHKE_OFFSET UNITYSDK_OFFSET(0x1C9302A0)
#define NGFHCJIAOLH_OJDODKBLLAP_OFFSET UNITYSDK_OFFSET(0x1C9311D0)
#define NGFHCJIAOLH_OJFBBGJPPCP_OFFSET UNITYSDK_OFFSET(0x1C92D4D0)
#define NGFHCJIAOLH_OJLHLDCJLGJ_OFFSET UNITYSDK_OFFSET(0x1C92C640)
#define NGFHCJIAOLH_PALJEJGHKFH_OFFSET UNITYSDK_OFFSET(0x1C92C720)
#define NGFHCJIAOLH_PBAFGHEOGPM_OFFSET UNITYSDK_OFFSET(0x1C930090)
#define NGFHCJIAOLH_PGIDENFONNA_OFFSET UNITYSDK_OFFSET(0x1C92D9E0)
#define NGFHCJIAOLH_PHMBIJHDOCD_OFFSET UNITYSDK_OFFSET(0x1C92CFB0)
#define NGFHCJIAOLH_PICFJNDGBBG_OFFSET UNITYSDK_OFFSET(0x1C9310D0)
#define NGFHCJIAOLH_PIFKIAKFENE_OFFSET UNITYSDK_OFFSET(0x1C92F3D0)
#define NGFHCJIAOLH_PJJMAGLOLJC_OFFSET UNITYSDK_OFFSET(0x1C930330)
#define NGFHCJIAOLH_PKNALBDHJNI_OFFSET UNITYSDK_OFFSET(0x1C9322C0)
#define NGFHCJIAOLH_PNGPHDNDKMO_OFFSET UNITYSDK_OFFSET(0x1C92F990)
#define NGFHCJIAOLH_REMOVEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C92FFB0)
#define NGFHCJIAOLH_REMOVEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C92FD10)
#define NGFHCJIAOLH_REMOVEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C930250)
#define NGFHCJIAOLH_REMOVEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930530)
#define NGFHCJIAOLH_REMOVEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930810)
#define NGFHCJIAOLH_REMOVESTATETREE_OFFSET UNITYSDK_OFFSET(0x1C930ED0)
#define NGFHCJIAOLH_REMOVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C930C30)
#define NGFHCJIAOLH_REPLACEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1C92FF00)
#define NGFHCJIAOLH_REPLACEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1C92FC50)
#define NGFHCJIAOLH_REPLACEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1C9301A0)
#define NGFHCJIAOLH_REPLACEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930460)
#define NGFHCJIAOLH_REPLACEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C930740)
#define NGFHCJIAOLH_REPLACESTATETREE_OFFSET UNITYSDK_OFFSET(0x1C930E20)
#define NGFHCJIAOLH_REPLACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C930AD0)

inline static constexpr unsigned int NGFHCJIAOLH_TypeDefinitionIndex = 42569;

	class NGFHCJIAOLH : public ::Entitas::Entity
	{
	public:
		static ::ONDHPCOOMID** StaticGet_MODDNOEIMMM()
		{
			return (::ONDHPCOOMID**)UnitySDK::FromName("", "NGFHCJIAOLH")->GetStaticField(0x53B10);
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
