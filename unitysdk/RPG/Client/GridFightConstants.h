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

#define RPG_CLIENT_GRIDFIGHTCONSTANTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5960C0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5960B0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET UNITYSDK_OFFSET(0x1D595E70)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1D5955E0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEDICT_OFFSET UNITYSDK_OFFSET(0x1D5956B0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET UNITYSDK_OFFSET(0x1D5953A0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUESTRING_OFFSET UNITYSDK_OFFSET(0x1D595230)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1D5952E0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET UNITYSDK_OFFSET(0x1D595A40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConstants_TypeDefinitionIndex = 66409;

	class GridFightConstants : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GuideLevels()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD590);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TutorialSpecialStageIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD598);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowSubTraitNameTraitList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>** StaticGet__SeasonUpdateDescSwitch()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5A8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_EquipAtlasBanList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5B0);
		}

		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>** StaticGet_CraftCostEquipCategories()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5B8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GridFight_EquipType_Support()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5C0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GridFight_EquipType_Attack()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5C8);
		}

		static ::System::String** StaticGet_SeasonNameTextID()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5D0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_AhaRoleIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5D8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowEffectRoleIDsInEnhance()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5E0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_SevenPriceRoleIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5E8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TanTaoAffixIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5F0);
		}

		static ::System::String** StaticGet_AhaGrowthSavedValueKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD5F8);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD600);
		}

		static ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>** StaticGet_HandBookAvatarPropertyTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0xD608);
		}

		static ::RPG::Client::TextID* StaticGet_DefaultSeasonUpdateDescTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D40);
		}

		static ::System::UInt32* StaticGet_MainPageUnlockId()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D50);
		}

		static ::System::UInt32* StaticGet_NewBieDivisionLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D54);
		}

		static ::System::UInt32* StaticGet_MaxMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D58);
		}

		static ::System::Boolean* StaticGet_IsShowSeasonUpdatedNotice()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D5C);
		}

		static ::System::Boolean* StaticGet_IsShowSeasonTimeOverHint()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D5D);
		}

		static ::System::UInt32* StaticGet_EquipTrackMaxMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D60);
		}

		static ::System::Single* StaticGet_ExtraSeasonExpRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D64);
		}

		static ::System::UInt32* StaticGet_MaxFrontMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D68);
		}

		static ::System::UInt32* StaticGet_IsDoubleSeasonExp()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D6C);
		}

		static ::System::UInt32* StaticGet_OpenOrbWaitMs()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D70);
		}

		static ::System::UInt32* StaticGet_SpotLightDifficultyThreshold()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D74);
		}

		static ::System::UInt32* StaticGet_MaxOverCrowdCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D78);
		}

		static ::System::UInt32* StaticGet_FormationEditEquipDragAngle()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D7C);
		}

		static ::System::UInt32* StaticGet_AdditionalTraitRoleChooseTraitID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D80);
		}

		static ::System::UInt32* StaticGet_TanTaoLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D84);
		}

		static ::System::UInt32* StaticGet_RoleStarUpgradeCountRequirement()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D88);
		}

		static ::System::UInt32* StaticGet_FormationEditRoleDragAngle()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D8C);
		}

		static ::System::UInt32* StaticGet_FormationDescLengthLimit()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D90);
		}

		static ::System::UInt32* StaticGet_S2DanHengPTID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D94);
		}

		static ::System::UInt32* StaticGet_DivisionLevelUpMaxValuePerGame()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D98);
		}

		static ::System::UInt32* StaticGet_OverChargeModeUnlockQuestID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2D9C);
		}

		static ::System::UInt32* StaticGet_GridStartIndex()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DA0);
		}

		static ::System::UInt32* StaticGet_GalaxyRangersLeaderID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DA4);
		}

		static ::System::UInt32* StaticGet_S2DanHengILID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DA8);
		}

		static ::System::UInt32* StaticGet_FormationTitleLengthLimit()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DAC);
		}

		static ::System::UInt32* StaticGet_MaxBenchMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DB0);
		}

		static ::System::UInt32* StaticGet_CyreneSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DB4);
		}

		static ::System::UInt32* StaticGet_WorkaholicChimeraID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DB8);
		}

		static ::System::UInt32* StaticGet_RelicItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DBC);
		}

		static ::System::UInt32* StaticGet_AhaSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DC0);
		}

		static ::System::UInt32* StaticGet_TraitEffectUnlockLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DC4);
		}

		static ::System::UInt32* StaticGet_AhaUpperSpecialGoodsGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DC8);
		}

		static ::System::UInt32* StaticGet_ShowSpecialFrontBackTypeTraitID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DCC);
		}

		static ::System::UInt32* StaticGet_CoinItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DD0);
		}

		static ::System::UInt32* StaticGet_ElationSpecialOrbID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DD4);
		}

		static ::System::UInt32* StaticGet_MaxRoleEquipCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DD8);
		}

		static ::System::UInt32* StaticGet_TrialRoleWorldLevel()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DDC);
		}

		static ::System::UInt32* StaticGet_MaxBackMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DE0);
		}

		static ::System::UInt32* StaticGet_ExtraSeasonExpMax()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DE4);
		}

		static ::System::UInt32* StaticGet_NewSeasonLockModuleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DE8);
		}

		static ::System::UInt32* StaticGet_PropEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DEC);
		}

		static ::System::UInt32* StaticGet_PropMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DF0);
		}

		static ::System::UInt32* StaticGet_MaxRoleStar()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DF4);
		}

		static ::System::UInt32* StaticGet_GridFightContentID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DF8);
		}

		static ::System::UInt32* StaticGet_AhaAvatarID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2DFC);
		}

		static ::System::UInt32* StaticGet_MaxBoardMemberCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E00);
		}

		static ::System::UInt32* StaticGet_FormationSlotNum()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E04);
		}

		static ::System::UInt32* StaticGet_DraftRoleStar()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E08);
		}

		static ::System::UInt32* StaticGet_FeiYingRoleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E0C);
		}

		static ::System::UInt32* StaticGet_PamKingID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E10);
		}

		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightConstants")->GetStaticField(0x2E14);
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
