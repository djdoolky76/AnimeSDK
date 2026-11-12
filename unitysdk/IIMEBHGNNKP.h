#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/RPG/Client/Prop/RuntimeCameraMode.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/LensSettings.h"
class ICHIBONPBBD;
class IIMEBHGNNKP_DCLPJCGDKFG;
class IIMEBHGNNKP_HIEPBDHAPIE;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class TrackExtensionMonoPlugin; }
namespace RPG::Client::Prop { class RollerCoasterMoveSettings; }
namespace RPG::Client::Prop { class RollerCoasterMoveSettings_SpeedLineEffectParams; }
namespace RPG::Client::Prop { class RollerCoasterPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RollerCoasterCameraConfig; }
namespace RPG::GameCore { class RollerCoasterFixCamera; }
namespace RPG::GameCore { class RollerCoasterFollowCamera; }
namespace RPG::GameCore { class RollerCoasterMainCamera; }
namespace RPG::GameCore { class SpeedLineEffect; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_CameraPointSample; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_EventPoint; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IIMEBHGNNKP_AALNPDPHCEA_OFFSET UNITYSDK_OFFSET(0x1740DBF0)
#define IIMEBHGNNKP_ABJBGCBPGPG_OFFSET UNITYSDK_OFFSET(0x1740A6C0)
#define IIMEBHGNNKP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1740D810)
#define IIMEBHGNNKP_ACCLJENIHJK_OFFSET UNITYSDK_OFFSET(0x17410640)
#define IIMEBHGNNKP_ADDOGDIAAIF_OFFSET UNITYSDK_OFFSET(0x174165C0)
#define IIMEBHGNNKP_ADD_EVENTPOINTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x174167E0)
#define IIMEBHGNNKP_ADD_MOVEMENTFINISHED_OFFSET UNITYSDK_OFFSET(0x17416700)
#define IIMEBHGNNKP_ADJGCCLBFLH_OFFSET UNITYSDK_OFFSET(0x1740C950)
#define IIMEBHGNNKP_AENHKPKAGEA_OFFSET UNITYSDK_OFFSET(0x1740D5A0)
#define IIMEBHGNNKP_AFDKDPDEACA_OFFSET UNITYSDK_OFFSET(0x174107E0)
#define IIMEBHGNNKP_AFGOKALHLAA_OFFSET UNITYSDK_OFFSET(0x1740D3D0)
#define IIMEBHGNNKP_AKFBFFEGCKL_OFFSET UNITYSDK_OFFSET(0x17414820)
#define IIMEBHGNNKP_ALNIMOLFFMD_OFFSET UNITYSDK_OFFSET(0x17413630)
#define IIMEBHGNNKP_AMNKAELAEOE_OFFSET UNITYSDK_OFFSET(0x17413560)
#define IIMEBHGNNKP_APAHEGJAEPH_OFFSET UNITYSDK_OFFSET(0x1740B740)
#define IIMEBHGNNKP_APBMKOBINKI_OFFSET UNITYSDK_OFFSET(0x17414730)
#define IIMEBHGNNKP_BCMHOAGKBIA_OFFSET UNITYSDK_OFFSET(0x1740BB90)
#define IIMEBHGNNKP_BENKDDCHCNP_OFFSET UNITYSDK_OFFSET(0x174108F0)
#define IIMEBHGNNKP_BGALKODPKKK_OFFSET UNITYSDK_OFFSET(0x1740D8F0)
#define IIMEBHGNNKP_BIDCDMPBJIN_OFFSET UNITYSDK_OFFSET(0x174165D0)
#define IIMEBHGNNKP_BJHEHKEIPFK_OFFSET UNITYSDK_OFFSET(0x1740C050)
#define IIMEBHGNNKP_BJJHOFCDKFI_OFFSET UNITYSDK_OFFSET(0x174103E0)
#define IIMEBHGNNKP_BMCPJLFPPIO_OFFSET UNITYSDK_OFFSET(0x17415F50)
#define IIMEBHGNNKP_BMNKDCHEHDE_OFFSET UNITYSDK_OFFSET(0x1740F080)
#define IIMEBHGNNKP_BOBNJFKAJDC_OFFSET UNITYSDK_OFFSET(0x17414630)
#define IIMEBHGNNKP_CAMBDKGODOG_OFFSET UNITYSDK_OFFSET(0x17416690)
#define IIMEBHGNNKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x174168E0)
#define IIMEBHGNNKP_CFLOBLJHJHN_OFFSET UNITYSDK_OFFSET(0x174120E0)
#define IIMEBHGNNKP_CFMNFMHAKKL_OFFSET UNITYSDK_OFFSET(0x17416560)
#define IIMEBHGNNKP_CLAHMIJGMCO_OFFSET UNITYSDK_OFFSET(0x1740B530)
#define IIMEBHGNNKP_CTOR_OFFSET UNITYSDK_OFFSET(0x17408A60)
#define IIMEBHGNNKP_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x17408C10)
#define IIMEBHGNNKP_DDEFDCHMJHE_OFFSET UNITYSDK_OFFSET(0x1740FB50)
#define IIMEBHGNNKP_DDEKLDPPJFL_OFFSET UNITYSDK_OFFSET(0x174123B0)
#define IIMEBHGNNKP_DGEDILFIKIA_OFFSET UNITYSDK_OFFSET(0x174133E0)
#define IIMEBHGNNKP_DILHAFPKGEK_OFFSET UNITYSDK_OFFSET(0x1740C8E0)
#define IIMEBHGNNKP_DJIABLDKJLE_OFFSET UNITYSDK_OFFSET(0x174165E0)
#define IIMEBHGNNKP_DLBOPJBAEGE_OFFSET UNITYSDK_OFFSET(0x1740CDC0)
#define IIMEBHGNNKP_DMDHKAAENDK_OFFSET UNITYSDK_OFFSET(0x17409AA0)
#define IIMEBHGNNKP_DNBODHOIFAP_OFFSET UNITYSDK_OFFSET(0x1740D680)
#define IIMEBHGNNKP_EBLDDOAJNCF_OFFSET UNITYSDK_OFFSET(0x1740D260)
#define IIMEBHGNNKP_EFEKINHMCGO_OFFSET UNITYSDK_OFFSET(0x17413840)
#define IIMEBHGNNKP_EFKKFKOLPJC_OFFSET UNITYSDK_OFFSET(0x174099F0)
#define IIMEBHGNNKP_EHKJJOJDLEK_OFFSET UNITYSDK_OFFSET(0x17410F20)
#define IIMEBHGNNKP_EHNFCAAKOEK_OFFSET UNITYSDK_OFFSET(0x1740AA30)
#define IIMEBHGNNKP_EHPHNLMCNJO_OFFSET UNITYSDK_OFFSET(0x17409550)
#define IIMEBHGNNKP_EIFAANJJNGF_OFFSET UNITYSDK_OFFSET(0x1740F890)
#define IIMEBHGNNKP_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0x17416530)
#define IIMEBHGNNKP_EKLNHNKGKCO_OFFSET UNITYSDK_OFFSET(0x17416660)
#define IIMEBHGNNKP_ELPOMBFHJIC_OFFSET UNITYSDK_OFFSET(0x1740DF10)
#define IIMEBHGNNKP_ENDEGDCMACK_OFFSET UNITYSDK_OFFSET(0x1740A3A0)
#define IIMEBHGNNKP_EOJBIGKMPCK_OFFSET UNITYSDK_OFFSET(0x174137B0)
#define IIMEBHGNNKP_EOKKJABIGGC_OFFSET UNITYSDK_OFFSET(0x174162C0)
#define IIMEBHGNNKP_FAAGDCHBNKL_OFFSET UNITYSDK_OFFSET(0x1740F510)
#define IIMEBHGNNKP_FKPJBIBNFAL_OFFSET UNITYSDK_OFFSET(0x1740FFA0)
#define IIMEBHGNNKP_GCGKEDPNEME_OFFSET UNITYSDK_OFFSET(0x17416650)
#define IIMEBHGNNKP_GDEOPCEIJKP_OFFSET UNITYSDK_OFFSET(0x1740BFC0)
#define IIMEBHGNNKP_GHBKJPPIKBH_OFFSET UNITYSDK_OFFSET(0x17416550)
#define IIMEBHGNNKP_GIIENIANHKO_OFFSET UNITYSDK_OFFSET(0x17415A40)
#define IIMEBHGNNKP_GJFKJMFBCHB_OFFSET UNITYSDK_OFFSET(0x17412980)
#define IIMEBHGNNKP_GJNMGDLIIGJ_OFFSET UNITYSDK_OFFSET(0x174160E0)
#define IIMEBHGNNKP_GOOPHBIKEFI_OFFSET UNITYSDK_OFFSET(0x1740CFB0)
#define IIMEBHGNNKP_HCIPPHIJLIG_OFFSET UNITYSDK_OFFSET(0x1740D750)
#define IIMEBHGNNKP_HDCCIPCDPOG_OFFSET UNITYSDK_OFFSET(0x1740FD10)
#define IIMEBHGNNKP_HMHECNEMOCE_OFFSET UNITYSDK_OFFSET(0x17414D80)
#define IIMEBHGNNKP_HNBAGANJGFM_OFFSET UNITYSDK_OFFSET(0x1740C9D0)
#define IIMEBHGNNKP_IDMIBKMOFOO_OFFSET UNITYSDK_OFFSET(0x17410870)
#define IIMEBHGNNKP_IFGIIKEDIEO_OFFSET UNITYSDK_OFFSET(0x17412570)
#define IIMEBHGNNKP_IHEGIELNLIO_OFFSET UNITYSDK_OFFSET(0x17412B70)
#define IIMEBHGNNKP_ILEIBNCJGMI_OFFSET UNITYSDK_OFFSET(0x174104E0)
#define IIMEBHGNNKP_IMHMBPPHFOJ_OFFSET UNITYSDK_OFFSET(0x17408FB0)
#define IIMEBHGNNKP_IMMPDALFDKJ_OFFSET UNITYSDK_OFFSET(0x17411E10)
#define IIMEBHGNNKP_IOHGFPGHGJJ_OFFSET UNITYSDK_OFFSET(0x1740DAD0)
#define IIMEBHGNNKP_JBGAJLLDHOI_OFFSET UNITYSDK_OFFSET(0x17413F10)
#define IIMEBHGNNKP_JBMFPECBMIG_OFFSET UNITYSDK_OFFSET(0x17411C10)
#define IIMEBHGNNKP_JCKLOEAAPPN_OFFSET UNITYSDK_OFFSET(0x1740B960)
#define IIMEBHGNNKP_JCOKBPDCLGB_OFFSET UNITYSDK_OFFSET(0x17409C60)
#define IIMEBHGNNKP_JGPICAALOJG_OFFSET UNITYSDK_OFFSET(0x1740A310)
#define IIMEBHGNNKP_JHGCHAILNKJ_OFFSET UNITYSDK_OFFSET(0x17410C00)
#define IIMEBHGNNKP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1740C110)
#define IIMEBHGNNKP_JNNHPHBLIMC_OFFSET UNITYSDK_OFFSET(0x17416680)
#define IIMEBHGNNKP_KABBCCGPOCJ_OFFSET UNITYSDK_OFFSET(0x1740BF70)
#define IIMEBHGNNKP_KCGJLAGKBOG_OFFSET UNITYSDK_OFFSET(0x174163F0)
#define IIMEBHGNNKP_KEEOCFBHHNC_OFFSET UNITYSDK_OFFSET(0x1740B4B0)
#define IIMEBHGNNKP_KHBEOFPCJNF_OFFSET UNITYSDK_OFFSET(0x17409FD0)
#define IIMEBHGNNKP_KIOJGKPJFGG_OFFSET UNITYSDK_OFFSET(0x1740F3C0)
#define IIMEBHGNNKP_KLDPPKIKCKN_OFFSET UNITYSDK_OFFSET(0x17412E80)
#define IIMEBHGNNKP_LBNBOHLLCHA_OFFSET UNITYSDK_OFFSET(0x17416490)
#define IIMEBHGNNKP_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x17416520)
#define IIMEBHGNNKP_LIGHCMLMAGP_OFFSET UNITYSDK_OFFSET(0x1740EFD0)
#define IIMEBHGNNKP_LJFLCNEEDFP_OFFSET UNITYSDK_OFFSET(0x1740D140)
#define IIMEBHGNNKP_LLCODMBIAMM_OFFSET UNITYSDK_OFFSET(0x174106F0)
#define IIMEBHGNNKP_MANLHDNJNMB_OFFSET UNITYSDK_OFFSET(0x17416540)
#define IIMEBHGNNKP_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0x17416480)
#define IIMEBHGNNKP_MJKNGPJBBMB_OFFSET UNITYSDK_OFFSET(0x17414380)
#define IIMEBHGNNKP_MKHKLKGPMGI_OFFSET UNITYSDK_OFFSET(0x1740C690)
#define IIMEBHGNNKP_MLPLNHHHCNN_OFFSET UNITYSDK_OFFSET(0x17409620)
#define IIMEBHGNNKP_MNHEFIFHBLK_OFFSET UNITYSDK_OFFSET(0x1740B810)
#define IIMEBHGNNKP_MODOIPMJGNG_OFFSET UNITYSDK_OFFSET(0x17416070)
#define IIMEBHGNNKP_MOMJMHMGFKI_OFFSET UNITYSDK_OFFSET(0x1740CB90)
#define IIMEBHGNNKP_NABLBGAKNED_OFFSET UNITYSDK_OFFSET(0x17408F30)
#define IIMEBHGNNKP_NBIDCAIMNKL_OFFSET UNITYSDK_OFFSET(0x1740D550)
#define IIMEBHGNNKP_NDJBEHEJDIP_OFFSET UNITYSDK_OFFSET(0x1740E090)
#define IIMEBHGNNKP_NDNDAFFBJMC_OFFSET UNITYSDK_OFFSET(0x174111E0)
#define IIMEBHGNNKP_NFBMENHCFEH_OFFSET UNITYSDK_OFFSET(0x1740A2B0)
#define IIMEBHGNNKP_NFLLJGDHBOG_OFFSET UNITYSDK_OFFSET(0x17416670)
#define IIMEBHGNNKP_NGAKKICEBPC_OFFSET UNITYSDK_OFFSET(0x17413AC0)
#define IIMEBHGNNKP_NGEAAJPJHJM_OFFSET UNITYSDK_OFFSET(0x17411900)
#define IIMEBHGNNKP_NJNHJLBNMLL_OFFSET UNITYSDK_OFFSET(0x17411BA0)
#define IIMEBHGNNKP_NMFHIEDPMGJ_OFFSET UNITYSDK_OFFSET(0x1740F130)
#define IIMEBHGNNKP_NMPLDIHPAJG_OFFSET UNITYSDK_OFFSET(0x17412AE0)
#define IIMEBHGNNKP_NOOAKDELHBI_OFFSET UNITYSDK_OFFSET(0x174130A0)
#define IIMEBHGNNKP_OBOHLCENGHN_OFFSET UNITYSDK_OFFSET(0x17409480)
#define IIMEBHGNNKP_ODAAMLIMHCD_OFFSET UNITYSDK_OFFSET(0x17414EE0)
#define IIMEBHGNNKP_PFAEOFPMLOE_OFFSET UNITYSDK_OFFSET(0x1740ED10)
#define IIMEBHGNNKP_PGFNNOLFFNA_OFFSET UNITYSDK_OFFSET(0x1740E1E0)
#define IIMEBHGNNKP_PGIAPDDEACB_OFFSET UNITYSDK_OFFSET(0x17416220)
#define IIMEBHGNNKP_PIIKOLEGLNK_OFFSET UNITYSDK_OFFSET(0x17415E50)
#define IIMEBHGNNKP_PJDMFCOOCMO_OFFSET UNITYSDK_OFFSET(0x17412740)
#define IIMEBHGNNKP_PJHFJEAJBOM_OFFSET UNITYSDK_OFFSET(0x1740B9B0)
#define IIMEBHGNNKP_PLOEBDELPDN_OFFSET UNITYSDK_OFFSET(0x1740BAA0)
#define IIMEBHGNNKP_REMOVE_EVENTPOINTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x17416860)
#define IIMEBHGNNKP_REMOVE_MOVEMENTFINISHED_OFFSET UNITYSDK_OFFSET(0x17416770)

inline static constexpr unsigned int IIMEBHGNNKP_TypeDefinitionIndex = 81541;

	class IIMEBHGNNKP : public ::System::Object
	{
	public:
		::RPGTools::RoadGenerator::TrackSamplePointDetector* DIEHNFOLMNF; // 0x10
		::IIMEBHGNNKP_DCLPJCGDKFG* DPFAKDCBJMI; // 0x18
		::Cinemachine::CinemachineVirtualCamera* HJMDCMCJIGI; // 0x20
		::RPG::Client::TrackExtensionMonoPlugin* KJNDFPNBFPJ; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::TransformComponent*>* NFIJNLPNCGH; // 0x30
		::UnityEngine::Transform* DDPFMBAFKLK; // 0x38
		::System::Action_1<::System::Object*>* EventPointTriggered; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* FLMFOHLKMAP; // 0x48
		::IIMEBHGNNKP_HIEPBDHAPIE* KKIOPDPFNFH; // 0x50
		::BansheeGz::BGSpline::Curve::BGCurve* IIFJBPKPEBN; // 0x58
		::RPG::GameCore::SpeedLineEffect* BICPFIMOFOM; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* GBIBDGOIOED; // 0x68
		::Il2CppArray<::ICHIBONPBBD*>* GCJDIJIHKHF; // 0x70
		::RPG::Client::Prop::RollerCoasterMoveSettings* PJMIDIFDEDA; // 0x78
		::System::Action* MovementFinished; // 0x80
		::BansheeGz::BGSpline::Components::BGCcMath* IMNIPBLMMCH; // 0x88
		::ICHIBONPBBD* DMBMOHJLNEN; // 0x90
		::RPG::GameCore::RollerCoasterCameraConfig* GGBGBANPMFG; // 0x98
		::System::String* KMFNKAKICKF; // 0xA0
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0xA8
		::RPG::Client::Prop::RollerCoasterPuzzleBoard* MIPPNCGOJNM; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::Int32>* CPAMHPLPOKG; // 0xB8
		::UnityEngine::Transform* NECEELPIOEI; // 0xC0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MJCBGOJJNAA; // 0xC8
		::System::Single KHJEBDJEGKJ; // 0xD0
		::System::Single BINPBMJJKMN; // 0xD4
		::System::Single LIBFKGPNBPG; // 0xD8
		::RPG::Client::Prop::RuntimeCameraMode PEGGCOIAJPN; // 0xDC
		::RPG::MVector3 JLHJGGHLJKD; // 0xE0
		::UnityEngine::Vector3 JHAOHAMGKEL; // 0xEC
		::System::Single MJNCIJMIAGK; // 0xF8
		::UnityEngine::Quaternion IHCFNODCCEL; // 0xFC
		::System::Single LJBKILGNJCF; // 0x10C
		::System::Int32 AJLHLDLJKFK; // 0x110
		::System::Single BFPNBEBACHB; // 0x114
		::System::Boolean DLGFMPNEHGO; // 0x118
		::System::Boolean JAIFGEJPIAB; // 0x119
		::System::Byte _padding0[0x2];
		::RPG::MVector3 NBOBHPDNDIM; // 0x11C
		::System::Single POICFGEOFEF; // 0x128
		::System::Boolean LKFHHFDLNFK; // 0x12C
		::System::Boolean OMHABMPMBIA; // 0x12D
		::System::Boolean EGGNNPNDIDD; // 0x12E
		::System::Boolean OHICMONBIAO; // 0x12F
		::UnityEngine::Quaternion OJPNGKCIMGB; // 0x130
		::System::Single LOMKNEONBHF; // 0x140
		::System::Single BEDKMHKNANI; // 0x144
		::UnityEngine::Vector3 EKAPJLFFPKJ; // 0x148
		::System::Single MDGNKNPMHEB; // 0x154
		::System::Single LGHDGHIIGDF; // 0x158
		::System::Int32 OPEEELKGFGO; // 0x15C
		::System::Single LMCBEIHGLDF; // 0x160
		::System::Single JJNJHKFHMKM; // 0x164
		::System::Single BNCIBMJOPMO; // 0x168
		::System::Boolean KGIMDMCFCBD; // 0x16C
		::System::Boolean BEDMJENMIFK; // 0x16D
		::System::Boolean HAGNEDOLMLJ; // 0x16E
		::System::Boolean BOPBIJELOME; // 0x16F
		static ::System::String** StaticGet_EACNKNOGMOC()
		{
			return (::System::String**)UnitySDK::FromName("", "IIMEBHGNNKP")->GetStaticField(0x68120);
		}

		static ::System::String** StaticGet_OKMNNNDALOG()
		{
			return (::System::String**)UnitySDK::FromName("", "IIMEBHGNNKP")->GetStaticField(0x68128);
		}

		static ::System::Int32* StaticGet_OLONCCGAICG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IIMEBHGNNKP")->GetStaticField(0x14E90);
		}

		static ::System::Int32* StaticGet_AAKBOPEGPGP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IIMEBHGNNKP")->GetStaticField(0x14E94);
		}

		// static const ::System::Object JPLOANNPNKN; // 0x0
		// static const ::System::Object EBGHJIOGMNE; // 0x0
		// static const ::System::Object ABBIFCEAOIO; // 0x0
		// static const ::System::String* LLGMGJOGHBC; // 0x0
		// static const ::System::String* IKJHCLOJHDE; // 0x0
		// static const ::System::Object OFDJKLHMEBJ; // 0x0
		// static const ::System::Object JEPGMEADMMA; // 0x0
		// static const ::System::Object FDKCNLIMLBO; // 0x0
		// static const ::System::String* KBMLFJJDDEC; // 0x0
		// static const ::System::String* BPHKPBLMNDG; // 0x0
		::System::Void _ctor(::RPG::Client::Prop::RollerCoasterMoveSettings* a1, ::RPG::Client::Prop::RollerCoasterPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RollerCoasterMoveSettings*, ::RPG::Client::Prop::RollerCoasterPuzzleBoard*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CCTOR_OFFSET))();
		}

		::System::Void DAMDMJJKLON(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DAMDMJJKLON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EFKKFKOLPJC(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EFKKFKOLPJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMDHKAAENDK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DMDHKAAENDK_OFFSET))(this, a1);
		}

		::System::Void JCOKBPDCLGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JCOKBPDCLGB_OFFSET))(this);
		}

		::System::Void MNHEFIFHBLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MNHEFIFHBLK_OFFSET))(this);
		}

		::System::Void KABBCCGPOCJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KABBCCGPOCJ_OFFSET))(this, a1);
		}

		::System::Void GDEOPCEIJKP(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GDEOPCEIJKP_OFFSET))(this, a1);
		}

		::System::Void BJHEHKEIPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BJHEHKEIPFK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NBIDCAIMNKL(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NBIDCAIMNKL_OFFSET))(this, a1);
		}

		::System::Void AENHKPKAGEA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AENHKPKAGEA_OFFSET))(this, a1);
		}

		::System::Void DNBODHOIFAP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DNBODHOIFAP_OFFSET))(this, a1);
		}

		::System::Void HCIPPHIJLIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_HCIPPHIJLIG_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ABKBOGIGAEH_OFFSET))(this);
		}

		static ::System::Single NABLBGAKNED(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NABLBGAKNED_OFFSET))(a1);
		}

		::System::Void IMHMBPPHFOJ(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IMHMBPPHFOJ_OFFSET))(this, a1);
		}

		::System::Void ADJGCCLBFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ADJGCCLBFLH_OFFSET))(this);
		}

		::System::Void OBOHLCENGHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_OBOHLCENGHN_OFFSET))(this);
		}

		::System::Void MOMJMHMGFKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MOMJMHMGFKI_OFFSET))(this, a1);
		}

		::System::Void EHNFCAAKOEK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EHNFCAAKOEK_OFFSET))(this, a1);
		}

		::System::Void PGFNNOLFFNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PGFNNOLFFNA_OFFSET))(this);
		}

		::UnityEngine::Vector3 PFAEOFPMLOE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PFAEOFPMLOE_OFFSET))(this);
		}

		::System::Boolean NMFHIEDPMGJ(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NMFHIEDPMGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single DDEFDCHMJHE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DDEFDCHMJHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FAAGDCHBNKL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_FAAGDCHBNKL_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 EIFAANJJNGF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EIFAANJJNGF_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void AALNPDPHCEA(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AALNPDPHCEA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KIOJGKPJFGG(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KIOJGKPJFGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ELPOMBFHJIC(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ELPOMBFHJIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDJBEHEJDIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NDJBEHEJDIP_OFFSET))(this, a1);
		}

		::System::Single FKPJBIBNFAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_FKPJBIBNFAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BJJHOFCDKFI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BJJHOFCDKFI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DILHAFPKGEK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DILHAFPKGEK_OFFSET))(this);
		}

		::UnityEngine::Vector3 ILEIBNCJGMI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ILEIBNCJGMI_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 HDCCIPCDPOG(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_HDCCIPCDPOG_OFFSET))(a1);
		}

		::System::Void KHBEOFPCJNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KHBEOFPCJNF_OFFSET))(this);
		}

		::System::Void EHPHNLMCNJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EHPHNLMCNJO_OFFSET))(this);
		}

		::System::Void MLPLNHHHCNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MLPLNHHHCNN_OFFSET))(this);
		}

		::System::Void ACCLJENIHJK(::ICHIBONPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICHIBONPBBD*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ACCLJENIHJK_OFFSET))(this, a1);
		}

		::System::Void PJHFJEAJBOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PJHFJEAJBOM_OFFSET))(this);
		}

		::System::Void BGALKODPKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BGALKODPKKK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Cinemachine::CinemachineTransposer*>* LLCODMBIAMM()
		{
			return ((::System::Collections::Generic::List_1<::Cinemachine::CinemachineTransposer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_LLCODMBIAMM_OFFSET))(this);
		}

		::System::Void CLAHMIJGMCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CLAHMIJGMCO_OFFSET))(this);
		}

		::System::Void HNBAGANJGFM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_HNBAGANJGFM_OFFSET))(this, a1, a2);
		}

		::System::Void ABJBGCBPGPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ABJBGCBPGPG_OFFSET))(this);
		}

		::System::Single EHKJJOJDLEK(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EHKJJOJDLEK_OFFSET))(this, a1, a2);
		}

		static ::System::Single NDNDAFFBJMC(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NDNDAFFBJMC_OFFSET))(a1, a2, a3);
		}

		::System::Void BENKDDCHCNP(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BENKDDCHCNP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JHGCHAILNKJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JHGCHAILNKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGEAAJPJHJM(::System::Int32 a1, ::RPGTools::RoadGenerator::TrackSamplePointDetector_CameraPointSample* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::RoadGenerator::TrackSamplePointDetector_CameraPointSample*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NGEAAJPJHJM_OFFSET))(this, a1, a2);
		}

		::System::Void APAHEGJAEPH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_APAHEGJAEPH_OFFSET))(this, a1, a2);
		}

		::System::Void IMMPDALFDKJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IMMPDALFDKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFLOBLJHJHN(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CFLOBLJHJHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDEKLDPPJFL(::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DDEKLDPPJFL_OFFSET))(this, a1);
		}

		::System::Boolean PJDMFCOOCMO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PJDMFCOOCMO_OFFSET))(this, a1);
		}

		::System::Boolean NMPLDIHPAJG(::RPG::GameCore::RollerCoasterMainCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RollerCoasterMainCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NMPLDIHPAJG_OFFSET))(this, a1);
		}

		::System::Boolean DGEDILFIKIA(::RPG::GameCore::VCameraBlendType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DGEDILFIKIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IHEGIELNLIO(::System::String* a1, ::RPG::GameCore::RollerCoasterFollowCamera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::RollerCoasterFollowCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IHEGIELNLIO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KLDPPKIKCKN(::System::String* a1, ::RPG::GameCore::RollerCoasterFixCamera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KLDPPKIKCKN_OFFSET))(this, a1, a2);
		}

		::System::Boolean MJKNGPJBBMB(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::RollerCoasterFixCamera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MJKNGPJBBMB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NGAKKICEBPC(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::RollerCoasterFixCamera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NGAKKICEBPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JBGAJLLDHOI(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::RollerCoasterFixCamera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JBGAJLLDHOI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean APBMKOBINKI(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_APBMKOBINKI_OFFSET))(this, a1);
		}

		::System::Boolean NOOAKDELHBI(::RPG::GameCore::RollerCoasterMainCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RollerCoasterMainCamera*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NOOAKDELHBI_OFFSET))(this, a1);
		}

		::System::Void EBLDDOAJNCF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EBLDDOAJNCF_OFFSET))(this, a1);
		}

		::System::Void JGPICAALOJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JGPICAALOJG_OFFSET))(this);
		}

		::System::Boolean AKFBFFEGCKL(::System::Single a1, ::UnityEngine::Quaternion a2, ::Cinemachine::LensSettings a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AKFBFFEGCKL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ODAAMLIMHCD(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ODAAMLIMHCD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HMHECNEMOCE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_HMHECNEMOCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GIIENIANHKO(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GIIENIANHKO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EFEKINHMCGO(::RPG::GameCore::RollerCoasterFixCamera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RollerCoasterFixCamera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EFEKINHMCGO_OFFSET))(this, a1, a2, a3);
		}

		::ICHIBONPBBD* EOJBIGKMPCK()
		{
			return ((::ICHIBONPBBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EOJBIGKMPCK_OFFSET))(this);
		}

		::System::Boolean NJNHJLBNMLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NJNHJLBNMLL_OFFSET))(this);
		}

		::System::Void IFGIIKEDIEO(::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IFGIIKEDIEO_OFFSET))(this, a1);
		}

		::System::Void KEEOCFBHHNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KEEOCFBHHNC_OFFSET))(this);
		}

		::System::Void ALNIMOLFFMD(::ICHIBONPBBD* a1, ::RPG::Client::Prop::RuntimeCameraMode a2, ::Cinemachine::CinemachineBlendDefinition_Style a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::ICHIBONPBBD*, ::RPG::Client::Prop::RuntimeCameraMode, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ALNIMOLFFMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LJFLCNEEDFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_LJFLCNEEDFP_OFFSET))(this);
		}

		::System::Void JCKLOEAAPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JCKLOEAAPPN_OFFSET))(this);
		}

		static ::Cinemachine::CinemachineBlendDefinition_Style AMNKAELAEOE(::RPG::GameCore::VCameraBlendType a1, ::System::Single a2)
		{
			return ((::Cinemachine::CinemachineBlendDefinition_Style(*)(::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AMNKAELAEOE_OFFSET))(a1, a2);
		}

		static ::Cinemachine::CinemachineBrain* BOBNJFKAJDC()
		{
			return ((::Cinemachine::CinemachineBrain*(*)())((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BOBNJFKAJDC_OFFSET))();
		}

		::System::Void JBMFPECBMIG(::Cinemachine::CinemachineTransposer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTransposer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JBMFPECBMIG_OFFSET))(this, a1, a2);
		}

		::System::Void DLBOPJBAEGE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DLBOPJBAEGE_OFFSET))(this, a1);
		}

		::System::Void PLOEBDELPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PLOEBDELPDN_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* BMCPJLFPPIO()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BMCPJLFPPIO_OFFSET))(this);
		}

		::System::Void GJFKJMFBCHB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GJFKJMFBCHB_OFFSET))(this, a1, a2);
		}

		::System::Void GOOPHBIKEFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GOOPHBIKEFI_OFFSET))(this, a1);
		}

		::System::Void PIIKOLEGLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PIIKOLEGLNK_OFFSET))(this);
		}

		static ::System::Void MODOIPMJGNG(::Cinemachine::CinemachineVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MODOIPMJGNG_OFFSET))(a1, a2);
		}

		::System::Void AFGOKALHLAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AFGOKALHLAA_OFFSET))(this);
		}

		::System::Void BCMHOAGKBIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BCMHOAGKBIA_OFFSET))(this, a1);
		}

		static ::System::Void GJNMGDLIIGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GJNMGDLIIGJ_OFFSET))(a1);
		}

		::System::Void PGIAPDDEACB(::RPG::Client::Prop::RollerCoasterMoveSettings_SpeedLineEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RollerCoasterMoveSettings_SpeedLineEffectParams*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_PGIAPDDEACB_OFFSET))(this, a1);
		}

		::System::Void ENDEGDCMACK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ENDEGDCMACK_OFFSET))(this);
		}

		::System::Void EOKKJABIGGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EOKKJABIGGC_OFFSET))(this);
		}

		::System::Boolean MKHKLKGPMGI(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MKHKLKGPMGI_OFFSET))(this, a1);
		}

		::System::Void KCGJLAGKBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_KCGJLAGKBOG_OFFSET))(this);
		}

		static ::UnityEngine::Transform* IOHGFPGHGJJ(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IOHGFPGHGJJ_OFFSET))(a1, a2);
		}

		::System::Single MHHABONOGGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MHHABONOGGA_OFFSET))(this);
		}

		::System::Void LBNBOHLLCHA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_LBNBOHLLCHA_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean EJACOFEBELP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EJACOFEBELP_OFFSET))(this);
		}

		::System::Boolean MANLHDNJNMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_MANLHDNJNMB_OFFSET))(this);
		}

		::System::Boolean GHBKJPPIKBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GHBKJPPIKBH_OFFSET))(this);
		}

		::UnityEngine::GameObject* CFMNFMHAKKL()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CFMNFMHAKKL_OFFSET))(this);
		}

		::System::Single ADDOGDIAAIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ADDOGDIAAIF_OFFSET))(this);
		}

		::System::Single BIDCDMPBJIN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BIDCDMPBJIN_OFFSET))(this);
		}

		::System::Single DJIABLDKJLE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_DJIABLDKJLE_OFFSET))(this);
		}

		::System::Single GCGKEDPNEME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GCGKEDPNEME_OFFSET))(this);
		}

		::System::Single EKLNHNKGKCO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_EKLNHNKGKCO_OFFSET))(this);
		}

		::System::Single NFLLJGDHBOG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NFLLJGDHBOG_OFFSET))(this);
		}

		::System::Single JNNHPHBLIMC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_JNNHPHBLIMC_OFFSET))(this);
		}

		::System::Boolean NFBMENHCFEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_NFBMENHCFEH_OFFSET))(this);
		}

		::System::Single CAMBDKGODOG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_CAMBDKGODOG_OFFSET))(this);
		}

		::System::Single LIGHCMLMAGP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_LIGHCMLMAGP_OFFSET))(this);
		}

		::System::Single BMNKDCHEHDE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_BMNKDCHEHDE_OFFSET))(this);
		}

		::UnityEngine::Vector3 IDMIBKMOFOO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_IDMIBKMOFOO_OFFSET))(this);
		}

		::UnityEngine::Vector3 AFDKDPDEACA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_AFDKDPDEACA_OFFSET))(this);
		}

		::System::Void add_MovementFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ADD_MOVEMENTFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_MovementFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_REMOVE_MOVEMENTFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_EventPointTriggered(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_ADD_EVENTPOINTTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void remove_EventPointTriggered(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_REMOVE_EVENTPOINTTRIGGERED_OFFSET))(this, a1);
		}

	};
