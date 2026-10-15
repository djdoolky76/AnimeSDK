#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/EJLKOFIFOBG.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFOAMOJGBFC;
class BEMLFGJGOKN;
class DMANKEBECAE;
class FDLKPAJIEGG;
class FICDBGIBEOA;
class GCCABICIFBN;
class GNAONAKKPDJ;
class HIJCLHOPOHK;
class HPCKCJDCNFM;
class ILILKFMOKEB;
class JLMJJOCGACJ;
class KMFBGLJHGLG;
class OFNKOEAHEIP;
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorldLevelGrid; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HPCKCJDCNFM_ACPEOMEANAE_OFFSET UNITYSDK_OFFSET(0x1CAF6550)
#define HPCKCJDCNFM_ADHIIMKLEFM_OFFSET UNITYSDK_OFFSET(0x1CAF5F40)
#define HPCKCJDCNFM_AHEFNINOKGB_OFFSET UNITYSDK_OFFSET(0x1CAF6E00)
#define HPCKCJDCNFM_AHFMMPIIDGK_OFFSET UNITYSDK_OFFSET(0x1CAF3F80)
#define HPCKCJDCNFM_AIFKBKMCKEM_OFFSET UNITYSDK_OFFSET(0x1CAF5550)
#define HPCKCJDCNFM_AJNACOBGNHH_OFFSET UNITYSDK_OFFSET(0x1CAF7240)
#define HPCKCJDCNFM_AKAGNDOPANP_OFFSET UNITYSDK_OFFSET(0x1CAF7400)
#define HPCKCJDCNFM_AKOKEOBCDBJ_OFFSET UNITYSDK_OFFSET(0x1CAF7350)
#define HPCKCJDCNFM_BBDCBKHMJGB_OFFSET UNITYSDK_OFFSET(0x1CAF7730)
#define HPCKCJDCNFM_BBFHDHGHFCC_OFFSET UNITYSDK_OFFSET(0x1CAF6630)
#define HPCKCJDCNFM_BHOBBEBMNJB_OFFSET UNITYSDK_OFFSET(0x1CAF41F0)
#define HPCKCJDCNFM_CCKJLHMKDBO_OFFSET UNITYSDK_OFFSET(0x1CAF6760)
#define HPCKCJDCNFM_CDFKFPDIMJJ_OFFSET UNITYSDK_OFFSET(0x1CAF72F0)
#define HPCKCJDCNFM_CFDBPGHKKFM_OFFSET UNITYSDK_OFFSET(0x1CAF50C0)
#define HPCKCJDCNFM_CGBBKHODECM_OFFSET UNITYSDK_OFFSET(0x1CAF4C30)
#define HPCKCJDCNFM_CNLIIKCAJHP_OFFSET UNITYSDK_OFFSET(0x1CAF5B30)
#define HPCKCJDCNFM_COMEODKCKPE_OFFSET UNITYSDK_OFFSET(0x1CAF7510)
#define HPCKCJDCNFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF7790)
#define HPCKCJDCNFM_DBANLIBDNMC_OFFSET UNITYSDK_OFFSET(0x1CAF49F0)
#define HPCKCJDCNFM_DGIKNEHDGLJ_OFFSET UNITYSDK_OFFSET(0x1CAF4C80)
#define HPCKCJDCNFM_DJKMIGFAMFK_OFFSET UNITYSDK_OFFSET(0x1CAF6A00)
#define HPCKCJDCNFM_DLNKHNACAFD_OFFSET UNITYSDK_OFFSET(0x1CAF6080)
#define HPCKCJDCNFM_EAIKJJAOIMM_OFFSET UNITYSDK_OFFSET(0x1CAF4A50)
#define HPCKCJDCNFM_EENDCHHGGHM_OFFSET UNITYSDK_OFFSET(0x1CAF6810)
#define HPCKCJDCNFM_EIEMBHPCMLE_OFFSET UNITYSDK_OFFSET(0x1CAF5A20)
#define HPCKCJDCNFM_EJKOKJFOBJC_OFFSET UNITYSDK_OFFSET(0x1CAF6030)
#define HPCKCJDCNFM_ENEPDALJEFA_OFFSET UNITYSDK_OFFSET(0x1CAF5070)
#define HPCKCJDCNFM_EODELBIPJBG_OFFSET UNITYSDK_OFFSET(0x1CAF4940)
#define HPCKCJDCNFM_EOPCMNCKBDH_OFFSET UNITYSDK_OFFSET(0x1CAF7620)
#define HPCKCJDCNFM_FBPJPDFCOBO_OFFSET UNITYSDK_OFFSET(0x1CAF6870)
#define HPCKCJDCNFM_FCGMLGEAPDK_OFFSET UNITYSDK_OFFSET(0x1CAF6CF0)
#define HPCKCJDCNFM_FHPBIGAJBHA_OFFSET UNITYSDK_OFFSET(0x1CAF6FC0)
#define HPCKCJDCNFM_FPCJBKKNCGM_OFFSET UNITYSDK_OFFSET(0x1CAF57C0)
#define HPCKCJDCNFM_GCGNGGMPEAP_OFFSET UNITYSDK_OFFSET(0x1CAF6190)
#define HPCKCJDCNFM_HCKEMNBIIDC_OFFSET UNITYSDK_OFFSET(0x1CAF6710)
#define HPCKCJDCNFM_HEHKIGELCCA_OFFSET UNITYSDK_OFFSET(0x1CAF4D30)
#define HPCKCJDCNFM_HMBLDHEGCEA_OFFSET UNITYSDK_OFFSET(0x1CAF7020)
#define HPCKCJDCNFM_HOCDKIJKCOO_OFFSET UNITYSDK_OFFSET(0x1CAF5CF0)
#define HPCKCJDCNFM_HOPDFKDPLDM_OFFSET UNITYSDK_OFFSET(0x1CAF59D0)
#define HPCKCJDCNFM_HPALLCGFEAB_OFFSET UNITYSDK_OFFSET(0x1CAF5450)
#define HPCKCJDCNFM_IHBNGLFFCCA_OFFSET UNITYSDK_OFFSET(0x1CAF4F00)
#define HPCKCJDCNFM_IHDAOMGELDE_OFFSET UNITYSDK_OFFSET(0x1CAF4030)
#define HPCKCJDCNFM_IHMNJECCJLA_OFFSET UNITYSDK_OFFSET(0x1CAF46D0)
#define HPCKCJDCNFM_IJMDKDJLEFO_OFFSET UNITYSDK_OFFSET(0x1CAF70D0)
#define HPCKCJDCNFM_IKNLOOFFGNK_OFFSET UNITYSDK_OFFSET(0x1CAF5D40)
#define HPCKCJDCNFM_ILEMNJHCNAJ_OFFSET UNITYSDK_OFFSET(0x1CAF7680)
#define HPCKCJDCNFM_INCGCFBOMLB_OFFSET UNITYSDK_OFFSET(0x1CAF7460)
#define HPCKCJDCNFM_IODCDIHFEPD_OFFSET UNITYSDK_OFFSET(0x1CAF4B40)
#define HPCKCJDCNFM_IOLGAKFNJFA_OFFSET UNITYSDK_OFFSET(0x1CAF6BE0)
#define HPCKCJDCNFM_JGMMIICLCGD_OFFSET UNITYSDK_OFFSET(0x1CAF44B0)
#define HPCKCJDCNFM_JIDEBOLDHGK_OFFSET UNITYSDK_OFFSET(0x1CAF4D90)
#define HPCKCJDCNFM_KBCKBMCBIOP_OFFSET UNITYSDK_OFFSET(0x1CAF7130)
#define HPCKCJDCNFM_KHAPJAEPLNP_OFFSET UNITYSDK_OFFSET(0x1CAF4090)
#define HPCKCJDCNFM_KPMMFEOHPMP_OFFSET UNITYSDK_OFFSET(0x1CAF71E0)
#define HPCKCJDCNFM_LCGCFFHGGNC_OFFSET UNITYSDK_OFFSET(0x1CAF54A0)
#define HPCKCJDCNFM_LGGAMMCFPKG_OFFSET UNITYSDK_OFFSET(0x1CAF5170)
#define HPCKCJDCNFM_LJJCJLAEPEJ_OFFSET UNITYSDK_OFFSET(0x1CAF5AD0)
#define HPCKCJDCNFM_LJLNLPMKIBN_OFFSET UNITYSDK_OFFSET(0x1CAF43A0)
#define HPCKCJDCNFM_MJJNKKMEMPA_OFFSET UNITYSDK_OFFSET(0x1CAF48F0)
#define HPCKCJDCNFM_MKINBEDJMAO_OFFSET UNITYSDK_OFFSET(0x1CAF51D0)
#define HPCKCJDCNFM_MODHKADHOFM_OFFSET UNITYSDK_OFFSET(0x1CAF64F0)
#define HPCKCJDCNFM_NBPAHHKKIGA_OFFSET UNITYSDK_OFFSET(0x1CAF6130)
#define HPCKCJDCNFM_NCLEJAPGOLP_OFFSET UNITYSDK_OFFSET(0x1CAF4450)
#define HPCKCJDCNFM_NDOGDDANMIE_OFFSET UNITYSDK_OFFSET(0x1CAF4350)
#define HPCKCJDCNFM_NHPGHNHDKNK_OFFSET UNITYSDK_OFFSET(0x1CAF6EB0)
#define HPCKCJDCNFM_NICJFFPEFGB_OFFSET UNITYSDK_OFFSET(0x1CAF5310)
#define HPCKCJDCNFM_NJMDILOAAFB_OFFSET UNITYSDK_OFFSET(0x1CAF62C0)
#define HPCKCJDCNFM_NLDLLLNICIF_OFFSET UNITYSDK_OFFSET(0x1CAF6C90)
#define HPCKCJDCNFM_NMJOPCPPNLH_OFFSET UNITYSDK_OFFSET(0x1CAF5E50)
#define HPCKCJDCNFM_NMKJFGPLPEJ_OFFSET UNITYSDK_OFFSET(0x1CAF6DA0)
#define HPCKCJDCNFM_NPHOKIBCJOH_OFFSET UNITYSDK_OFFSET(0x1CAF63F0)
#define HPCKCJDCNFM_ODNNMEKFEDP_OFFSET UNITYSDK_OFFSET(0x1CAF6F10)
#define HPCKCJDCNFM_OHOCBBEKFNJ_OFFSET UNITYSDK_OFFSET(0x1CAF7570)
#define HPCKCJDCNFM_OPPEMIHNBML_OFFSET UNITYSDK_OFFSET(0x1CAF6B90)
#define HPCKCJDCNFM_PBNGLOHJPLK_OFFSET UNITYSDK_OFFSET(0x1CAF5C10)
#define HPCKCJDCNFM_PBNPPJEMDKL_OFFSET UNITYSDK_OFFSET(0x1CAF6440)
#define HPCKCJDCNFM_PFMBDOPPHLB_OFFSET UNITYSDK_OFFSET(0x1CAF55B0)
#define HPCKCJDCNFM_POFOOCALOII_OFFSET UNITYSDK_OFFSET(0x1CAF5DF0)

inline static constexpr unsigned int HPCKCJDCNFM_TypeDefinitionIndex = 42626;

	class HPCKCJDCNFM : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CTOR_OFFSET))(this);
		}

		::GNAONAKKPDJ* AHFMMPIIDGK()
		{
			return ((::GNAONAKKPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AHFMMPIIDGK_OFFSET))(this);
		}

		::System::Boolean IHDAOMGELDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IHDAOMGELDE_OFFSET))(this);
		}

		::System::Void KHAPJAEPLNP(::UnityEngine::Vector3Int a1, ::HPCKCJDCNFM* a2, ::UnityEngine::Transform* a3, ::System::Nullable* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::HPCKCJDCNFM*, ::UnityEngine::Transform*, ::System::Nullable*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_KHAPJAEPLNP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BHOBBEBMNJB(::UnityEngine::Vector3Int a1, ::HPCKCJDCNFM* a2, ::UnityEngine::Transform* a3, ::System::Nullable* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::HPCKCJDCNFM*, ::UnityEngine::Transform*, ::System::Nullable*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_BHOBBEBMNJB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NDOGDDANMIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NDOGDDANMIE_OFFSET))(this);
		}

		::ILILKFMOKEB* LJLNLPMKIBN()
		{
			return ((::ILILKFMOKEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_LJLNLPMKIBN_OFFSET))(this);
		}

		::System::Boolean NCLEJAPGOLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NCLEJAPGOLP_OFFSET))(this);
		}

		::System::Void JGMMIICLCGD(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::DMANKEBECAE* a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::DMANKEBECAE*, ::System::Single))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_JGMMIICLCGD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void IHMNJECCJLA(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::DMANKEBECAE* a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::DMANKEBECAE*, ::System::Single))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IHMNJECCJLA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void MJJNKKMEMPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_MJJNKKMEMPA_OFFSET))(this);
		}

		::HIJCLHOPOHK* EODELBIPJBG()
		{
			return ((::HIJCLHOPOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EODELBIPJBG_OFFSET))(this);
		}

		::System::Boolean DBANLIBDNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_DBANLIBDNMC_OFFSET))(this);
		}

		::System::Void EAIKJJAOIMM(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EAIKJJAOIMM_OFFSET))(this, a1, a2);
		}

		::System::Void IODCDIHFEPD(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IODCDIHFEPD_OFFSET))(this, a1, a2);
		}

		::System::Void CGBBKHODECM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CGBBKHODECM_OFFSET))(this);
		}

		::FICDBGIBEOA* DGIKNEHDGLJ()
		{
			return ((::FICDBGIBEOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_DGIKNEHDGLJ_OFFSET))(this);
		}

		::System::Boolean HEHKIGELCCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HEHKIGELCCA_OFFSET))(this);
		}

		::System::Void JIDEBOLDHGK(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_JIDEBOLDHGK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IHBNGLFFCCA(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IHBNGLFFCCA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ENEPDALJEFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_ENEPDALJEFA_OFFSET))(this);
		}

		::OFNKOEAHEIP* CFDBPGHKKFM()
		{
			return ((::OFNKOEAHEIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CFDBPGHKKFM_OFFSET))(this);
		}

		::System::Boolean LGGAMMCFPKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_LGGAMMCFPKG_OFFSET))(this);
		}

		::System::Void MKINBEDJMAO(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_MKINBEDJMAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NICJFFPEFGB(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NICJFFPEFGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPALLCGFEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HPALLCGFEAB_OFFSET))(this);
		}

		::GCCABICIFBN* LCGCFFHGGNC()
		{
			return ((::GCCABICIFBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_LCGCFFHGGNC_OFFSET))(this);
		}

		::System::Boolean AIFKBKMCKEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AIFKBKMCKEM_OFFSET))(this);
		}

		::System::Void PFMBDOPPHLB(::AFOAMOJGBFC* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
		{
			return ((::System::Void(*)(::PVOID, ::AFOAMOJGBFC*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_PFMBDOPPHLB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void FPCJBKKNCGM(::AFOAMOJGBFC* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
		{
			return ((::System::Void(*)(::PVOID, ::AFOAMOJGBFC*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_FPCJBKKNCGM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HOPDFKDPLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HOPDFKDPLDM_OFFSET))(this);
		}

		::KMFBGLJHGLG* EIEMBHPCMLE()
		{
			return ((::KMFBGLJHGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EIEMBHPCMLE_OFFSET))(this);
		}

		::System::Boolean LJJCJLAEPEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_LJJCJLAEPEJ_OFFSET))(this);
		}

		::System::Void CNLIIKCAJHP(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CNLIIKCAJHP_OFFSET))(this, a1);
		}

		::System::Void PBNGLOHJPLK(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_PBNGLOHJPLK_OFFSET))(this, a1);
		}

		::System::Void HOCDKIJKCOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HOCDKIJKCOO_OFFSET))(this);
		}

		::FDLKPAJIEGG* IKNLOOFFGNK()
		{
			return ((::FDLKPAJIEGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IKNLOOFFGNK_OFFSET))(this);
		}

		::System::Boolean POFOOCALOII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_POFOOCALOII_OFFSET))(this);
		}

		::System::Void NMJOPCPPNLH(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NMJOPCPPNLH_OFFSET))(this, a1, a2);
		}

		::System::Void ADHIIMKLEFM(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_ADHIIMKLEFM_OFFSET))(this, a1, a2);
		}

		::System::Void EJKOKJFOBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EJKOKJFOBJC_OFFSET))(this);
		}

		::JLMJJOCGACJ* DLNKHNACAFD()
		{
			return ((::JLMJJOCGACJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_DLNKHNACAFD_OFFSET))(this);
		}

		::System::Boolean NBPAHHKKIGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NBPAHHKKIGA_OFFSET))(this);
		}

		::System::Void GCGNGGMPEAP(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_GCGNGGMPEAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NJMDILOAAFB(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NJMDILOAAFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPHOKIBCJOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NPHOKIBCJOH_OFFSET))(this);
		}

		::BEMLFGJGOKN* PBNPPJEMDKL()
		{
			return ((::BEMLFGJGOKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_PBNPPJEMDKL_OFFSET))(this);
		}

		::System::Boolean MODHKADHOFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_MODHKADHOFM_OFFSET))(this);
		}

		::System::Void ACPEOMEANAE(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_ACPEOMEANAE_OFFSET))(this, a1);
		}

		::System::Void BBFHDHGHFCC(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_BBFHDHGHFCC_OFFSET))(this, a1);
		}

		::System::Void HCKEMNBIIDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HCKEMNBIIDC_OFFSET))(this);
		}

		::AFOAMOJGBFC* CCKJLHMKDBO()
		{
			return ((::AFOAMOJGBFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CCKJLHMKDBO_OFFSET))(this);
		}

		::System::Boolean EENDCHHGGHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EENDCHHGGHM_OFFSET))(this);
		}

		::System::Void FBPJPDFCOBO(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::HPCKCJDCNFM*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::HPCKCJDCNFM*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_FBPJPDFCOBO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DJKMIGFAMFK(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::HPCKCJDCNFM*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::HPCKCJDCNFM*>*))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_DJKMIGFAMFK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OPPEMIHNBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_OPPEMIHNBML_OFFSET))(this);
		}

		::FICDBGIBEOA* IOLGAKFNJFA()
		{
			return ((::FICDBGIBEOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IOLGAKFNJFA_OFFSET))(this);
		}

		::System::Boolean NLDLLLNICIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NLDLLLNICIF_OFFSET))(this);
		}

		::OFNKOEAHEIP* FCGMLGEAPDK()
		{
			return ((::OFNKOEAHEIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_FCGMLGEAPDK_OFFSET))(this);
		}

		::System::Boolean NMKJFGPLPEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NMKJFGPLPEJ_OFFSET))(this);
		}

		::GNAONAKKPDJ* AHEFNINOKGB()
		{
			return ((::GNAONAKKPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AHEFNINOKGB_OFFSET))(this);
		}

		::System::Boolean NHPGHNHDKNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_NHPGHNHDKNK_OFFSET))(this);
		}

		::ILILKFMOKEB* ODNNMEKFEDP()
		{
			return ((::ILILKFMOKEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_ODNNMEKFEDP_OFFSET))(this);
		}

		::System::Boolean FHPBIGAJBHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_FHPBIGAJBHA_OFFSET))(this);
		}

		::GCCABICIFBN* HMBLDHEGCEA()
		{
			return ((::GCCABICIFBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_HMBLDHEGCEA_OFFSET))(this);
		}

		::System::Boolean IJMDKDJLEFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_IJMDKDJLEFO_OFFSET))(this);
		}

		::KMFBGLJHGLG* KBCKBMCBIOP()
		{
			return ((::KMFBGLJHGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_KBCKBMCBIOP_OFFSET))(this);
		}

		::System::Boolean KPMMFEOHPMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_KPMMFEOHPMP_OFFSET))(this);
		}

		::FDLKPAJIEGG* AJNACOBGNHH()
		{
			return ((::FDLKPAJIEGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AJNACOBGNHH_OFFSET))(this);
		}

		::System::Boolean CDFKFPDIMJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_CDFKFPDIMJJ_OFFSET))(this);
		}

		::JLMJJOCGACJ* AKOKEOBCDBJ()
		{
			return ((::JLMJJOCGACJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AKOKEOBCDBJ_OFFSET))(this);
		}

		::System::Boolean AKAGNDOPANP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_AKAGNDOPANP_OFFSET))(this);
		}

		::HIJCLHOPOHK* INCGCFBOMLB()
		{
			return ((::HIJCLHOPOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_INCGCFBOMLB_OFFSET))(this);
		}

		::System::Boolean COMEODKCKPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_COMEODKCKPE_OFFSET))(this);
		}

		::AFOAMOJGBFC* OHOCBBEKFNJ()
		{
			return ((::AFOAMOJGBFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_OHOCBBEKFNJ_OFFSET))(this);
		}

		::System::Boolean EOPCMNCKBDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_EOPCMNCKBDH_OFFSET))(this);
		}

		::BEMLFGJGOKN* ILEMNJHCNAJ()
		{
			return ((::BEMLFGJGOKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_ILEMNJHCNAJ_OFFSET))(this);
		}

		::System::Boolean BBDCBKHMJGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCJDCNFM_BBDCBKHMJGB_OFFSET))(this);
		}

	};
