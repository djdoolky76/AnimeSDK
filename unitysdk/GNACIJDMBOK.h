#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJBIMMACKK_PlayerMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GNACIJDMBOK_DJGJDAODCOL.h"
class BABNOKHOBCF;
class CDENJKCGLIB;
class DNFFEFPKDPC;
class GAFMLDLBCEB;
class INMMPMDELKE;
class JAODHHPIKGJ;
class KIEGLMIFDHD;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAutoRotateStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMoveStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayer_1; }
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GNACIJDMBOK_ABCFKDDGAEA_OFFSET UNITYSDK_OFFSET(0x15AF1910)
#define GNACIJDMBOK_ACJFCMECFDP_OFFSET UNITYSDK_OFFSET(0x15AEC8E0)
#define GNACIJDMBOK_ACKCAKKBKDJ_OFFSET UNITYSDK_OFFSET(0x15AE7C40)
#define GNACIJDMBOK_AIEPBNEEJHP_OFFSET UNITYSDK_OFFSET(0x15AF1E00)
#define GNACIJDMBOK_AKCGBKEKFBM_OFFSET UNITYSDK_OFFSET(0x15AF33D0)
#define GNACIJDMBOK_AKCPOOFFEKB_OFFSET UNITYSDK_OFFSET(0x15AEEE80)
#define GNACIJDMBOK_ANFBJGMECBK_OFFSET UNITYSDK_OFFSET(0x15AE8230)
#define GNACIJDMBOK_BCMLDEGGNAJ_OFFSET UNITYSDK_OFFSET(0x15AF0FE0)
#define GNACIJDMBOK_BGNIEGDOFCO_OFFSET UNITYSDK_OFFSET(0x15AEB6F0)
#define GNACIJDMBOK_BJBAAAHNEDE_OFFSET UNITYSDK_OFFSET(0x15AE05E0)
#define GNACIJDMBOK_BJCEAIBPLGG_OFFSET UNITYSDK_OFFSET(0x15AE4470)
#define GNACIJDMBOK_BJFABIMMICA_OFFSET UNITYSDK_OFFSET(0x15AE2AD0)
#define GNACIJDMBOK_BKPMKKJJNOO_OFFSET UNITYSDK_OFFSET(0x15AE4D10)
#define GNACIJDMBOK_BMCLNPGFNDG_OFFSET UNITYSDK_OFFSET(0x15AE0740)
#define GNACIJDMBOK_BNNIBMGDMDB_OFFSET UNITYSDK_OFFSET(0x15AE70F0)
#define GNACIJDMBOK_CCGEPJNOOBP_OFFSET UNITYSDK_OFFSET(0x15AE6190)
#define GNACIJDMBOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AF3550)
#define GNACIJDMBOK_CDLGNGACDBO_OFFSET UNITYSDK_OFFSET(0x15AE75E0)
#define GNACIJDMBOK_CDMMGOOIEII_OFFSET UNITYSDK_OFFSET(0x15AE3170)
#define GNACIJDMBOK_CHJMCLDJBJK_OFFSET UNITYSDK_OFFSET(0x15AEE1E0)
#define GNACIJDMBOK_CIOMCKAKCDL_OFFSET UNITYSDK_OFFSET(0x15AEC560)
#define GNACIJDMBOK_CJNGCIEGKFN_OFFSET UNITYSDK_OFFSET(0x15AEF0C0)
#define GNACIJDMBOK_CNNMANEDCAM_OFFSET UNITYSDK_OFFSET(0x15AECA30)
#define GNACIJDMBOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADE760)
#define GNACIJDMBOK_DBBNOLFHGII_OFFSET UNITYSDK_OFFSET(0x15AEF460)
#define GNACIJDMBOK_DBHDFNJCBOP_OFFSET UNITYSDK_OFFSET(0x15AE60F0)
#define GNACIJDMBOK_DEGMLEAJOAA_OFFSET UNITYSDK_OFFSET(0x15AE7A30)
#define GNACIJDMBOK_DFDEJFPHGFM_OFFSET UNITYSDK_OFFSET(0x15AE6C30)
#define GNACIJDMBOK_DHOFFGGCNDI_1_OFFSET UNITYSDK_OFFSET(0x15AE94C0)
#define GNACIJDMBOK_DHOFFGGCNDI_OFFSET UNITYSDK_OFFSET(0x15AE8EC0)
#define GNACIJDMBOK_DMKAMJMOKNB_OFFSET UNITYSDK_OFFSET(0x15AE0270)
#define GNACIJDMBOK_DNNDELKJAHB_1_OFFSET UNITYSDK_OFFSET(0x15AF25C0)
#define GNACIJDMBOK_DNNDELKJAHB_OFFSET UNITYSDK_OFFSET(0x15AF2150)
#define GNACIJDMBOK_DPIJILFHPDO_OFFSET UNITYSDK_OFFSET(0x15AE78E0)
#define GNACIJDMBOK_EAGAGDLDFMJ_OFFSET UNITYSDK_OFFSET(0x15AE7D70)
#define GNACIJDMBOK_EAMOPFGOPFN_OFFSET UNITYSDK_OFFSET(0x15AF01A0)
#define GNACIJDMBOK_EHJJBFOMMHB_OFFSET UNITYSDK_OFFSET(0x15AF2030)
#define GNACIJDMBOK_EMIMOIBDMJF_OFFSET UNITYSDK_OFFSET(0x15AE9180)
#define GNACIJDMBOK_EOFILBLGAPB_OFFSET UNITYSDK_OFFSET(0x15AEC720)
#define GNACIJDMBOK_FEFLDBBACLJ_1_OFFSET UNITYSDK_OFFSET(0x15AE5480)
#define GNACIJDMBOK_FEFLDBBACLJ_OFFSET UNITYSDK_OFFSET(0x15AE1ED0)
#define GNACIJDMBOK_FGEGKMFNBMD_OFFSET UNITYSDK_OFFSET(0x15AF1DA0)
#define GNACIJDMBOK_FGFFGMLBAKK_OFFSET UNITYSDK_OFFSET(0x15AEF130)
#define GNACIJDMBOK_FMLICNNPHAE_OFFSET UNITYSDK_OFFSET(0x15AEFA70)
#define GNACIJDMBOK_FODBGDJCMOF_OFFSET UNITYSDK_OFFSET(0x15AEC330)
#define GNACIJDMBOK_FONDANAEKFB_1_OFFSET UNITYSDK_OFFSET(0x15AE2930)
#define GNACIJDMBOK_FONDANAEKFB_OFFSET UNITYSDK_OFFSET(0x15AE2880)
#define GNACIJDMBOK_FPAOENCBOAF_OFFSET UNITYSDK_OFFSET(0x15AE5370)
#define GNACIJDMBOK_FPOBOKIEAKJ_OFFSET UNITYSDK_OFFSET(0x15AF0240)
#define GNACIJDMBOK_GET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET UNITYSDK_OFFSET(0x15ADE740)
#define GNACIJDMBOK_GLEFPEDPDCF_OFFSET UNITYSDK_OFFSET(0x15AE67A0)
#define GNACIJDMBOK_GMDIECEOLPA_OFFSET UNITYSDK_OFFSET(0x15AF0F70)
#define GNACIJDMBOK_HCGBPAIDKFH_OFFSET UNITYSDK_OFFSET(0x15AEF670)
#define GNACIJDMBOK_HEGGAPODPDF_OFFSET UNITYSDK_OFFSET(0x15AE5FA0)
#define GNACIJDMBOK_HILHPDLABHM_OFFSET UNITYSDK_OFFSET(0x15AE46B0)
#define GNACIJDMBOK_HKHLFOBHBAM_OFFSET UNITYSDK_OFFSET(0x15AE30C0)
#define GNACIJDMBOK_HMJCBPNIOBF_OFFSET UNITYSDK_OFFSET(0x15AE2D00)
#define GNACIJDMBOK_HOGHDBAIDMK_1_OFFSET UNITYSDK_OFFSET(0x15AE2390)
#define GNACIJDMBOK_HOGHDBAIDMK_OFFSET UNITYSDK_OFFSET(0x15ADFA30)
#define GNACIJDMBOK_HPNBPAPBPJP_OFFSET UNITYSDK_OFFSET(0x15AF2BE0)
#define GNACIJDMBOK_IDPGOELOBGN_OFFSET UNITYSDK_OFFSET(0x15AF3090)
#define GNACIJDMBOK_IFKMCDEGPMB_OFFSET UNITYSDK_OFFSET(0x15AEF590)
#define GNACIJDMBOK_IFNONBJKOED_OFFSET UNITYSDK_OFFSET(0x15AE89C0)
#define GNACIJDMBOK_ILKJPAGJEIH_OFFSET UNITYSDK_OFFSET(0x15AF0680)
#define GNACIJDMBOK_ILLODJKLNBF_OFFSET UNITYSDK_OFFSET(0x15AEF8F0)
#define GNACIJDMBOK_IMCHIOPNMKD_OFFSET UNITYSDK_OFFSET(0x15AEFD40)
#define GNACIJDMBOK_INNGGAPNGDJ_OFFSET UNITYSDK_OFFSET(0x15AE4570)
#define GNACIJDMBOK_IOIKPGODEIH_OFFSET UNITYSDK_OFFSET(0x15AE3950)
#define GNACIJDMBOK_IPFEKMKMAGE_OFFSET UNITYSDK_OFFSET(0x15AE9AB0)
#define GNACIJDMBOK_JBLCNJGFPFM_OFFSET UNITYSDK_OFFSET(0x15AF1800)
#define GNACIJDMBOK_JDMABDKLCGK_OFFSET UNITYSDK_OFFSET(0x15AE7090)
#define GNACIJDMBOK_JFMCIKANMPL_OFFSET UNITYSDK_OFFSET(0x15AF3220)
#define GNACIJDMBOK_JICLMJOLJLM_OFFSET UNITYSDK_OFFSET(0x15ADFBE0)
#define GNACIJDMBOK_JJLBBGCMKLG_OFFSET UNITYSDK_OFFSET(0x15AEA360)
#define GNACIJDMBOK_JOPDJGIFLDL_OFFSET UNITYSDK_OFFSET(0x15AE3040)
#define GNACIJDMBOK_KAJFCNGKHAN_OFFSET UNITYSDK_OFFSET(0x15AF0F60)
#define GNACIJDMBOK_KBOGELPNPGM_OFFSET UNITYSDK_OFFSET(0x15AE3B80)
#define GNACIJDMBOK_KGOEOPGJCIN_OFFSET UNITYSDK_OFFSET(0x15AE34C0)
#define GNACIJDMBOK_KKBBPDGENKL_OFFSET UNITYSDK_OFFSET(0x15ADFF70)
#define GNACIJDMBOK_KMFKKHJJIHN_OFFSET UNITYSDK_OFFSET(0x15AEE710)
#define GNACIJDMBOK_KMGHHMNDFFB_OFFSET UNITYSDK_OFFSET(0x15AE7FC0)
#define GNACIJDMBOK_KNAMPDDNBDE_OFFSET UNITYSDK_OFFSET(0x15AF1300)
#define GNACIJDMBOK_KPKFDELPLDM_OFFSET UNITYSDK_OFFSET(0x15AEDF60)
#define GNACIJDMBOK_LCAOKIFPOKK_OFFSET UNITYSDK_OFFSET(0x15AF0D70)
#define GNACIJDMBOK_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x15AEC290)
#define GNACIJDMBOK_LFFFOCJEEDO_OFFSET UNITYSDK_OFFSET(0x15AE2F20)
#define GNACIJDMBOK_LNMOANDEHIA_1_OFFSET UNITYSDK_OFFSET(0x15AE8750)
#define GNACIJDMBOK_LNMOANDEHIA_OFFSET UNITYSDK_OFFSET(0x15AE85C0)
#define GNACIJDMBOK_LPLGBCBEBNN_OFFSET UNITYSDK_OFFSET(0x15AE72E0)
#define GNACIJDMBOK_LPMHIKOMLLH_OFFSET UNITYSDK_OFFSET(0x15AEEBC0)
#define GNACIJDMBOK_MEDMOJIBPJJ_OFFSET UNITYSDK_OFFSET(0x15AE1FB0)
#define GNACIJDMBOK_NDCOOJDEAMN_OFFSET UNITYSDK_OFFSET(0x15AE9A40)
#define GNACIJDMBOK_NDDJNODBMHI_OFFSET UNITYSDK_OFFSET(0x15AE2A50)
#define GNACIJDMBOK_NGEONGEMDEI_OFFSET UNITYSDK_OFFSET(0x15AE21C0)
#define GNACIJDMBOK_NNCDHNIJOJK_OFFSET UNITYSDK_OFFSET(0x15AE5790)
#define GNACIJDMBOK_NPMMBKBJHKG_OFFSET UNITYSDK_OFFSET(0x15AE5F00)
#define GNACIJDMBOK_OKMHEPDIAAH_OFFSET UNITYSDK_OFFSET(0x15AF1360)
#define GNACIJDMBOK_OPBCKFBCCAN_OFFSET UNITYSDK_OFFSET(0x15AEB660)
#define GNACIJDMBOK_PFIEHAPMHHM_OFFSET UNITYSDK_OFFSET(0x15AE36E0)
#define GNACIJDMBOK_PFKIBMJHNPK_OFFSET UNITYSDK_OFFSET(0x15ADEB20)
#define GNACIJDMBOK_PFPGOGCBLLF_OFFSET UNITYSDK_OFFSET(0x15AEEF60)
#define GNACIJDMBOK_PMJMKHDICGC_OFFSET UNITYSDK_OFFSET(0x15AE04C0)
#define GNACIJDMBOK_PPGFABDENKM_OFFSET UNITYSDK_OFFSET(0x15AF2A50)
#define GNACIJDMBOK_PPJHGAAIPDM_OFFSET UNITYSDK_OFFSET(0x15AEC630)
#define GNACIJDMBOK_SET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET UNITYSDK_OFFSET(0x15ADE750)

	class GNACIJDMBOK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* BECOMJDJBDF; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* KEAALNDDKMH; // 0x18
		::GAFMLDLBCEB* JAJOGJKHAJP; // 0x20
		::System::Collections::Generic::Dictionary_2<::DNFFEFPKDPC*, ::System::Object*>* IIOHBHBHMPG; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* OKOJMMBNPNL; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::Transform*>* NGCEDPAKDIF; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::GameObject*>* LLNHGBNNLIJ; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single>* IGBPDHIOGMM; // 0x48
		::MNCOPNHONHO* PDENFEFCAGN; // 0x50
		::BABNOKHOBCF* FKINCGODJEP; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* JDHAKIMLHLF; // 0x60
		::UnityEngine::Vector3 BCDGNDIBDPD; // 0x68
		::System::Int32 GODCHBLBDID; // 0x74
		::System::Boolean JAHICJOIIFJ; // 0x78
		::System::Boolean GHMOFEDKDGH; // 0x79
		::System::Boolean GHEPBNIHNKJ; // 0x7A
		::System::Boolean HBLMFCAPOLO; // 0x7B
		::System::Boolean _IsRoom2DBrickPositionFrozen_k__BackingField; // 0x7C
		::System::Boolean JLJJCHKMMEP; // 0x7D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 NJOMGIEKIMD; // 0x80
		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_ABCDOHFCAAL()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "GNACIJDMBOK")->GetStaticField(0x666F0);
		}

		static ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>** StaticGet_JEFABMFHDJI()
		{
			return (::System::Collections::Generic::List_1<::DNFFEFPKDPC*>**)UnitySDK::FromName("", "GNACIJDMBOK")->GetStaticField(0x666F8);
		}

		static ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>** StaticGet_IBBANLMKOKA()
		{
			return (::System::Collections::Generic::List_1<::DNFFEFPKDPC*>**)UnitySDK::FromName("", "GNACIJDMBOK")->GetStaticField(0x66700);
		}

		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2, ::GAFMLDLBCEB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*, ::GAFMLDLBCEB*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNACIJDMBOK_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsRoom2DBrickPositionFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_GET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET))(this);
		}

		::System::Void set_IsRoom2DBrickPositionFrozen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_SET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET))(this, a1);
		}

		::System::Void PFKIBMJHNPK(::KIEGLMIFDHD* a1, ::UnityEngine::GameObject* a2, ::INMMPMDELKE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KIEGLMIFDHD*, ::UnityEngine::GameObject*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PFKIBMJHNPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMCLNPGFNDG(::KIEGLMIFDHD* a1, ::INMMPMDELKE* a2, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KIEGLMIFDHD*, ::INMMPMDELKE*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BMCLNPGFNDG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJBAAAHNEDE(::KIEGLMIFDHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIEGLMIFDHD*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BJBAAAHNEDE_OFFSET))(this, a1);
		}

		::DNFFEFPKDPC* KKBBPDGENKL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::INMMPMDELKE* a3)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KKBBPDGENKL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MEDMOJIBPJJ(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_MEDMOJIBPJJ_OFFSET))(this, a1);
		}

		::INMMPMDELKE* JICLMJOLJLM(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView* a1, ::INMMPMDELKE* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView*, ::INMMPMDELKE*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JICLMJOLJLM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::INMMPMDELKE* HOGHDBAIDMK(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a1, ::INMMPMDELKE* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::INMMPMDELKE*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HOGHDBAIDMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HOGHDBAIDMK_1(::INMMPMDELKE* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::DNFFEFPKDPC*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HOGHDBAIDMK_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean FONDANAEKFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FONDANAEKFB_OFFSET))(this, a1);
		}

		::System::Boolean FONDANAEKFB_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FONDANAEKFB_1_OFFSET))(this, a1);
		}

		::System::Boolean NDDJNODBMHI(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_NDDJNODBMHI_OFFSET))(this, a1);
		}

		::System::Boolean LFFFOCJEEDO(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LFFFOCJEEDO_OFFSET))(this, a1);
		}

		::System::Boolean JOPDJGIFLDL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JOPDJGIFLDL_OFFSET))(this, a1);
		}

		::System::Boolean HKHLFOBHBAM(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HKHLFOBHBAM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord CDMMGOOIEII(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CDMMGOOIEII_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HMJCBPNIOBF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HMJCBPNIOBF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::DNFFEFPKDPC*>* KGOEOPGJCIN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KGOEOPGJCIN_OFFSET))(this, a1, a2);
		}

		::System::Boolean PFIEHAPMHHM(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PFIEHAPMHHM_OFFSET))(this, a1, a2);
		}

		::System::Boolean BJFABIMMICA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BJFABIMMICA_OFFSET))(this, a1);
		}

		::System::Boolean IOIKPGODEIH(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IOIKPGODEIH_OFFSET))(this, a1, a2);
		}

		::System::Void KBOGELPNPGM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KBOGELPNPGM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Single BJCEAIBPLGG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BJCEAIBPLGG_OFFSET))(this);
		}

		::System::Single INNGGAPNGDJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_INNGGAPNGDJ_OFFSET))(this);
		}

		::System::Single HILHPDLABHM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HILHPDLABHM_OFFSET))(this, a1, a2);
		}

		::System::Single BKPMKKJJNOO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BKPMKKJJNOO_OFFSET))(this, a1, a2);
		}

		::DNFFEFPKDPC* FEFLDBBACLJ(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::INMMPMDELKE* a3)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FEFLDBBACLJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FEFLDBBACLJ_1(::DNFFEFPKDPC* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FEFLDBBACLJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void NGEONGEMDEI(::DNFFEFPKDPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_NGEONGEMDEI_OFFSET))(this, a1);
		}

		::DNFFEFPKDPC* NPMMBKBJHKG(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::INMMPMDELKE* a2)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_NPMMBKBJHKG_OFFSET))(this, a1, a2);
		}

		::DNFFEFPKDPC* DBHDFNJCBOP(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::INMMPMDELKE* a2)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DBHDFNJCBOP_OFFSET))(this, a1, a2);
		}

		::System::Void CCGEPJNOOBP(::DNFFEFPKDPC* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CCGEPJNOOBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNCDHNIJOJK(::DNFFEFPKDPC* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_NNCDHNIJOJK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFDEJFPHGFM(::DNFFEFPKDPC* a1, ::DNFFEFPKDPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DFDEJFPHGFM_OFFSET))(this, a1, a2);
		}

		::System::Void CDLGNGACDBO(::DNFFEFPKDPC* a1, ::DNFFEFPKDPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CDLGNGACDBO_OFFSET))(this, a1, a2);
		}

		static ::System::Void JDMABDKLCGK(::DNFFEFPKDPC* a1, ::DNFFEFPKDPC* a2)
		{
			return ((::System::Void(*)(::DNFFEFPKDPC*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JDMABDKLCGK_OFFSET))(a1, a2);
		}

		::System::Void LPLGBCBEBNN(::DNFFEFPKDPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LPLGBCBEBNN_OFFSET))(this, a1);
		}

		::System::Void BNNIBMGDMDB(::DNFFEFPKDPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BNNIBMGDMDB_OFFSET))(this, a1);
		}

		::System::Void PMJMKHDICGC(::DNFFEFPKDPC* a1, ::DNFFEFPKDPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PMJMKHDICGC_OFFSET))(this, a1, a2);
		}

		::DNFFEFPKDPC* HEGGAPODPDF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a3, ::INMMPMDELKE* a4)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HEGGAPODPDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::DNFFEFPKDPC* DPIJILFHPDO(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::INMMPMDELKE* a2)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DPIJILFHPDO_OFFSET))(this, a1, a2);
		}

		::DNFFEFPKDPC* FPAOENCBOAF(::KIEGLMIFDHD* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2, ::System::Boolean a3, ::INMMPMDELKE* a4)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::KIEGLMIFDHD*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FPAOENCBOAF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DEGMLEAJOAA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DEGMLEAJOAA_OFFSET))(this, a1);
		}

		::DNFFEFPKDPC* ACKCAKKBKDJ(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::CDENJKCGLIB* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* a7)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::CDENJKCGLIB*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ACKCAKKBKDJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Nullable* EAGAGDLDFMJ(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* a5)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_EAGAGDLDFMJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DNFFEFPKDPC* KMGHHMNDFFB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Int32 a3, ::INMMPMDELKE* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* a8)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Int32, ::INMMPMDELKE*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KMGHHMNDFFB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean ANFBJGMECBK(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::PAJBIMMACKK_PlayerMoveState a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::PAJBIMMACKK_PlayerMoveState, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ANFBJGMECBK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LNMOANDEHIA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LNMOANDEHIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNMOANDEHIA_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::DNFFEFPKDPC* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::DNFFEFPKDPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LNMOANDEHIA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IFNONBJKOED(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::INMMPMDELKE* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::INMMPMDELKE*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IFNONBJKOED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean DHOFFGGCNDI(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::INMMPMDELKE* a2, ::System::Boolean a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::INMMPMDELKE*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DHOFFGGCNDI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean DHOFFGGCNDI_1(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::INMMPMDELKE* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Collections::Generic::ISet_1<::System::String*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DHOFFGGCNDI_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::DNFFEFPKDPC* IPFEKMKMAGE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Collections::Generic::ISet_1<::System::String*>* a3, ::INMMPMDELKE* a4)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Collections::Generic::ISet_1<::System::String*>*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IPFEKMKMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EMIMOIBDMJF(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::INMMPMDELKE* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Boolean a4, ::System::Collections::Generic::ISet_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_EMIMOIBDMJF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JJLBBGCMKLG(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Object* a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* a9, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a10, ::System::Boolean a11)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>*, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JJLBBGCMKLG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean BGNIEGDOFCO(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Object* a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BGNIEGDOFCO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Single FODBGDJCMOF(::DNFFEFPKDPC* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::DNFFEFPKDPC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FODBGDJCMOF_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCJMKJPECAP(::DNFFEFPKDPC* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LCJMKJPECAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CIOMCKAKCDL(::DNFFEFPKDPC* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CIOMCKAKCDL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OPBCKFBCCAN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::DNFFEFPKDPC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_OPBCKFBCCAN_OFFSET))(this, a1, a2);
		}

		::System::Boolean EOFILBLGAPB(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_EOFILBLGAPB_OFFSET))(this, a1);
		}

		::System::Void ACJFCMECFDP(::System::Collections::Generic::List_1<::DNFFEFPKDPC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ACJFCMECFDP_OFFSET))(this, a1);
		}

		::DNFFEFPKDPC* CNNMANEDCAM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::Boolean a10)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CNNMANEDCAM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void KPKFDELPLDM(::DNFFEFPKDPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KPKFDELPLDM_OFFSET))(this, a1);
		}

		::System::Boolean CHJMCLDJBJK(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CHJMCLDJBJK_OFFSET))(this, a1);
		}

		::System::Boolean KMFKKHJJIHN(::JAODHHPIKGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KMFKKHJJIHN_OFFSET))(this, a1);
		}

		::System::Void LPMHIKOMLLH(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LPMHIKOMLLH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* AKCPOOFFEKB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_AKCPOOFFEKB_OFFSET))(this, a1);
		}

		::System::Single PFPGOGCBLLF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PFPGOGCBLLF_OFFSET))(this, a1, a2);
		}

		::System::Int32 CJNGCIEGKFN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_CJNGCIEGKFN_OFFSET))(this);
		}

		::System::Void FGFFGMLBAKK(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FGFFGMLBAKK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord DBBNOLFHGII(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DBBNOLFHGII_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* IFKMCDEGPMB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IFKMCDEGPMB_OFFSET))(this, a1);
		}

		::System::Boolean HCGBPAIDKFH(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HCGBPAIDKFH_OFFSET))(this, a1, a2);
		}

		::System::Boolean ILLODJKLNBF(::INMMPMDELKE* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ILLODJKLNBF_OFFSET))(this, a1, a2);
		}

		::System::Boolean FMLICNNPHAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FMLICNNPHAE_OFFSET))(this);
		}

		::System::Void IMCHIOPNMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IMCHIOPNMKD_OFFSET))(this);
		}

		::System::Void EAMOPFGOPFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_EAMOPFGOPFN_OFFSET))(this);
		}

		::System::Void DMKAMJMOKNB(::DNFFEFPKDPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DMKAMJMOKNB_OFFSET))(this, a1);
		}

		::System::Void FPOBOKIEAKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FPOBOKIEAKJ_OFFSET))(this);
		}

		::System::Void ILKJPAGJEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ILKJPAGJEIH_OFFSET))(this);
		}

		::System::Void LCAOKIFPOKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_LCAOKIFPOKK_OFFSET))(this);
		}

		::System::Boolean KAJFCNGKHAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KAJFCNGKHAN_OFFSET))(this);
		}

		::System::Void GMDIECEOLPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_GMDIECEOLPA_OFFSET))(this);
		}

		::System::Void BCMLDEGGNAJ(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_BCMLDEGGNAJ_OFFSET))(this, a1, a2);
		}

		::System::Void OKMHEPDIAAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_OKMHEPDIAAH_OFFSET))(this, a1);
		}

		::System::Boolean JBLCNJGFPFM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JBLCNJGFPFM_OFFSET))(this, a1);
		}

		::System::Void FGEGKMFNBMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACIJDMBOK_FGEGKMFNBMD_OFFSET))(this);
		}

		::System::Void AIEPBNEEJHP(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_AIEPBNEEJHP_OFFSET))(this, a1, a2);
		}

		::System::Void EHJJBFOMMHB(::DNFFEFPKDPC* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_EHJJBFOMMHB_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean KNAMPDDNBDE(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_KNAMPDDNBDE_OFFSET))(a1);
		}

		::System::Void ABCFKDDGAEA(::GNACIJDMBOK_DJGJDAODCOL a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNACIJDMBOK_DJGJDAODCOL))((::PBYTE)hIl2Cpp + GNACIJDMBOK_ABCFKDDGAEA_OFFSET))(this, a1);
		}

		::System::Void DNNDELKJAHB(::INMMPMDELKE* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DNNDELKJAHB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DNNDELKJAHB_1(::INMMPMDELKE* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_DNNDELKJAHB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean PPGFABDENKM(::INMMPMDELKE* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Object*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PPGFABDENKM_OFFSET))(this, a1, a2);
		}

		::System::Void HPNBPAPBPJP(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNACIJDMBOK_HPNBPAPBPJP_OFFSET))(this, a1, a2);
		}

		static ::System::String* NDCOOJDEAMN(::DNFFEFPKDPC* a1)
		{
			return ((::System::String*(*)(::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_NDCOOJDEAMN_OFFSET))(a1);
		}

		::System::Void GLEFPEDPDCF(::DNFFEFPKDPC* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>* a3, ::System::Boolean a4, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a5, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a6, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a7)
		{
			return ((::System::Void(*)(::PVOID, ::DNFFEFPKDPC*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_GLEFPEDPDCF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean PPJHGAAIPDM(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_PPJHGAAIPDM_OFFSET))(this, a1);
		}

		::System::Boolean AKCGBKEKFBM(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_AKCGBKEKFBM_OFFSET))(this, a1);
		}

		::System::Void JFMCIKANMPL(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + GNACIJDMBOK_JFMCIKANMPL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IDPGOELOBGN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::DNFFEFPKDPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::DNFFEFPKDPC*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + GNACIJDMBOK_IDPGOELOBGN_OFFSET))(this, a1, a2, a3);
		}

	};
