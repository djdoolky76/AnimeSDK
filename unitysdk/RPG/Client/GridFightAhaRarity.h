#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightAhaUnlockConditionType.h"
#include "unitysdk/RPG/Client/GridFightAhaVisualStyle.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAhaUnlockCondition; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightSettleRecord; }
namespace RPG::Client { class GridFightUpgradeAhaRarityModifier; }
namespace RPG::Client { class IGridFightRoleProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAHARARITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C722B10)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETDISPLAYRARITY_1_OFFSET UNITYSDK_OFFSET(0x1C720870)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETDISPLAYRARITY_OFFSET UNITYSDK_OFFSET(0x1C7207E0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETFORMATIONROLEIDBYSPRANK_OFFSET UNITYSDK_OFFSET(0x1C721A10)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVELAFTERADD_OFFSET UNITYSDK_OFFSET(0x1C721560)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1C7216E0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7215E0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETOWNEDAHA_OFFSET UNITYSDK_OFFSET(0x1C7224A0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETRARITYSTATENAME_OFFSET UNITYSDK_OFFSET(0x1C720C20)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETUNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1C720DF0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETVISUALSTYLE_1_OFFSET UNITYSDK_OFFSET(0x1C720550)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GETVISUALSTYLE_OFFSET UNITYSDK_OFFSET(0x1C7203D0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GET_GROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7210C0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GET_ISULTRASTARPHASE_OFFSET UNITYSDK_OFFSET(0x1C722980)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GET_MAXGROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C721860)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_GET_TRAITSTARPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7223D0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_HASREACHEDTHREESTAR_1_OFFSET UNITYSDK_OFFSET(0x1C722900)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_HASREACHEDTHREESTAR_OFFSET UNITYSDK_OFFSET(0x1C722760)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHAROLE_1_OFFSET UNITYSDK_OFFSET(0x1C720070)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHAROLE_OFFSET UNITYSDK_OFFSET(0x1C71FE00)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHASEVENCOSTUPGRADE_OFFSET UNITYSDK_OFFSET(0x1C721470)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISFORMATIONSPRANKROLE_OFFSET UNITYSDK_OFFSET(0x1C7218A0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISGROWTHRARITYUP_OFFSET UNITYSDK_OFFSET(0x1C722120)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISSEVENCOST_1_OFFSET UNITYSDK_OFFSET(0x1C720290)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_ISSEVENCOST_OFFSET UNITYSDK_OFFSET(0x1C720750)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSHOWGROWTHBADGE_OFFSET UNITYSDK_OFFSET(0x1C7206C0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSHOWUNLOCKTASK_OFFSET UNITYSDK_OFFSET(0x1C720AC0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSKIPSTARUPGRADE_OFFSET UNITYSDK_OFFSET(0x1C7201E0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY_TRYGETFORMATIONGROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C722270)
#define RPG_CLIENT_GRIDFIGHTAHARARITY__CREATEUNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0x1C7213C0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY__GETFORMRARITY_OFFSET UNITYSDK_OFFSET(0x1C722220)
#define RPG_CLIENT_GRIDFIGHTAHARARITY__GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C71FF30)
#define RPG_CLIENT_GRIDFIGHTAHARARITY__GETUPGRADEAHARARITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C721270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaRarity_TypeDefinitionIndex = 66779;

	class GridFightAhaRarity : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__TraitStarUnlockTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightAhaRarity")->GetStaticField(0x15490);
		}

		static ::RPG::Client::TextID* StaticGet__GrowthUnlockTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightAhaRarity")->GetStaticField(0x154A0);
		}

		// static const ::System::Object ThreeStar; // 0x0
		// static const ::System::Object _SevenCostGrowthLevel; // 0x0
		// static const ::System::Object _FourCostRarity; // 0x0
		// static const ::System::Object _FiveCostRarity; // 0x0
		// static const ::System::Object SevenDisplayRarity; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsAhaRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHAROLE_OFFSET))(a1);
		}

		static ::System::Boolean IsAhaRole_1(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHAROLE_1_OFFSET))(a1);
		}

		static ::System::Boolean ShouldSkipStarUpgrade(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSKIPSTARUPGRADE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightAhaVisualStyle GetVisualStyle(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAhaVisualStyle(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETVISUALSTYLE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightAhaVisualStyle GetVisualStyle_1(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::RPG::Client::GridFightAhaVisualStyle(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETVISUALSTYLE_1_OFFSET))(a1);
		}

		static ::System::Boolean ShouldShowGrowthBadge(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSHOWGROWTHBADGE_OFFSET))(a1);
		}

		static ::System::Boolean IsSevenCost(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISSEVENCOST_OFFSET))(a1);
		}

		static ::System::Boolean IsSevenCost_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISSEVENCOST_1_OFFSET))(a1);
		}

		static ::System::UInt32 GetDisplayRarity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETDISPLAYRARITY_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetDisplayRarity_1(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETDISPLAYRARITY_1_OFFSET))(a1);
		}

		static ::System::Boolean ShouldShowUnlockTask(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_SHOULDSHOWUNLOCKTASK_OFFSET))(a1);
		}

		static ::System::String* GetRarityStateName(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETRARITYSTATENAME_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightAhaUnlockCondition*>* GetUnlockConditions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAhaUnlockCondition*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETUNLOCKCONDITIONS_OFFSET))();
		}

		static ::System::Boolean IsAhaSevenCostUpgrade(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISAHASEVENCOSTUPGRADE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 get_GrowthLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GET_GROWTHLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetGrowthLevelAfterAdd(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVELAFTERADD_OFFSET))(a1);
		}

		static ::System::UInt32 GetGrowthLevel(::RPG::Client::GridFightSettleRecord* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightSettleRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVEL_OFFSET))(a1);
		}

		static ::System::UInt32 GetGrowthLevel_1(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETGROWTHLEVEL_1_OFFSET))(a1);
		}

		static ::System::UInt32 get_MaxGrowthLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GET_MAXGROWTHLEVEL_OFFSET))();
		}

		static ::System::Boolean IsFormationSpRankRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISFORMATIONSPRANKROLE_OFFSET))(a1);
		}

		static ::System::UInt32 GetFormationRoleIDBySpRank(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETFORMATIONROLEIDBYSPRANK_OFFSET))(a1);
		}

		static ::System::Boolean IsGrowthRarityUp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_ISGROWTHRARITYUP_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetFormRarity(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY__GETFORMRARITY_OFFSET))(a1);
		}

		static ::System::Boolean TryGetFormationGrowthLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_TRYGETFORMATIONGROWTHLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 get_TraitStarProgress()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GET_TRAITSTARPROGRESS_OFFSET))();
		}

		static ::RPG::Client::GridFightRole* GetOwnedAha()
		{
			return ((::RPG::Client::GridFightRole*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GETOWNEDAHA_OFFSET))();
		}

		static ::System::Boolean HasReachedThreeStar(::RPG::Client::IGridFightRoleProfile* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IGridFightRoleProfile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_HASREACHEDTHREESTAR_OFFSET))(a1);
		}

		static ::System::Boolean HasReachedThreeStar_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_HASREACHEDTHREESTAR_1_OFFSET))();
		}

		static ::System::Boolean get_IsUltraStarPhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY_GET_ISULTRASTARPHASE_OFFSET))();
		}

		static ::RPG::Client::GridFightUpgradeAhaRarityModifier* _GetUpgradeAhaRarityModifier()
		{
			return ((::RPG::Client::GridFightUpgradeAhaRarityModifier*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY__GETUPGRADEAHARARITYMODIFIER_OFFSET))();
		}

		static ::RPG::Client::GridFightAhaUnlockCondition* _CreateUnlockCondition(::RPG::Client::GridFightAhaUnlockConditionType a1, ::RPG::Client::TextID a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::GridFightAhaUnlockCondition*(*)(::RPG::Client::GridFightAhaUnlockConditionType, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY__CREATEUNLOCKCONDITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::GridFightRoleConfig* _GetRoleConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY__GETROLECONFIG_OFFSET))(a1);
		}

	};
}
