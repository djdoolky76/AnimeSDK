#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace RPG::Client { class GridFightRoleSkillStyleRemarkItem; }
namespace RPG::GameCore { class GridFightRoleSkillStyleRemarkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_GRIDFIGHTUTILS_CANCONSUMABLEITEMUSETOEQUIP_OFFSET UNITYSDK_OFFSET(0xDD056C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0xDCFFEB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xDCFC670)
#define RPG_CLIENT_GRIDFIGHTUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD05870)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET UNITYSDK_OFFSET(0xDCFF5E0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_2_OFFSET UNITYSDK_OFFSET(0xDCFF730)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_3_OFFSET UNITYSDK_OFFSET(0xDCFF8C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_4_OFFSET UNITYSDK_OFFSET(0xDCFF960)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET UNITYSDK_OFFSET(0xDCFF4B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET UNITYSDK_OFFSET(0xDD00A20)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xDD00B50)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET UNITYSDK_OFFSET(0xDD01FE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET UNITYSDK_OFFSET(0xDD025B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xDD02600)
#define RPG_CLIENT_GRIDFIGHTUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0xDD05860)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xDD02530)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET UNITYSDK_OFFSET(0xDD03EF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETDESCDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0xDD04210)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET UNITYSDK_OFFSET(0xDCFD5B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0xDD01E80)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETFATEEQUIPRANK_OFFSET UNITYSDK_OFFSET(0xDD03A70)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET UNITYSDK_OFFSET(0xDD01610)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET UNITYSDK_OFFSET(0xDD00710)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDNAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDD00800)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET UNITYSDK_OFFSET(0xDD00580)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTHPSPRITEPATH_OFFSET UNITYSDK_OFFSET(0xDD009C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET UNITYSDK_OFFSET(0xDD03940)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET UNITYSDK_OFFSET(0xDCFCB20)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETINVASIONDESC_OFFSET UNITYSDK_OFFSET(0xDD05470)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETINVASIONTUTORIALID_OFFSET UNITYSDK_OFFSET(0xDD05520)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET UNITYSDK_OFFSET(0xDCFFBB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0xDCFD390)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0xDCFD010)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xDD00D20)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET UNITYSDK_OFFSET(0xDD017A0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET UNITYSDK_OFFSET(0xDD00200)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET UNITYSDK_OFFSET(0xDD00270)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0xDD00E90)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0xDCFFFD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET UNITYSDK_OFFSET(0xDCFFD50)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0xDD01240)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLESKILLOVERRIDEDESC_OFFSET UNITYSDK_OFFSET(0xDCFDED0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLESKILLSTYLEREMARKITEMS_OFFSET UNITYSDK_OFFSET(0xDCFEEF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET UNITYSDK_OFFSET(0xDCFD7F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET UNITYSDK_OFFSET(0xDCFD850)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET UNITYSDK_OFFSET(0xDD034A0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSPSILVERWOLFCHOOSESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDD03BB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET UNITYSDK_OFFSET(0xDD004D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET UNITYSDK_OFFSET(0xDD002E0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET UNITYSDK_OFFSET(0xDD029F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET UNITYSDK_OFFSET(0xDD028C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET UNITYSDK_OFFSET(0xDD034F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET UNITYSDK_OFFSET(0xDCFD240)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0xDCFCEC0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0xDD041C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET UNITYSDK_OFFSET(0xDD04100)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET UNITYSDK_OFFSET(0xDCFC990)
#define RPG_CLIENT_GRIDFIGHTUTILS_HASDESCDETAILINFO_OFFSET UNITYSDK_OFFSET(0xDD055C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET UNITYSDK_OFFSET(0xDCFCBB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET UNITYSDK_OFFSET(0xDCFCDD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET UNITYSDK_OFFSET(0xDD03D90)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISGRIDFIGHTTROPHYITEM_OFFSET UNITYSDK_OFFSET(0xDCFDA30)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0xDCFC750)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0xDCFCA10)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISTANTAOAFFIXID_OFFSET UNITYSDK_OFFSET(0xDD05330)
#define RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xDD032F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xDD01560)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xDD014B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET UNITYSDK_OFFSET(0xDD01A90)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xDCFC1B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET UNITYSDK_OFFSET(0xDD02C60)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0xDD02650)
#define RPG_CLIENT_GRIDFIGHTUTILS__COLLECTGRIDFIGHTTROPHYITEMIDS_OFFSET UNITYSDK_OFFSET(0xDCFDB60)
#define RPG_CLIENT_GRIDFIGHTUTILS__GETACTIVESUBTRAITID_1_OFFSET UNITYSDK_OFFSET(0xDCFF3D0)
#define RPG_CLIENT_GRIDFIGHTUTILS__GETACTIVESUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDCFE1F0)
#define RPG_CLIENT_GRIDFIGHTUTILS__GETFEIYINGDESCLISTKEY_OFFSET UNITYSDK_OFFSET(0xDCFE4D0)
#define RPG_CLIENT_GRIDFIGHTUTILS__GETROWSUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDCFEE80)
#define RPG_CLIENT_GRIDFIGHTUTILS__GETSTYLEREMARKROWS_OFFSET UNITYSDK_OFFSET(0xDCFE570)
#define RPG_CLIENT_GRIDFIGHTUTILS__TRYADDTROPHYITEMID_OFFSET UNITYSDK_OFFSET(0xDCFDE10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils_TypeDefinitionIndex = 66439;

	class GridFightUtils : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__DescInfoRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "GridFightUtils")->GetStaticField(0x16A30);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__GridFightTrophyItemIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightUtils")->GetStaticField(0x16A38);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::GridFightSkillType>, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>*>** StaticGet__StyleRemarkRowsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::GridFightSkillType>, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>*>**)UnitySDK::FromName("RPG.Client", "GridFightUtils")->GetStaticField(0x16A40);
		}

		// static const ::System::Object _TrophyTagID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CCTOR_OFFSET))();
		}

		static ::System::Void TransferToLauncher()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Boolean IsOverChargeModeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET))();
		}

		static ::System::String* GetIntroH5Url()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET))();
		}

		static ::System::UInt32 get__CONTENT_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET))();
		}

		static ::System::Boolean IsDivisionExistingPromotionMatchByLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean IsDivisionExistingPromotionMatch(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET))(a1);
		}

		static ::System::UInt32 GetUpGradedDivisionID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetUpgradedDivisionIDByProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetMaxProgressInLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET))(a1);
		}

		static ::System::UInt32 GetMinProgressInLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET))(a1);
		}

		static ::System::UInt32 GetDivisionIDByLevelAndProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetScoringChapterID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetScoringSectionID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsGridFightTrophyItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISGRIDFIGHTTROPHYITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* _CollectGridFightTrophyItemIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__COLLECTGRIDFIGHTTROPHYITEMIDS_OFFSET))();
		}

		static ::System::Void _TryAddTrophyItemID(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__TRYADDTROPHYITEMID_OFFSET))(a1, a2);
		}

		static ::System::String* GetRoleSkillOverrideDesc(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLESKILLOVERRIDEDESC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>* _GetStyleRemarkRows(::System::UInt32 a1, ::RPG::GameCore::GridFightSkillType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>*(*)(::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__GETSTYLEREMARKROWS_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetRowSubTraitId(::RPG::GameCore::GridFightRoleSkillStyleRemarkRow* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__GETROWSUBTRAITID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillStyleRemarkItem*>* GetRoleSkillStyleRemarkItems(::System::UInt32 a1, ::RPG::GameCore::GridFightSkillType a2, ::System::Boolean a3, ::RPG::Client::GridFightRoleSkillDetail* a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillStyleRemarkItem*>*(*)(::System::UInt32, ::RPG::GameCore::GridFightSkillType, ::System::Boolean, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLESKILLSTYLEREMARKITEMS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 _GetActiveSubTraitId(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__GETACTIVESUBTRAITID_OFFSET))(a1);
		}

		static ::System::UInt32 _GetActiveSubTraitId_1(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__GETACTIVESUBTRAITID_1_OFFSET))(a1);
		}

		static ::System::String* _GetFeiYingDescListKey(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__GETFEIYINGDESCLISTKEY_OFFSET))(a1);
		}

		static ::System::String* CompileGridFightText(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* CompileGridFightText_1(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::GridFightRichTextNodeCompiler* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::GridFightRichTextNodeCompiler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CompileGridFightText_2(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CompileGridFightText_3(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_3_OFFSET))(a1);
		}

		static ::System::String* CompileGridFightText_4(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_4_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetLevelUpNeedRoleCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRoleMaxStarByID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET))(a1);
		}

		static ::System::Boolean CanRoleLevelUpByAddCount(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetRoleLevelUpByAddCount(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetRarityColorString(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET))(a1);
		}

		static ::System::String* GetRarityFramePath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetStageNodeName(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetStageNodeIcon(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetGridFightGoldSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET))();
		}

		static ::RPG::Client::TextID GetGridFightGoldNameTextID()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDNAMETEXTID_OFFSET))();
		}

		static ::System::String* GetGridFightHPSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTHPSPRITEPATH_OFFSET))();
		}

		static ::System::UInt32 GetGridFightCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET))();
		}

		static ::System::UInt32 ConvertPlacementIndexToPosIndex(::RPG::Client::GridFightPlacementType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ConvertPosIndexToPlacementIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPlacementType GetPlacementType(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET))(a1);
		}

		static ::System::UInt32 GetRoleBuyPrice(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::System::UInt32> a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetRoleSellPrice(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemConfig* SafeGetEquipItemConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightConsumableItemConfig* SafeGetConsumableItemConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET))(a1);
		}

		static ::System::String* GetGridFightCoinImgPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET))();
		}

		static ::System::Void GetPlayerLevelExpByAddExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* SortTraitIDsByTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET))(a1);
		}

		static ::System::UInt32 GetExpAmount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* ConvertPropertyToFixPoint(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET))(a1);
		}

		static ::System::String* GetColorState(::RPG::GameCore::GridFightTrailLayerQuality a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightTrailLayerQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPlacementType CovertPlacementTypeFromRegin(::RPG::GameCore::GridFightRegion a1)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::RPG::GameCore::GridFightRegion))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightRegion CovertReginFromPlacementType(::RPG::Client::GridFightPlacementType a1)
		{
			return ((::RPG::GameCore::GridFightRegion(*)(::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Boolean TryTakeAllTutorialStageReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET))();
		}

		static ::System::UInt32 GetTheoreticalSeasonExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 GetTheoreticalExtraSeasonExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryShowNewBieLoseDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET))();
		}

		static ::System::Void OverrideNextTransitionGridFight()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET))();
		}

		static ::System::UInt32 GetSeasonUID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetUIPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetHackEquipRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET))(a1);
		}

		static ::System::String* GetFateEquipRank(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETFATEEQUIPRANK_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetSPSilverWolfChooseSimpleDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSPSILVERWOLFCHOOSESIMPLEDESC_OFFSET))(a1);
		}

		static ::System::Boolean IsEquipCantUsedByElationEffect(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurSessionUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET))();
		}

		static ::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET))();
		}

		static ::System::Boolean get_IsInPreparation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObjects(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETDESCDETAILOBJECTS_OFFSET))(a1);
		}

		static ::System::Boolean IsTanTaoAffixID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISTANTAOAFFIXID_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetInvasionDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETINVASIONDESC_OFFSET))(a1);
		}

		static ::System::UInt32 GetInvasionTutorialID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETINVASIONTUTORIALID_OFFSET))(a1);
		}

		static ::System::Boolean HasDescDetailInfo(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_HASDESCDETAILINFO_OFFSET))(a1);
		}

		static ::System::Boolean CanConsumableItemUseToEquip(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANCONSUMABLEITEMUSETOEQUIP_OFFSET))(a1, a2);
		}

	};
}
