#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodePlugInType.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BCCIJHPLJOJ;
class LHLMPOHKPKG;
class MDJBBILMHLC;
class NCKOKDHNJDC;
class NFKCKIAINPM;
class OHMDHKGAEMM;
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightStageNode; }
namespace RPG::GameCore { class GridFightNodePlugInShowConfigRow; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E173DD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET UNITYSDK_OFFSET(0x1E174D00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BONFIREEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1E175950)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1E1749C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E174CE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET UNITYSDK_OFFSET(0x1E1753D0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET UNITYSDK_OFFSET(0x1E175350)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET UNITYSDK_OFFSET(0x1E175910)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET UNITYSDK_OFFSET(0x1E1751B0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET UNITYSDK_OFFSET(0x1E1758F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET UNITYSDK_OFFSET(0x1E175240)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET UNITYSDK_OFFSET(0x1E175220)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET UNITYSDK_OFFSET(0x1E175190)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1E174B90)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET UNITYSDK_OFFSET(0x1E175260)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET UNITYSDK_OFFSET(0x1E1752E0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E174D40)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET UNITYSDK_OFFSET(0x1E174B70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1E174CA0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBONFIRENODE_OFFSET UNITYSDK_OFFSET(0x1E175930)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x1E174AF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET UNITYSDK_OFFSET(0x1E175680)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET UNITYSDK_OFFSET(0x1E174920)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x1E174960)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x1E173800)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET UNITYSDK_OFFSET(0x1E174BD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSKIPBATTLEBYTREASURY_OFFSET UNITYSDK_OFFSET(0x1E174BB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET UNITYSDK_OFFSET(0x1E174900)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E174A00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET UNITYSDK_OFFSET(0x1E174FB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET UNITYSDK_OFFSET(0x1E174F10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET UNITYSDK_OFFSET(0x1E174A20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1E174E70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E1749A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET UNITYSDK_OFFSET(0x1E1758A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0x1E175440)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET UNITYSDK_OFFSET(0x1E174980)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RESTHEALNUM_OFFSET UNITYSDK_OFFSET(0x1E174D20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROUTENODE_OFFSET UNITYSDK_OFFSET(0x1E1748C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1E174CC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET UNITYSDK_OFFSET(0x1E174A60)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1E174940)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1749E0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET UNITYSDK_OFFSET(0x1E175050)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET UNITYSDK_OFFSET(0x1E173CD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_MIGRATERUNTIMESTATEFROM_OFFSET UNITYSDK_OFFSET(0x1E174810)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_REFRESHMODIFIERDEPENDENTSTATE_OFFSET UNITYSDK_OFFSET(0x1E173FE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET UNITYSDK_OFFSET(0x1E174880)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_BASICREWARD_OFFSET UNITYSDK_OFFSET(0x1E174D10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1E1749D0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E174CF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_EXPERTCONFIG_OFFSET UNITYSDK_OFFSET(0x1E175920)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASEXPERT_OFFSET UNITYSDK_OFFSET(0x1E175900)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASHPDETAILRULE_OFFSET UNITYSDK_OFFSET(0x1E175250)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASNOTFINISHRULE_OFFSET UNITYSDK_OFFSET(0x1E175230)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASPERFECTRULE_OFFSET UNITYSDK_OFFSET(0x1E1751A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1E174BA0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISAUGMENTNODE_OFFSET UNITYSDK_OFFSET(0x1E174B80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1E174CB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISBONFIRENODE_OFFSET UNITYSDK_OFFSET(0x1E175940)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISELITENODE_OFFSET UNITYSDK_OFFSET(0x1E174930)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x1E174970)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISSKIPBATTLEBYTREASURY_OFFSET UNITYSDK_OFFSET(0x1E174BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISSUPPLYNODE_OFFSET UNITYSDK_OFFSET(0x1E174910)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E174A10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E1749B0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_RAWNODETYPE_OFFSET UNITYSDK_OFFSET(0x1E174990)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_RESTHEALNUM_OFFSET UNITYSDK_OFFSET(0x1E174D30)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1E174CD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1E174950)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1749F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0x1E174770)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATEROUTENODE_OFFSET UNITYSDK_OFFSET(0x1E173E40)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET UNITYSDK_OFFSET(0x1E174720)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET UNITYSDK_OFFSET(0x1E1756D0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETNODEPLUGINTYPE_OFFSET UNITYSDK_OFFSET(0x1E175960)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETPLUGINSHOWROW_OFFSET UNITYSDK_OFFSET(0x1E174DC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__ISWEAKENEDBYDRESSANDBATTLE_OFFSET UNITYSDK_OFFSET(0x1E1759C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__REFRESHBONFIREEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1E1742C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__REFRESHCACHEDFIELDS_OFFSET UNITYSDK_OFFSET(0x1E173EF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE___ISWEAKENEDBYDRESSANDBATTLE_B__155_0_OFFSET UNITYSDK_OFFSET(0x1E175AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageNode_TypeDefinitionIndex = 67004;

	class GridFightStageNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BonfireEventIds_k__BackingField; // 0x10
		::LHLMPOHKPKG* _SttInfo; // 0x18
		::OHMDHKGAEMM* _NodeParam; // 0x20
		::RPG::GameCore::GridFightStageNodeDisplayConfigRow* _DisplayRow; // 0x28
		::BCCIJHPLJOJ* _RouteNode; // 0x30
		::RPG::Client::GridFightRoleConfig* _ExpertConfig_k__BackingField; // 0x38
		::MDJBBILMHLC* _BattleNodeInfo; // 0x40
		::NCKOKDHNJDC* _NodeInfo; // 0x48
		::RPG::GameCore::GridFightNodeType _NodeType_k__BackingField; // 0x50
		::System::UInt32 _TotalSkipCount_k__BackingField; // 0x54
		::System::UInt32 _SectionID_k__BackingField; // 0x58
		::System::Boolean _HasNotFinishRule_k__BackingField; // 0x5C
		::System::Boolean _IsSkipBattleByTreasury_k__BackingField; // 0x5D
		::System::Boolean _HasSpotLight_k__BackingField; // 0x5E
		::System::Boolean _CanSkip_k__BackingField; // 0x5F
		::System::Boolean _IsFrenzy_k__BackingField; // 0x60
		::System::Boolean _IsBonfireNode_k__BackingField; // 0x61
		::System::Boolean _IsEliteNode_k__BackingField; // 0x62
		::System::Boolean _HasHPDetailRule_k__BackingField; // 0x63
		::System::Boolean NeedPetPalShow; // 0x64
		::System::Boolean _IsAugmentNode_k__BackingField; // 0x65
		::System::Byte _padding0[0x2];
		::System::UInt32 _ChapterID_k__BackingField; // 0x68
		::System::UInt32 _BasicReward_k__BackingField; // 0x6C
		::System::UInt32 _RestHealNum_k__BackingField; // 0x70
		::System::UInt32 _StageID_k__BackingField; // 0x74
		::System::UInt32 _LeftSkipCount_k__BackingField; // 0x78
		::RPG::GameCore::GridFightNodeType _RawNodeType_k__BackingField; // 0x7C
		::System::Boolean _HasPerfectRule_k__BackingField; // 0x80
		::System::Boolean _IsBattleNode_k__BackingField; // 0x81
		::System::Boolean _IsSupplyNode_k__BackingField; // 0x82
		::System::Boolean _HasExpert_k__BackingField; // 0x83
		// static const ::System::Object SHOW_TYPE_TREASURY_SELECT; // 0x0
		::System::Void _ctor(::BCCIJHPLJOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStage* get__Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET))(this);
		}

		::System::Void UpdateRouteNode(::BCCIJHPLJOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATEROUTENODE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCachedFields()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__REFRESHCACHEDFIELDS_OFFSET))(this);
		}

		::System::Void _RefreshBonfireEventIds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__REFRESHBONFIREEVENTIDS_OFFSET))(this);
		}

		::System::Void UpdateSttInfo(::LHLMPOHKPKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLMPOHKPKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET))(this, a1);
		}

		::System::Void UpdateNodeInfo(::NCKOKDHNJDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCKOKDHNJDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET))(this, a1);
		}

		::System::Void MigrateRuntimeStateFrom(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_MIGRATERUNTIMESTATEFROM_OFFSET))(this, a1);
		}

		::System::Void SetFrenzy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET))(this);
		}

		::BCCIJHPLJOJ* get_RouteNode()
		{
			return ((::BCCIJHPLJOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROUTENODE_OFFSET))(this);
		}

		::System::Boolean get_IsSupplyNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET))(this);
		}

		::System::Void set_IsSupplyNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISSUPPLYNODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEliteNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET))(this);
		}

		::System::Void set_IsEliteNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISELITENODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFrenzy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET))(this);
		}

		::System::Void set_IsFrenzy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType get_RawNodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET))(this);
		}

		::System::Void set_RawNodeType(::RPG::GameCore::GridFightNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_RAWNODETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::GameCore::GridFightNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_NODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET))(this);
		}

		::System::Void set_CanSkip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_CANSKIP_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalSkipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_TOTALSKIPCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftSkipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_LEFTSKIPCOUNT_OFFSET))(this, a1);
		}

		::NCKOKDHNJDC* get_NodeInfo()
		{
			return ((::NCKOKDHNJDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET))(this);
		}

		::System::Boolean get_ShowAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_IsAugmentNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET))(this);
		}

		::System::Void set_IsAugmentNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISAUGMENTNODE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASSPOTLIGHT_OFFSET))(this);
		}

		::System::Void set_HasSpotLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSkipBattleByTreasury()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSKIPBATTLEBYTREASURY_OFFSET))(this);
		}

		::System::Void set_IsSkipBattleByTreasury(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISSKIPBATTLEBYTREASURY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET))(this);
		}

		::System::Boolean get_IsPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET))(this);
		}

		::System::Void set_IsBattleNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISBATTLENODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_SECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_CHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BasicReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET))(this);
		}

		::System::Void set_BasicReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_BASICREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RestHealNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RESTHEALNUM_OFFSET))(this);
		}

		::System::Void set_RestHealNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_RESTHEALNUM_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDetailName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPenaltyRuleConfigRow* get__PenaltyRuleConfigRow()
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET))(this);
		}

		::System::Boolean get_HasPerfectRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET))(this);
		}

		::System::Void set_HasPerfectRule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASPERFECTRULE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeadLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET))(this);
		}

		::System::Boolean get_HasNotFinishRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET))(this);
		}

		::System::Void set_HasNotFinishRule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASNOTFINISHRULE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasHPDetailRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET))(this);
		}

		::System::Void set_HasHPDetailRule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASHPDETAILRULE_OFFSET))(this, a1);
		}

		::System::UInt32 get_HPCostMax()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET))(this);
		}

		::System::UInt32 get_HPCostMin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET))(this);
		}

		::System::Single get_DeadLineRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET))(this);
		}

		::System::UInt32 get_DeadLinePenalty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET))(this);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PETPALID_OFFSET))(this);
		}

		::System::Boolean get_IsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET))(this);
		}

		::System::Single get_PerfectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET))(this);
		}

		::System::Boolean get_HasExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET))(this);
		}

		::System::Void set_HasExpert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_HASEXPERT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleConfig* get_ExpertConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET))(this);
		}

		::System::Void set_ExpertConfig(::RPG::Client::GridFightRoleConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_EXPERTCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBonfireNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBONFIRENODE_OFFSET))(this);
		}

		::System::Void set_IsBonfireNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISBONFIRENODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BonfireEventIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BONFIREEVENTIDS_OFFSET))(this);
		}

		::System::Void RefreshModifierDependentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_REFRESHMODIFIERDEPENDENTSTATE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodePlugInShowConfigRow* _GetPlugInShowRow()
		{
			return ((::RPG::GameCore::GridFightNodePlugInShowConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETPLUGINSHOWROW_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodePlugInType _GetNodePlugInType()
		{
			return ((::RPG::GameCore::GridFightNodePlugInType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETNODEPLUGINTYPE_OFFSET))(this);
		}

		::System::Boolean _CheckIsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET))(this);
		}

		::System::Boolean _IsWeakenedByDressAndBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__ISWEAKENEDBYDRESSANDBATTLE_OFFSET))(this);
		}

		::System::Boolean __IsWeakenedByDressAndBattle_b__155_0(::NFKCKIAINPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFKCKIAINPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE___ISWEAKENEDBYDRESSANDBATTLE_B__155_0_OFFSET))(this, a1);
		}

	};
}
