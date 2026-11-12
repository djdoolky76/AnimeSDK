#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSTANTS_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA97610)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS_CTOR_OFFSET UNITYSDK_OFFSET(0xDA97600)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET UNITYSDK_OFFSET(0xDA973C0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET UNITYSDK_OFFSET(0xDA96B30)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEDICT_OFFSET UNITYSDK_OFFSET(0xDA96C00)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET UNITYSDK_OFFSET(0xDA968F0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUESTRING_OFFSET UNITYSDK_OFFSET(0xDA96780)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xDA96830)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET UNITYSDK_OFFSET(0xDA96F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConstants_TypeDefinitionIndex = 66409;

	class GridFightConstants : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_AhaRoleIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA770);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_SevenPriceRoleIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA778);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA780);
		}

		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>** StaticGet_CraftCostEquipCategories()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA788);
		}

		static ::System::String** StaticGet_AhaGrowthSavedValueKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA790);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>** StaticGet__SeasonUpdateDescSwitch()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA798);
		}

		static ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>** StaticGet_HandBookAvatarPropertyTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7A0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TanTaoAffixIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7A8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GridFight_EquipType_Attack()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7B0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_EquipAtlasBanList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7B8);
		}

		static ::System::String** StaticGet_SeasonNameTextID()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7C0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowSubTraitNameTraitList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7C8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowEffectRoleIDsInEnhance()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7D0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GridFight_EquipType_Support()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7D8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GuideLevels()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7E0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TutorialSpecialStageIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xA7E8);
		}

		static ::System::Boolean* StaticGet_IsShowSeasonTimeOverHint()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1070);
		}

		static ::System::Boolean* StaticGet_IsShowSeasonUpdatedNotice()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1071);
		}

		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1074);
		}

		static ::System::UInt32* StaticGet_CoinItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1078);
		}

		static ::System::UInt32* StaticGet_MaxRoleStar()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x107C);
		}

		static ::System::UInt32* StaticGet_MaxRoleEquipCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1080);
		}

		static ::System::UInt32* StaticGet_MaxBackMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1084);
		}

		static ::System::UInt32* StaticGet_TrialRoleWorldLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1088);
		}

		static ::System::UInt32* StaticGet_ExtraSeasonExpMax()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x108C);
		}

		static ::System::UInt32* StaticGet_NewBieDivisionLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1090);
		}

		static ::System::UInt32* StaticGet_IsDoubleSeasonExp()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1094);
		}

		static ::System::UInt32* StaticGet_RelicItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1098);
		}

		static ::System::UInt32* StaticGet_MainPageUnlockId()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x109C);
		}

		static ::System::UInt32* StaticGet_MaxBenchMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10A0);
		}

		static ::System::UInt32* StaticGet_CyreneSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10A4);
		}

		static ::System::UInt32* StaticGet_PropMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10A8);
		}

		static ::System::UInt32* StaticGet_DraftRoleStar()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10AC);
		}

		static ::System::UInt32* StaticGet_FormationDescLengthLimit()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10B0);
		}

		static ::System::UInt32* StaticGet_OpenOrbWaitMs()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10B4);
		}

		static ::System::UInt32* StaticGet_FeiYingRoleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10B8);
		}

		static ::System::UInt32* StaticGet_S2DanHengPTID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10BC);
		}

		static ::System::UInt32* StaticGet_MaxBoardMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10C0);
		}

		static ::System::UInt32* StaticGet_ElationSpecialOrbID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10C4);
		}

		static ::System::UInt32* StaticGet_PamKingID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10C8);
		}

		static ::System::UInt32* StaticGet_S2DanHengILID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10CC);
		}

		static ::System::UInt32* StaticGet_GalaxyRangersLeaderID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10D0);
		}

		static ::System::UInt32* StaticGet_FormationEditRoleDragAngle()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10D4);
		}

		static ::System::UInt32* StaticGet_AhaAvatarID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10D8);
		}

		static ::System::UInt32* StaticGet_MaxMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10DC);
		}

		static ::System::UInt32* StaticGet_MaxFrontMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10E0);
		}

		static ::System::UInt32* StaticGet_FormationEditEquipDragAngle()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10E4);
		}

		static ::System::UInt32* StaticGet_MaxOverCrowdCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10E8);
		}

		static ::System::UInt32* StaticGet_TraitEffectUnlockLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10EC);
		}

		static ::System::UInt32* StaticGet_FormationSlotNum()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10F0);
		}

		static ::System::UInt32* StaticGet_ShowSpecialFrontBackTypeTraitID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10F4);
		}

		static ::System::UInt32* StaticGet_TanTaoLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10F8);
		}

		static ::System::UInt32* StaticGet_FormationTitleLengthLimit()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x10FC);
		}

		static ::System::UInt32* StaticGet_WorkaholicChimeraID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1100);
		}

		static ::System::UInt32* StaticGet_SpotLightDifficultyThreshold()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1104);
		}

		static ::System::UInt32* StaticGet_OverChargeModeUnlockQuestID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1108);
		}

		static ::System::UInt32* StaticGet_GridFightContentID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x110C);
		}

		static ::System::Single* StaticGet_ExtraSeasonExpRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1110);
		}

		static ::System::UInt32* StaticGet_NewSeasonLockModuleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1114);
		}

		static ::System::UInt32* StaticGet_GridStartIndex()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1118);
		}

		static ::System::UInt32* StaticGet_DivisionLevelUpMaxValuePerGame()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x111C);
		}

		static ::RPG::Client::TextID* StaticGet_DefaultSeasonUpdateDescTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1120);
		}

		static ::System::UInt32* StaticGet_AhaSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1130);
		}

		static ::System::UInt32* StaticGet_EquipTrackMaxMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1134);
		}

		static ::System::UInt32* StaticGet_AdditionalTraitRoleChooseTraitID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1138);
		}

		static ::System::UInt32* StaticGet_PropEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x113C);
		}

		static ::System::UInt32* StaticGet_AhaUpperSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1140);
		}

		static ::System::UInt32* StaticGet_RoleStarUpgradeCountRequirement()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x1144);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS_CCTOR_OFFSET))();
		}

		static ::System::String* _GetConstValueString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUESTRING_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetConstValue(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetConstValueList(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET))(a1);
		}

		static ::System::Boolean _GetConstValueBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GetConstValueDict(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEDICT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _GetSeasonUpdateDescSwitch()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET))();
		}

		static ::RPG::Client::TextID GetSeasonUpdateDesc()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET))();
		}

	};
}
