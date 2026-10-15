#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNHIALEAAPG.h"
#include "unitysdk/GLAJJDPBHLL.h"
#include "unitysdk/KLEFGGIHGMI_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class ECJGNBGJJPO;
class KGDADKNPPOL;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class PKKNEBGOION;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define KGDADKNPPOL_ADOAHPKNMIK_1_OFFSET UNITYSDK_OFFSET(0xB3D6A80)
#define KGDADKNPPOL_ADOAHPKNMIK_OFFSET UNITYSDK_OFFSET(0xB3D6080)
#define KGDADKNPPOL_AGGONCBKAHF_OFFSET UNITYSDK_OFFSET(0xB3D7660)
#define KGDADKNPPOL_AOBDNNMIDEC_OFFSET UNITYSDK_OFFSET(0xB3DAEE0)
#define KGDADKNPPOL_AONCCDIPPBL_OFFSET UNITYSDK_OFFSET(0xB3D9550)
#define KGDADKNPPOL_BBHEIADIACA_OFFSET UNITYSDK_OFFSET(0xB3D6450)
#define KGDADKNPPOL_BDNGCDMMKDF_OFFSET UNITYSDK_OFFSET(0xB3D95A0)
#define KGDADKNPPOL_BECBKBJODCJ_OFFSET UNITYSDK_OFFSET(0xB3DB510)
#define KGDADKNPPOL_BHJIPIHEDJP_OFFSET UNITYSDK_OFFSET(0xB3D6910)
#define KGDADKNPPOL_BHLHBEOOGCE_OFFSET UNITYSDK_OFFSET(0xB3D6D40)
#define KGDADKNPPOL_BIPBGBNMDFI_OFFSET UNITYSDK_OFFSET(0xB3DB860)
#define KGDADKNPPOL_CBMEEMKADFB_OFFSET UNITYSDK_OFFSET(0xB3D8560)
#define KGDADKNPPOL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3DCE20)
#define KGDADKNPPOL_CFNMPOPCCOG_OFFSET UNITYSDK_OFFSET(0xB3DB8B0)
#define KGDADKNPPOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB3CFFC0)
#define KGDADKNPPOL_DBOLAHDJEOB_OFFSET UNITYSDK_OFFSET(0xB3D55D0)
#define KGDADKNPPOL_DDNPDLJCPEP_OFFSET UNITYSDK_OFFSET(0xB3D6F30)
#define KGDADKNPPOL_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB3D7FE0)
#define KGDADKNPPOL_DIGJCPPEGAK_OFFSET UNITYSDK_OFFSET(0xB3DA6F0)
#define KGDADKNPPOL_DLHLMJCOHCP_OFFSET UNITYSDK_OFFSET(0xB3D5C00)
#define KGDADKNPPOL_DMPLNBFNHKG_OFFSET UNITYSDK_OFFSET(0xB3DA640)
#define KGDADKNPPOL_DOOCKLBMHAM_OFFSET UNITYSDK_OFFSET(0xB3D9660)
#define KGDADKNPPOL_EBDCACMNFNL_OFFSET UNITYSDK_OFFSET(0xB3DB940)
#define KGDADKNPPOL_EGNEFDGGHJJ_OFFSET UNITYSDK_OFFSET(0xB3D93F0)
#define KGDADKNPPOL_EHIJMGBDGKJ_OFFSET UNITYSDK_OFFSET(0xB3D7450)
#define KGDADKNPPOL_EIGAFIHJLLK_OFFSET UNITYSDK_OFFSET(0xB3CF3F0)
#define KGDADKNPPOL_ELDHJFNMAOD_OFFSET UNITYSDK_OFFSET(0xB3DB990)
#define KGDADKNPPOL_ELPANJNBPBO_OFFSET UNITYSDK_OFFSET(0xB3D93A0)
#define KGDADKNPPOL_EMEOLDCNBLE_OFFSET UNITYSDK_OFFSET(0xB3DB410)
#define KGDADKNPPOL_ENOAFCADJID_1_OFFSET UNITYSDK_OFFSET(0xB3DA030)
#define KGDADKNPPOL_ENOAFCADJID_OFFSET UNITYSDK_OFFSET(0xB3D9FE0)
#define KGDADKNPPOL_FAAPMAAOEDJ_OFFSET UNITYSDK_OFFSET(0xB3D5230)
#define KGDADKNPPOL_FCGKMGPNLLD_OFFSET UNITYSDK_OFFSET(0xB3D1940)
#define KGDADKNPPOL_FJMNBKFKPIF_OFFSET UNITYSDK_OFFSET(0xB3CF090)
#define KGDADKNPPOL_FMJIOANJKML_OFFSET UNITYSDK_OFFSET(0xB3D6010)
#define KGDADKNPPOL_GALNBJMACPH_OFFSET UNITYSDK_OFFSET(0xB3D4FC0)
#define KGDADKNPPOL_GEFJEPIDJGB_OFFSET UNITYSDK_OFFSET(0xB3D87E0)
#define KGDADKNPPOL_GET_INSIDEPRELOADSOURCE_OFFSET UNITYSDK_OFFSET(0xB3DB840)
#define KGDADKNPPOL_GET_PRELOADSOURCEDIST_OFFSET UNITYSDK_OFFSET(0xB3DB820)
#define KGDADKNPPOL_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xB3DB390)
#define KGDADKNPPOL_GIGCCHLMMJN_OFFSET UNITYSDK_OFFSET(0xB3D9490)
#define KGDADKNPPOL_GLNPFPHGKOM_OFFSET UNITYSDK_OFFSET(0xB3DC400)
#define KGDADKNPPOL_GMBJIOHBFDD_OFFSET UNITYSDK_OFFSET(0xB3DAA60)
#define KGDADKNPPOL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB3D3CD0)
#define KGDADKNPPOL_HBDBANJGJDD_OFFSET UNITYSDK_OFFSET(0xB3D4A90)
#define KGDADKNPPOL_HBKHAEIDFML_OFFSET UNITYSDK_OFFSET(0xB3CEA00)
#define KGDADKNPPOL_HDACLPECPHF_OFFSET UNITYSDK_OFFSET(0xB3CF120)
#define KGDADKNPPOL_HLBFBHJEHFD_OFFSET UNITYSDK_OFFSET(0xB3D7B30)
#define KGDADKNPPOL_HLPHFMJAABK_OFFSET UNITYSDK_OFFSET(0xB3DA9D0)
#define KGDADKNPPOL_HMEFPIEKDHM_OFFSET UNITYSDK_OFFSET(0xB3D4B20)
#define KGDADKNPPOL_HPGBEIONFCN_OFFSET UNITYSDK_OFFSET(0xB3D5FB0)
#define KGDADKNPPOL_HPGJIBLJMID_OFFSET UNITYSDK_OFFSET(0xB3CF170)
#define KGDADKNPPOL_IBJBDDCCPFH_OFFSET UNITYSDK_OFFSET(0xB3D2D30)
#define KGDADKNPPOL_ICLHDNHCBHD_OFFSET UNITYSDK_OFFSET(0xB3CFA00)
#define KGDADKNPPOL_IDBONIDCNCP_OFFSET UNITYSDK_OFFSET(0xB3D1120)
#define KGDADKNPPOL_IHNPMMKOKDE_OFFSET UNITYSDK_OFFSET(0xB3D78A0)
#define KGDADKNPPOL_JABBDNFPGOA_OFFSET UNITYSDK_OFFSET(0xB3D5890)
#define KGDADKNPPOL_JDGDDMHJAAF_OFFSET UNITYSDK_OFFSET(0xB3D4720)
#define KGDADKNPPOL_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB3DA740)
#define KGDADKNPPOL_JKONPFLHHFI_OFFSET UNITYSDK_OFFSET(0xB3D8C30)
#define KGDADKNPPOL_JOEFAPDKMMJ_OFFSET UNITYSDK_OFFSET(0xB3D6C80)
#define KGDADKNPPOL_JOEGKHOOBLN_OFFSET UNITYSDK_OFFSET(0xB3D9B40)
#define KGDADKNPPOL_JOFLNFPKNKC_OFFSET UNITYSDK_OFFSET(0xB3DB350)
#define KGDADKNPPOL_KBEKBMDILFM_OFFSET UNITYSDK_OFFSET(0xB3DB3B0)
#define KGDADKNPPOL_KBFGAIMACOB_OFFSET UNITYSDK_OFFSET(0xB3CFC30)
#define KGDADKNPPOL_KBKHIFNBCDI_OFFSET UNITYSDK_OFFSET(0xB3D69B0)
#define KGDADKNPPOL_KJHDHANJOKP_OFFSET UNITYSDK_OFFSET(0xB3D2400)
#define KGDADKNPPOL_KJNECBFAAJF_OFFSET UNITYSDK_OFFSET(0xB3D1360)
#define KGDADKNPPOL_KMGHENBKKOD_OFFSET UNITYSDK_OFFSET(0xB3DACE0)
#define KGDADKNPPOL_KNEMOJCEHNO_OFFSET UNITYSDK_OFFSET(0xB3DB310)
#define KGDADKNPPOL_KOBGLJFGGHF_OFFSET UNITYSDK_OFFSET(0xB3DA800)
#define KGDADKNPPOL_KPCDIENILAP_OFFSET UNITYSDK_OFFSET(0xB3D82C0)
#define KGDADKNPPOL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3D2C20)
#define KGDADKNPPOL_LCCNKHCLIOG_OFFSET UNITYSDK_OFFSET(0xB3DB9F0)
#define KGDADKNPPOL_LHIACGJBFPN_OFFSET UNITYSDK_OFFSET(0xB3D6C20)
#define KGDADKNPPOL_LKDDJLJBIGG_OFFSET UNITYSDK_OFFSET(0xB3DA790)
#define KGDADKNPPOL_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xB3D8EB0)
#define KGDADKNPPOL_LOGPAIBDPCM_OFFSET UNITYSDK_OFFSET(0xB3D9600)
#define KGDADKNPPOL_MBFJFGOKIBN_OFFSET UNITYSDK_OFFSET(0xB3D9440)
#define KGDADKNPPOL_MDAPCMFOFMI_OFFSET UNITYSDK_OFFSET(0xB3D89B0)
#define KGDADKNPPOL_MPJDGCCOMME_OFFSET UNITYSDK_OFFSET(0xB3DAA20)
#define KGDADKNPPOL_NBEPNLCHCFE_OFFSET UNITYSDK_OFFSET(0xB3D6B20)
#define KGDADKNPPOL_NDCGPHMADOI_OFFSET UNITYSDK_OFFSET(0xB3D94D0)
#define KGDADKNPPOL_NILALEKMCCJ_OFFSET UNITYSDK_OFFSET(0xB3D3B40)
#define KGDADKNPPOL_NJIBMKOCFBL_OFFSET UNITYSDK_OFFSET(0xB3CF040)
#define KGDADKNPPOL_NKAJPCCEFJJ_OFFSET UNITYSDK_OFFSET(0xB3D9510)
#define KGDADKNPPOL_NNAGLHDAMHB_OFFSET UNITYSDK_OFFSET(0xB3D81C0)
#define KGDADKNPPOL_OLCAJACJDFK_OFFSET UNITYSDK_OFFSET(0xB3D6670)
#define KGDADKNPPOL_OLGJPNBGPCG_OFFSET UNITYSDK_OFFSET(0xB3DB6A0)
#define KGDADKNPPOL_ONPGOAAOFJG_OFFSET UNITYSDK_OFFSET(0xB3CF260)
#define KGDADKNPPOL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB3D7B70)
#define KGDADKNPPOL_PCJOEAOFPBP_OFFSET UNITYSDK_OFFSET(0xB3D5CB0)
#define KGDADKNPPOL_PFONCDGKCLM_OFFSET UNITYSDK_OFFSET(0xB3D79B0)
#define KGDADKNPPOL_PHNFGNKHKCE_OFFSET UNITYSDK_OFFSET(0xB3D65F0)
#define KGDADKNPPOL_PKBEOGJPBBK_OFFSET UNITYSDK_OFFSET(0xB3D39D0)
#define KGDADKNPPOL_PLFJCDHBLFB_OFFSET UNITYSDK_OFFSET(0xB3D7580)
#define KGDADKNPPOL_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0xB3DAF70)
#define KGDADKNPPOL_PNJDGPDNLJB_OFFSET UNITYSDK_OFFSET(0xB3DAFC0)
#define KGDADKNPPOL_POENPEIOFAG_OFFSET UNITYSDK_OFFSET(0xB3DA110)
#define KGDADKNPPOL_SET_INSIDEPRELOADSOURCE_OFFSET UNITYSDK_OFFSET(0xB3DB850)
#define KGDADKNPPOL_SET_PRELOADSOURCEDIST_OFFSET UNITYSDK_OFFSET(0xB3DB830)
#define KGDADKNPPOL_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xB3DB3A0)
#define KGDADKNPPOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB3CFEF0)

	class KGDADKNPPOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FDEDCDIMIPA; // 0x10
		::RPG::GameCore::StageRegionConfig* CFKEEIGFKDH; // 0x18
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* DHDLAAAEGPI; // 0x20
		::RPG::GameCore::HoyoTagContainer* HIJFIDNJJKB; // 0x28
		::RPG::GameCore::LevelRegionStateConfig* KAJFMMNOLEJ; // 0x30
		::RPG::GameCore::HoyoTagContainer* FLLGAPPECIO; // 0x38
		::PKKNEBGOION* CJGHIABBLHI; // 0x40
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* FONDGECHGHA; // 0x48
		::System::Action* JHFLOAFAFBA; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* MJKLPKMNMFF; // 0x58
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* HGLLDKBNOEJ; // 0x60
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* DFLKEEOEBIA; // 0x68
		::UnityEngine::GameObject* JFKANJOPEHN; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ECJGNBGJJPO*>* JODLNDJGOPC; // 0x78
		::RPG::GameCore::LevelRegionInfo* OANJKADBIBE; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* IJPJPHMMODC; // 0x88
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::KGDADKNPPOL*, ::GLAJJDPBHLL>*>* MDKJEHNDFPD; // 0x90
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState>*>* PBIMIKABLGO; // 0x98
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* _VisibleMiddleOwnerStreamingBlocks_k__BackingField; // 0xA0
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0xA8
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::System::Object*>*>*>* EAMOCIIICBE; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* CMNLNIPMHBI; // 0xB8
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* DPKNJGFHOAC; // 0xC0
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::GLAJJDPBHLL, ::System::Collections::Generic::List_1<::System::Object*>*>*>* KBBIKMMDCGI; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* MILHJDLAODN; // 0xD0
		::System::Boolean NHKDIFJGGKL; // 0xD8
		::System::Boolean NANMLACOOCC; // 0xD9
		::System::Boolean NPNLDMJGNEK; // 0xDA
		::System::Byte _padding0[0x1];
		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority PBFENJMKPLP; // 0xDC
		::FNHIALEAAPG GJMKMHHJHAE; // 0xE0
		::GLAJJDPBHLL LIAFAKEHMID; // 0xFC
		::System::Boolean ABKLGIKNBOC; // 0x104
		::System::Boolean _InsidePreloadSource_k__BackingField; // 0x105
		::System::Boolean FEODGDAMPKO; // 0x106
		::System::Boolean ANNHPINKMCO; // 0x107
		::RPG::GameCore::StageRegionVisualState HHMICDPNGJK; // 0x108
		::System::Boolean EOFIIKNACBH; // 0x10C
		::System::Boolean NGLPGCKGIFB; // 0x10D
		::System::Boolean EFIIOOJJLDM; // 0x10E
		::System::Boolean EBBICOBIIJP; // 0x10F
		::RPG::GameCore::StageRegionVisualState BIMCKIJJJJJ; // 0x110
		::System::Int32 _PreloadSourceDist_k__BackingField; // 0x114
		::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0x118
		::GLAJJDPBHLL EAOFLGIHDBG; // 0x158
		::RPG::GameCore::StageRegionActiveState NHJJGOHPBLA; // 0x160
		::System::Int32 KEKJBLFMAEL; // 0x164
		::System::Boolean NPKCELIKGCD; // 0x168
		::System::Boolean GNLHMEALOAG; // 0x169
		::System::Boolean EJFDKHNEEOM; // 0x16A
		::System::Boolean BKPMGCPJKKO; // 0x16B
		static ::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>** StaticGet_MGNAEKAIDBD()
		{
			return (::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>**)UnitySDK::FromName("", "KGDADKNPPOL")->GetStaticField(0x4CA00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_HJKDIKKODEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)UnitySDK::FromName("", "KGDADKNPPOL")->GetStaticField(0x4CA08);
		}

		static ::KGDADKNPPOL** StaticGet_PJEPEMCGJMF()
		{
			return (::KGDADKNPPOL**)UnitySDK::FromName("", "KGDADKNPPOL")->GetStaticField(0x4CA10);
		}

		// static const ::System::Object FBEHOLBACJE; // 0x0
		// static const ::System::String* GMNOGCANNNF; // 0x0
		::System::Void _ctor(::PKKNEBGOION* a1, ::RPG::GameCore::StageRegionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PKKNEBGOION*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGDADKNPPOL_CCTOR_OFFSET))();
		}

		::GLAJJDPBHLL HBKHAEIDFML()
		{
			return ((::GLAJJDPBHLL(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HBKHAEIDFML_OFFSET))(this);
		}

		::System::Boolean NJIBMKOCFBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NJIBMKOCFBL_OFFSET))(this);
		}

		::System::Void FJMNBKFKPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_FJMNBKFKPIF_OFFSET))(this);
		}

		::System::Void HDACLPECPHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HDACLPECPHF_OFFSET))(this);
		}

		::FNHIALEAAPG HPGJIBLJMID()
		{
			return ((::FNHIALEAAPG(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HPGJIBLJMID_OFFSET))(this);
		}

		::FNHIALEAAPG ONPGOAAOFJG()
		{
			return ((::FNHIALEAAPG(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ONPGOAAOFJG_OFFSET))(this);
		}

		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority EIGAFIHJLLK(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_EIGAFIHJLLK_OFFSET))(this, a1);
		}

		::System::Void ICLHDNHCBHD(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ICLHDNHCBHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KBFGAIMACOB(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KBFGAIMACOB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_TOSTRING_OFFSET))(this);
		}

		::System::Void IDBONIDCNCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_IDBONIDCNCP_OFFSET))(this);
		}

		::System::Void KJNECBFAAJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KJNECBFAAJF_OFFSET))(this);
		}

		::System::Void FCGKMGPNLLD(::RPG::GameCore::LevelRegionInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_FCGKMGPNLLD_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GALNBJMACPH(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionVisualState a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GALNBJMACPH_OFFSET))(this, a1, a2);
		}

		::System::Void FAAPMAAOEDJ(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_FAAPMAAOEDJ_OFFSET))(this, a1);
		}

		::System::Void DBOLAHDJEOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DBOLAHDJEOB_OFFSET))(this);
		}

		::System::Void JDGDDMHJAAF(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JDGDDMHJAAF_OFFSET))(this, a1);
		}

		::System::Void PCJOEAOFPBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PCJOEAOFPBP_OFFSET))(this);
		}

		::System::Void JABBDNFPGOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JABBDNFPGOA_OFFSET))(this, a1);
		}

		::System::Void HPGBEIONFCN(::RPG::GameCore::LevelRegionStateConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HPGBEIONFCN_OFFSET))(this, a1);
		}

		::System::Void PKBEOGJPBBK(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PKBEOGJPBBK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FMJIOANJKML(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + KGDADKNPPOL_FMJIOANJKML_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BBHEIADIACA(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BBHEIADIACA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NILALEKMCCJ(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NILALEKMCCJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PHNFGNKHKCE(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PHNFGNKHKCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OLCAJACJDFK(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_OLCAJACJDFK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ADOAHPKNMIK(::GLAJJDPBHLL a1, ::GLAJJDPBHLL a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a6)
		{
			return ((::System::Void(*)(::PVOID, ::GLAJJDPBHLL, ::GLAJJDPBHLL, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ADOAHPKNMIK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KBKHIFNBCDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KBKHIFNBCDI_OFFSET))(this);
		}

		::System::Void BHJIPIHEDJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BHJIPIHEDJP_OFFSET))(this);
		}

		::System::Void ADOAHPKNMIK_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ADOAHPKNMIK_1_OFFSET))(this);
		}

		::System::Void IBJBDDCCPFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_IBJBDDCCPFH_OFFSET))(this);
		}

		::System::Void LHIACGJBFPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_LHIACGJBFPN_OFFSET))(this);
		}

		::System::Void NBEPNLCHCFE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NBEPNLCHCFE_OFFSET))(this, a1);
		}

		::System::Void JOEFAPDKMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JOEFAPDKMMJ_OFFSET))(this);
		}

		::System::Void HMEFPIEKDHM(::GLAJJDPBHLL a1, ::System::Boolean a2, ::System::Boolean a3, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::GLAJJDPBHLL, ::System::Boolean, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HMEFPIEKDHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DDNPDLJCPEP(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DDNPDLJCPEP_OFFSET))(this, a1, a2);
		}

		::System::Void DLHLMJCOHCP(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DLHLMJCOHCP_OFFSET))(this, a1, a2);
		}

		::System::Void AGGONCBKAHF(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_AGGONCBKAHF_OFFSET))(this, a1, a2);
		}

		::System::Void PLFJCDHBLFB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PLFJCDHBLFB_OFFSET))(this, a1, a2);
		}

		::System::Void PFONCDGKCLM(::KLEFGGIHGMI* a1, ::RPG::GameCore::RegionBlockVisibilityStatus a2, ::System::Boolean a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PFONCDGKCLM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HBDBANJGJDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HBDBANJGJDD_OFFSET))(this);
		}

		::System::Void IHNPMMKOKDE(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_IHNPMMKOKDE_OFFSET))(this, a1, a2);
		}

		::System::Void BHLHBEOOGCE(::GLAJJDPBHLL a1, ::System::Boolean a2, ::KLEFGGIHGMI* a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5)
		{
			return ((::System::Void(*)(::PVOID, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI*, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BHLHBEOOGCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EHIJMGBDGKJ(::GLAJJDPBHLL a1, ::System::Boolean a2, ::KLEFGGIHGMI* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_EHIJMGBDGKJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HLBFBHJEHFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HLBFBHJEHFD_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DFFCHNLKELO_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNAGLHDAMHB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NNAGLHDAMHB_OFFSET))(this, a1);
		}

		::System::Void KPCDIENILAP(::APLEMBNFLAA* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Object*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KPCDIENILAP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean CBMEEMKADFB(::RPG::GameCore::LevelRegionStateCondition* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_CBMEEMKADFB_OFFSET))(a1);
		}

		static ::System::Boolean GEFJEPIDJGB(::RPG::GameCore::LevelRegionStateConditionSet* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GEFJEPIDJGB_OFFSET))(a1);
		}

		::System::Void KJHDHANJOKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KJHDHANJOKP_OFFSET))(this);
		}

		::System::Void MDAPCMFOFMI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_MDAPCMFOFMI_OFFSET))(this, a1);
		}

		::System::Void JKONPFLHHFI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JKONPFLHHFI_OFFSET))(this, a1);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageRegionType ELPANJNBPBO()
		{
			return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ELPANJNBPBO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* EGNEFDGGHJJ()
		{
			return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_EGNEFDGGHJJ_OFFSET))(this);
		}

		::System::UInt32 MBFJFGOKIBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_MBFJFGOKIBN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* GIGCCHLMMJN()
		{
			return ((::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GIGCCHLMMJN_OFFSET))(this);
		}

		::UnityEngine::GameObject* NDCGPHMADOI()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NDCGPHMADOI_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionConfig* NKAJPCCEFJJ()
		{
			return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_NKAJPCCEFJJ_OFFSET))(this);
		}

		::RPG::GameCore::LevelRegionInfo* AONCCDIPPBL()
		{
			return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_AONCCDIPPBL_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionVisualState BDNGCDMMKDF()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BDNGCDMMKDF_OFFSET))(this);
		}

		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority LOGPAIBDPCM()
		{
			return ((::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_LOGPAIBDPCM_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionVisualState DOOCKLBMHAM()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DOOCKLBMHAM_OFFSET))(this);
		}

		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority JOEGKHOOBLN(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JOEGKHOOBLN_OFFSET))(this, a1);
		}

		static ::System::Boolean ENOAFCADJID(::GLAJJDPBHLL a1)
		{
			return ((::System::Boolean(*)(::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ENOAFCADJID_OFFSET))(a1);
		}

		static ::System::Boolean ENOAFCADJID_1(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ENOAFCADJID_1_OFFSET))(a1);
		}

		::System::Void POENPEIOFAG(::GLAJJDPBHLL a1, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::GLAJJDPBHLL, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + KGDADKNPPOL_POENPEIOFAG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::StageRegionActiveState DMPLNBFNHKG()
		{
			return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DMPLNBFNHKG_OFFSET))(this);
		}

		static ::RPG::GameCore::StageRegionActiveState DIGJCPPEGAK(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_DIGJCPPEGAK_OFFSET))(a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JKEONEEPIHH_OFFSET))(this);
		}

		static ::System::Boolean LKDDJLJBIGG(::System::Boolean a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::LevelRegionInfo* a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_LKDDJLJBIGG_OFFSET))(a1, a2, a3);
		}

		::System::Boolean KOBGLJFGGHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KOBGLJFGGHF_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* HLPHFMJAABK()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_HLPHFMJAABK_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* MPJDGCCOMME()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_MPJDGCCOMME_OFFSET))(this);
		}

		::System::Boolean GMBJIOHBFDD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GMBJIOHBFDD_OFFSET))(this, a1);
		}

		static ::System::Boolean KMGHENBKKOD(::KLEFGGIHGMI* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::KLEFGGIHGMI*, ::System::Single))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KMGHENBKKOD_OFFSET))(a1, a2);
		}

		::System::Boolean AOBDNNMIDEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_AOBDNNMIDEC_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Boolean PNJDGPDNLJB(::APLEMBNFLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_PNJDGPDNLJB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* KNEMOJCEHNO()
		{
			return ((::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KNEMOJCEHNO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* JOFLNFPKNKC()
		{
			return ((::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_JOFLNFPKNKC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* get_VisibleMiddleOwnerStreamingBlocks()
		{
			return ((::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this);
		}

		::System::Void set_VisibleMiddleOwnerStreamingBlocks(::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this, a1);
		}

		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority KBEKBMDILFM()
		{
			return ((::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_KBEKBMDILFM_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionVisualState EMEOLDCNBLE()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_EMEOLDCNBLE_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionVisualState BECBKBJODCJ()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BECBKBJODCJ_OFFSET))(this);
		}

		::System::Int32 get_PreloadSourceDist()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GET_PRELOADSOURCEDIST_OFFSET))(this);
		}

		::System::Void set_PreloadSourceDist(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGDADKNPPOL_SET_PRELOADSOURCEDIST_OFFSET))(this, a1);
		}

		::System::Boolean get_InsidePreloadSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GET_INSIDEPRELOADSOURCE_OFFSET))(this);
		}

		::System::Void set_InsidePreloadSource(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDADKNPPOL_SET_INSIDEPRELOADSOURCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageRegionVisualState BIPBGBNMDFI()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_BIPBGBNMDFI_OFFSET))(this);
		}

		::System::Boolean CFNMPOPCCOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_CFNMPOPCCOG_OFFSET))(this);
		}

		::System::Void EBDCACMNFNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_EBDCACMNFNL_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionVisualState OLGJPNBGPCG()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDADKNPPOL_OLGJPNBGPCG_OFFSET))(this);
		}

		static ::RPG::GameCore::StageRegionVisualState ELDHJFNMAOD(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KGDADKNPPOL_ELDHJFNMAOD_OFFSET))(a1);
		}

		::System::Void LCCNKHCLIOG(::APLEMBNFLAA* a1, ::System::Collections::Generic::List_1<::KGDADKNPPOL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Collections::Generic::List_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_LCCNKHCLIOG_OFFSET))(this, a1, a2);
		}

		::System::Void GLNPFPHGKOM(::APLEMBNFLAA* a1, ::System::Collections::Generic::List_1<::KGDADKNPPOL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Collections::Generic::List_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + KGDADKNPPOL_GLNPFPHGKOM_OFFSET))(this, a1, a2);
		}

	};
