#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersStageDifficultyType.h"
#include "unitysdk/System/Object.h"
class DFGLKHAAGJB;
class HIPNGPHHCJC;
class NNGPFFCBCFC;
class ODFEEOMGBIB;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client::TeamTowers { class TeamTowersBossData; }
namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }
namespace RPG::Client::TeamTowers { class TeamTowersLevelData; }
namespace RPG::Client::TeamTowers { class TeamTowersRobotData; }
namespace RPG::Client::TeamTowers { class TeamTowersStageData; }
namespace RPG::Client::TeamTowers { class TeamTowersStageGroupData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGGELBFHJIM_ANEEADJLDFM_OFFSET UNITYSDK_OFFSET(0x1BCA30D0)
#define LGGELBFHJIM_BBKBGPIKKNC_OFFSET UNITYSDK_OFFSET(0x1BCA4A30)
#define LGGELBFHJIM_BMKOPLEADCG_OFFSET UNITYSDK_OFFSET(0x1BCA4ED0)
#define LGGELBFHJIM_CABFJADEECK_OFFSET UNITYSDK_OFFSET(0x1BCA5020)
#define LGGELBFHJIM_CEJHDMAEHNG_OFFSET UNITYSDK_OFFSET(0x1BCA31C0)
#define LGGELBFHJIM_COLHJNFODBA_OFFSET UNITYSDK_OFFSET(0x1BCA35C0)
#define LGGELBFHJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA2910)
#define LGGELBFHJIM_DAPEPNHCJMB_OFFSET UNITYSDK_OFFSET(0x1BCA4530)
#define LGGELBFHJIM_DCFOPFLDKMM_OFFSET UNITYSDK_OFFSET(0x1BCA2CC0)
#define LGGELBFHJIM_DEDMAHENNDA_OFFSET UNITYSDK_OFFSET(0x1BCA3330)
#define LGGELBFHJIM_EIKFCJLBPFA_OFFSET UNITYSDK_OFFSET(0x1BCA40C0)
#define LGGELBFHJIM_EJLIFPDBHJD_OFFSET UNITYSDK_OFFSET(0x1BCA4270)
#define LGGELBFHJIM_ELNPEDFLBBJ_OFFSET UNITYSDK_OFFSET(0x1BCA51F0)
#define LGGELBFHJIM_FBBJALKBIAJ_OFFSET UNITYSDK_OFFSET(0x1BCA2C30)
#define LGGELBFHJIM_FEFCMGLCBNG_OFFSET UNITYSDK_OFFSET(0x1BCA37C0)
#define LGGELBFHJIM_FFPCCDFCJPB_OFFSET UNITYSDK_OFFSET(0x1BCA3250)
#define LGGELBFHJIM_FNKIFJKJJBG_OFFSET UNITYSDK_OFFSET(0x1BCA2DC0)
#define LGGELBFHJIM_GET_BOSSSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BCA5130)
#define LGGELBFHJIM_GET_CURDEPARTMENTDATA_OFFSET UNITYSDK_OFFSET(0x1BCA5150)
#define LGGELBFHJIM_GET_CURSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1BCA5190)
#define LGGELBFHJIM_GET_CURSTAGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1BCA5170)
#define LGGELBFHJIM_GET_DEPARTMENTDATALIST_OFFSET UNITYSDK_OFFSET(0x1BCA50D0)
#define LGGELBFHJIM_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x1BCA51B0)
#define LGGELBFHJIM_GET_PLAYERSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BCA50E0)
#define LGGELBFHJIM_GET_PVPMODEDATA_OFFSET UNITYSDK_OFFSET(0x1BCA51D0)
#define LGGELBFHJIM_GET_RESIDENTREWARDQUESTINFOS_OFFSET UNITYSDK_OFFSET(0x1BCA5100)
#define LGGELBFHJIM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1BCA51C0)
#define LGGELBFHJIM_GET_SUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1BCA50F0)
#define LGGELBFHJIM_GET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BCA5110)
#define LGGELBFHJIM_GJPCBFFLGDF_OFFSET UNITYSDK_OFFSET(0x1BCA4850)
#define LGGELBFHJIM_HDMNBHDFANG_OFFSET UNITYSDK_OFFSET(0x1BCA3430)
#define LGGELBFHJIM_JEIMALPOHCE_OFFSET UNITYSDK_OFFSET(0x1BCA4C70)
#define LGGELBFHJIM_LFECIKEGLOB_OFFSET UNITYSDK_OFFSET(0x1BCA3F40)
#define LGGELBFHJIM_MCBGFJLMOBM_OFFSET UNITYSDK_OFFSET(0x1BCA4D50)
#define LGGELBFHJIM_MLGOJGPLINM_OFFSET UNITYSDK_OFFSET(0x1BCA39D0)
#define LGGELBFHJIM_NHGPEIIANEG_OFFSET UNITYSDK_OFFSET(0x1BCA5290)
#define LGGELBFHJIM_OBMGOFBCGLM_OFFSET UNITYSDK_OFFSET(0x1BCA2E50)
#define LGGELBFHJIM_OKJCNFHAHDI_OFFSET UNITYSDK_OFFSET(0x1BCA4790)
#define LGGELBFHJIM_PEEDDIOOPDJ_OFFSET UNITYSDK_OFFSET(0x1BCA3AA0)
#define LGGELBFHJIM_PLFMHICGPCG_OFFSET UNITYSDK_OFFSET(0x1BCA2F70)
#define LGGELBFHJIM_SET_BOSSSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BCA5140)
#define LGGELBFHJIM_SET_CURDEPARTMENTDATA_OFFSET UNITYSDK_OFFSET(0x1BCA5160)
#define LGGELBFHJIM_SET_CURSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1BCA51A0)
#define LGGELBFHJIM_SET_CURSTAGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1BCA5180)
#define LGGELBFHJIM_SET_PVPMODEDATA_OFFSET UNITYSDK_OFFSET(0x1BCA51E0)
#define LGGELBFHJIM_SET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BCA5120)

inline static constexpr unsigned int LGGELBFHJIM_TypeDefinitionIndex = 81810;

	class LGGELBFHJIM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageData*>* IFNENKLJJML; // 0x18
		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* _PlayerSkillInfoList_k__BackingField; // 0x20
		::ODFEEOMGBIB* _PvpModeData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>* _DepartmentDataList_k__BackingField; // 0x30
		::NNGPFFCBCFC* _Settings_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersBossData*>* FDDEDGNJOJL; // 0x40
		::RPG::Client::TeamTowers::TeamTowersStageGroupData* _CurStageGroupData_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::HIPNGPHHCJC*>* _ResidentRewardQuestInfos_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*>* PFGLALLKDOF; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersRobotData*>* GFLODJLGLNM; // 0x60
		::RPG::Client::TeamTowers::TeamTowersDepartmentData* _CurDepartmentData_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersBossData*>* LFCOECHKGML; // 0x70
		::RPG::Client::TeamTowers::TeamTowersLevelData* _LevelData_k__BackingField; // 0x78
		::RPG::Client::TeamTowers::TeamTowersStageData* _CurStageData_k__BackingField; // 0x80
		::System::UInt32 BHMANHGHNNC; // 0x88
		::System::UInt32 _BossStageID_k__BackingField; // 0x8C
		::System::UInt32 _TutorialStageID_k__BackingField; // 0x90
		static ::System::UInt32* StaticGet_FNGKPJENBFP()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "LGGELBFHJIM")->GetStaticField(0x14320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_CTOR_OFFSET))(this);
		}

		::System::Boolean DCFOPFLDKMM(::System::UInt32 a1, ::RPG::Client::TeamTowers::TeamTowersStageData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_DCFOPFLDKMM_OFFSET))(this, a1, a2);
		}

		::System::Boolean OBMGOFBCGLM(::System::UInt32 a1, ::RPG::Client::TeamTowers::TeamTowersStageGroupData* a2, ::RPG::Client::TeamTowers::TeamTowersDepartmentData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_OBMGOFBCGLM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TeamTowers::TeamTowersDepartmentData* ANEEADJLDFM(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_ANEEADJLDFM_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageGroupData* CEJHDMAEHNG(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_CEJHDMAEHNG_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageGroupData* PLFMHICGPCG(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_PLFMHICGPCG_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageData* FNKIFJKJJBG(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_FNKIFJKJJBG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersStageGroupData*>* FFPCCDFCJPB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersStageGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_FFPCCDFCJPB_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersBossData* DEDMAHENNDA(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersBossData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_DEDMAHENNDA_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersRobotData* HDMNBHDFANG(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersRobotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_HDMNBHDFANG_OFFSET))(this, a1);
		}

		::System::Void FBBJALKBIAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_FBBJALKBIAJ_OFFSET))(this);
		}

		::System::Void COLHJNFODBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_COLHJNFODBA_OFFSET))(this);
		}

		::System::Void FEFCMGLCBNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_FEFCMGLCBNG_OFFSET))(this);
		}

		::System::Void MLGOJGPLINM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_MLGOJGPLINM_OFFSET))(this);
		}

		::System::Void PEEDDIOOPDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_PEEDDIOOPDJ_OFFSET))(this);
		}

		::System::Void LFECIKEGLOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_LFECIKEGLOB_OFFSET))(this);
		}

		::System::Void EIKFCJLBPFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_EIKFCJLBPFA_OFFSET))(this);
		}

		::System::Void EJLIFPDBHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_EJLIFPDBHJD_OFFSET))(this);
		}

		::System::Void DAPEPNHCJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_DAPEPNHCJMB_OFFSET))(this);
		}

		::System::Void OKJCNFHAHDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_OKJCNFHAHDI_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersDepartmentData* GJPCBFFLGDF(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GJPCBFFLGDF_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageGroupData* MCBGFJLMOBM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_MCBGFJLMOBM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamTowers::TeamTowersStageData* BBKBGPIKKNC(::System::UInt32 a1, ::System::Boolean a2, ::RPG::Client::TeamTowers::TeamTowersStageDifficultyType a3)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::TeamTowers::TeamTowersStageDifficultyType))((::PBYTE)hIl2Cpp + LGGELBFHJIM_BBKBGPIKKNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BMKOPLEADCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_BMKOPLEADCG_OFFSET))(this);
		}

		::System::Boolean CABFJADEECK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_CABFJADEECK_OFFSET))(this);
		}

		::System::UInt32 JEIMALPOHCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_JEIMALPOHCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>* get_DepartmentDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_DEPARTMENTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* get_PlayerSkillInfoList()
		{
			return ((::System::Collections::Generic::List_1<::DFGLKHAAGJB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_PLAYERSKILLINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SubMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_SUBMISSIONIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIPNGPHHCJC*>* get_ResidentRewardQuestInfos()
		{
			return ((::System::Collections::Generic::List_1<::HIPNGPHHCJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_RESIDENTREWARDQUESTINFOS_OFFSET))(this);
		}

		::System::UInt32 get_TutorialStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_TUTORIALSTAGEID_OFFSET))(this);
		}

		::System::Void set_TutorialStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_TUTORIALSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BossStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_BOSSSTAGEID_OFFSET))(this);
		}

		::System::Void set_BossStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_BOSSSTAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersDepartmentData* get_CurDepartmentData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_CURDEPARTMENTDATA_OFFSET))(this);
		}

		::System::Void set_CurDepartmentData(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_CURDEPARTMENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageGroupData* get_CurStageGroupData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_CURSTAGEGROUPDATA_OFFSET))(this);
		}

		::System::Void set_CurStageGroupData(::RPG::Client::TeamTowers::TeamTowersStageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_CURSTAGEGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageData* get_CurStageData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_CURSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_CurStageData(::RPG::Client::TeamTowers::TeamTowersStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_CURSTAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersLevelData* get_LevelData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_LEVELDATA_OFFSET))(this);
		}

		::NNGPFFCBCFC* get_Settings()
		{
			return ((::NNGPFFCBCFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_SETTINGS_OFFSET))(this);
		}

		::ODFEEOMGBIB* get_PvpModeData()
		{
			return ((::ODFEEOMGBIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_GET_PVPMODEDATA_OFFSET))(this);
		}

		::System::Void set_PvpModeData(::ODFEEOMGBIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODFEEOMGBIB*))((::PBYTE)hIl2Cpp + LGGELBFHJIM_SET_PVPMODEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityData* ELNPEDFLBBJ()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_ELNPEDFLBBJ_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* NHGPEIIANEG()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM_NHGPEIIANEG_OFFSET))(this);
		}

	};
