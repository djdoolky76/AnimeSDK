#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/Client/RelicModule__MainAffixSortItem.h"
class BPGHDFAFMKH;
class CKBLLFPNCGA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AsatPramadDiceItemAffixOption; }
namespace RPG::Client { class AsatPramadDiceItemContext; }
namespace RPG::Client { class AsatPramadDiceItemRelicTypeOption; }
namespace RPG::Client { class AsatPramadDiceItemSetDetail; }
namespace RPG::Client { class AsatPramadDiceItemSetOption; }
namespace RPG::Client { class IRelicFilterPlanModifyData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RelicFilterPlanData; }
namespace RPG::Client { class RelicFilterPlanDataGroup; }
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicModule; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicRecommendPropertyData; }
namespace RPG::Client { class RelicSuitRecommendData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class PlanDataManager; }
namespace RPG::GameCore { class RelicConfigRow; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09BD20)
#define RPG_CLIENT_RELICMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D099A40)
#define RPG_CLIENT_RELICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D099B90)
#define RPG_CLIENT_RELICMODULE_ENSUREASATPRAMADDICEDEFAULTMAINAFFIX_OFFSET UNITYSDK_OFFSET(0x1D0951D0)
#define RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0x1D09A6E0)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEITEMID_OFFSET UNITYSDK_OFFSET(0x1D093370)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEITEMNEWTABID_OFFSET UNITYSDK_OFFSET(0x1D093720)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEMAINAFFIXOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D0954B0)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEPREVIEWRELIC_OFFSET UNITYSDK_OFFSET(0x1D097030)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICERELICTYPEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D094850)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETDETAIL_OFFSET UNITYSDK_OFFSET(0x1D094B20)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETIDBYRELICID_OFFSET UNITYSDK_OFFSET(0x1D0950C0)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D0943C0)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESOUVENIRITEMID_OFFSET UNITYSDK_OFFSET(0x1D093430)
#define RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESUBAFFIXOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D095E70)
#define RPG_CLIENT_RELICMODULE_GETDEFAULTASATPRAMADDICEREFERENCEAVATARID_OFFSET UNITYSDK_OFFSET(0x1D093EE0)
#define RPG_CLIENT_RELICMODULE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1D093350)
#define RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D08EF10)
#define RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0x1D09B3F0)
#define RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x1D09B3D0)
#define RPG_CLIENT_RELICMODULE_HASUSABLEASATPRAMADDICE_OFFSET UNITYSDK_OFFSET(0x1D0935E0)
#define RPG_CLIENT_RELICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1D099AD0)
#define RPG_CLIENT_RELICMODULE_ISASATPRAMADDICEITEM_OFFSET UNITYSDK_OFFSET(0x1D093520)
#define RPG_CLIENT_RELICMODULE_ISASATPRAMADDICEPLANARRELICTYPE_OFFSET UNITYSDK_OFFSET(0x1D094370)
#define RPG_CLIENT_RELICMODULE_ISASATPRAMADDICERELICALLOWED_OFFSET UNITYSDK_OFFSET(0x1D093F20)
#define RPG_CLIENT_RELICMODULE_ISASATPRAMADDICESETALLOWED_OFFSET UNITYSDK_OFFSET(0x1D093FB0)
#define RPG_CLIENT_RELICMODULE_ISASATPRAMADDICESOUVENIRITEM_OFFSET UNITYSDK_OFFSET(0x1D093580)
#define RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET UNITYSDK_OFFSET(0x1D0988D0)
#define RPG_CLIENT_RELICMODULE_ISRELICBAGFULL_OFFSET UNITYSDK_OFFSET(0x1D093D60)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0x1D098930)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0x1D0989A0)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET UNITYSDK_OFFSET(0x1D09A9C0)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0x1D09A810)
#define RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1D099BF0)
#define RPG_CLIENT_RELICMODULE_OPENRELICSMARTSUITDIALOG_OFFSET UNITYSDK_OFFSET(0x1D09B7B0)
#define RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET UNITYSDK_OFFSET(0x1D098C00)
#define RPG_CLIENT_RELICMODULE_REQUESTRELICSMARTSUITPAGEDATAS_OFFSET UNITYSDK_OFFSET(0x1D09B410)
#define RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET UNITYSDK_OFFSET(0x1D09ABE0)
#define RPG_CLIENT_RELICMODULE_SENDASATPRAMADDICEITEMCRAFT_OFFSET UNITYSDK_OFFSET(0x1D097590)
#define RPG_CLIENT_RELICMODULE_SETASATPRAMADDICEMAINAFFIX_OFFSET UNITYSDK_OFFSET(0x1D096770)
#define RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0x1D098B70)
#define RPG_CLIENT_RELICMODULE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1D093360)
#define RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0x1D09B400)
#define RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x1D09B3E0)
#define RPG_CLIENT_RELICMODULE_TOGGLEASATPRAMADDICESUBAFFIX_OFFSET UNITYSDK_OFFSET(0x1D096C30)
#define RPG_CLIENT_RELICMODULE_TRYCLEARASATPRAMADDICEITEMNEWIFSEEN_OFFSET UNITYSDK_OFFSET(0x1D0939A0)
#define RPG_CLIENT_RELICMODULE__ADDASATPRAMADDICENEWITEMID_OFFSET UNITYSDK_OFFSET(0x1D097EE0)
#define RPG_CLIENT_RELICMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D097C40)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORASATPRAMADDICEITEM_OFFSET UNITYSDK_OFFSET(0x1D098070)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0x1D09A1D0)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D099CB0)
#define RPG_CLIENT_RELICMODULE__BUILDASATPRAMADDICESETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D094C50)
#define RPG_CLIENT_RELICMODULE__COMPAREASATPRAMADDICESETOPTION_OFFSET UNITYSDK_OFFSET(0x1D095140)
#define RPG_CLIENT_RELICMODULE__COMPAREMAINAFFIXSORTITEM_OFFSET UNITYSDK_OFFSET(0x1D096EB0)
#define RPG_CLIENT_RELICMODULE__COMPARESUBAFFIXOPTION_OFFSET UNITYSDK_OFFSET(0x1D096F80)
#define RPG_CLIENT_RELICMODULE__CREATECRAFTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1D098390)
#define RPG_CLIENT_RELICMODULE__DISPOSEASATPRAMADDICEITEM_OFFSET UNITYSDK_OFFSET(0x1D098740)
#define RPG_CLIENT_RELICMODULE__GETASATPRAMADDICENEWITEM_OFFSET UNITYSDK_OFFSET(0x1D093800)
#define RPG_CLIENT_RELICMODULE__GETMAINAFFIXRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x1D095DB0)
#define RPG_CLIENT_RELICMODULE__GETSELECTEDMAINAFFIXPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D096640)
#define RPG_CLIENT_RELICMODULE__GETSELECTEDRELICCONFIG_OFFSET UNITYSDK_OFFSET(0x1D095D30)
#define RPG_CLIENT_RELICMODULE__HASASATPRAMADDICENEWITEMID_OFFSET UNITYSDK_OFFSET(0x1D093AC0)
#define RPG_CLIENT_RELICMODULE__INITASATPRAMADDICEITEM_OFFSET UNITYSDK_OFFSET(0x1D097D50)
#define RPG_CLIENT_RELICMODULE__ISASATPRAMADDICERECOMMENDSET_OFFSET UNITYSDK_OFFSET(0x1D094750)
#define RPG_CLIENT_RELICMODULE__ISRECOMMENDSUBAFFIX_OFFSET UNITYSDK_OFFSET(0x1D0966D0)
#define RPG_CLIENT_RELICMODULE__ISSUBAFFIXCONFLICTWITHMAIN_1_OFFSET UNITYSDK_OFFSET(0x1D096D80)
#define RPG_CLIENT_RELICMODULE__ISSUBAFFIXCONFLICTWITHMAIN_OFFSET UNITYSDK_OFFSET(0x1D096CD0)
#define RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09AFE0)
#define RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09B0F0)
#define RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09B2D0)
#define RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09AE40)
#define RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09B090)
#define RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09AD50)
#define RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09AF00)
#define RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1D09B350)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICCRAFTSCRSP_OFFSET UNITYSDK_OFFSET(0x1D098150)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09B9A0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09BC20)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09BAA0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09BB20)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09B920)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1D09BCA0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09BBA0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0x1D09BA20)
#define RPG_CLIENT_RELICMODULE__ONITEMCHANGEDFORASATPRAMADDICENEW_OFFSET UNITYSDK_OFFSET(0x1D097DA0)
#define RPG_CLIENT_RELICMODULE__ONRECONNECTFORASATPRAMADDICEITEM_OFFSET UNITYSDK_OFFSET(0x1D098530)
#define RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0x1D099C40)
#define RPG_CLIENT_RELICMODULE__REJECTPENDINGASATPRAMADDICEITEMCRAFT_OFFSET UNITYSDK_OFFSET(0x1D0986D0)
#define RPG_CLIENT_RELICMODULE__REMOVEASATPRAMADDICENEWITEMID_OFFSET UNITYSDK_OFFSET(0x1D093BC0)
#define RPG_CLIENT_RELICMODULE__REMOVESUBAFFIXESCONFLICTWITHMAIN_OFFSET UNITYSDK_OFFSET(0x1D096820)
#define RPG_CLIENT_RELICMODULE__TRYGETRELEASEVERSIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1D094200)
#define RPG_CLIENT_RELICMODULE__TRYPARSERELEASEVERSION_OFFSET UNITYSDK_OFFSET(0x1D0940D0)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET UNITYSDK_OFFSET(0x1D0992E0)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET UNITYSDK_OFFSET(0x1D099840)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule_TypeDefinitionIndex = 68797;

	class RelicModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RelicSuitRecommendData* _RecommendData; // 0x10
		::RPG::Client::RelicSmartSuit::PinInfoRecorder* _PinInfoRecorder_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicSuitRecommendData*>* _RelicSuitRecommendPromise; // 0x20
		::RPG::Client::Promises::Promise* _AsatPramadDiceItemCraftPromise; // 0x28
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* _RelicFilterPlanPromise; // 0x30
		::RPG::Client::AsatPramadDiceItemContext* _Context_k__BackingField; // 0x38
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* _NewRelicPlanPromise; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* ReforgingRelicDataList; // 0x48
		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* _RelicPlanModifyPromise; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::RelicType>* ReforgingRelicTypeList; // 0x58
		::RPG::Client::RelicSmartSuit::PlanDataManager* _PlanDataManager_k__BackingField; // 0x60
		::RPG::Client::RelicPresetModel* RelicPresetModel; // 0x68
		::System::Int32 _asatPramadDiceReleaseVersionMinor; // 0x70
		::System::Int32 _asatPramadDiceReleaseVersionMajor; // 0x74
		::System::Boolean _asatPramadDiceReleaseVersionCached; // 0x78
		::System::Boolean _asatPramadDiceNewObserved; // 0x79
		::System::Boolean _asatPramadDiceReleaseVersionValid; // 0x7A
		static ::Il2CppArray<::RPG::GameCore::RelicType>** StaticGet__ASAT_PRAMAD_DICE_PLANAR_TYPES()
		{
			return (::Il2CppArray<::RPG::GameCore::RelicType>**)UnitySDK::FromName("RPG.Client", "RelicModule")->GetStaticField(0x6D770);
		}

		static ::Il2CppArray<::RPG::GameCore::RelicType>** StaticGet__ASAT_PRAMAD_DICE_CAVERN_TYPES()
		{
			return (::Il2CppArray<::RPG::GameCore::RelicType>**)UnitySDK::FromName("RPG.Client", "RelicModule")->GetStaticField(0x6D778);
		}

		// static const ::System::String* _ASAT_PRAMAD_DICE_ITEM_ID; // 0x0
		// static const ::System::String* _ASAT_PRAMAD_DICE_SOUVENIR_ITEM_ID; // 0x0
		// static const ::System::String* _ASAT_PRAMAD_DICE_RELEASE_VERSION; // 0x0
		// static const ::System::String* _RELIC_SMART_SUIT_DIALOG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_CCTOR_OFFSET))();
		}

		::RPG::Client::AsatPramadDiceItemContext* get_Context()
		{
			return ((::RPG::Client::AsatPramadDiceItemContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::RPG::Client::AsatPramadDiceItemContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AsatPramadDiceItemContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_CONTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 GetAsatPramadDiceItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEITEMID_OFFSET))(this);
		}

		::System::UInt32 GetAsatPramadDiceSouvenirItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESOUVENIRITEMID_OFFSET))(this);
		}

		::System::Boolean IsAsatPramadDiceItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISASATPRAMADDICEITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsAsatPramadDiceSouvenirItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISASATPRAMADDICESOUVENIRITEM_OFFSET))(this, a1);
		}

		::System::Boolean HasUsableAsatPramadDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_HASUSABLEASATPRAMADDICE_OFFSET))(this);
		}

		::System::UInt32 GetAsatPramadDiceItemNewTabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEITEMNEWTABID_OFFSET))(this);
		}

		::System::Void TryClearAsatPramadDiceItemNewIfSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_TRYCLEARASATPRAMADDICEITEMNEWIFSEEN_OFFSET))(this);
		}

		::RPG::Client::ItemData* _GetAsatPramadDiceNewItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__GETASATPRAMADDICENEWITEM_OFFSET))(this);
		}

		::System::Boolean IsRelicBagFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISRELICBAGFULL_OFFSET))(this);
		}

		::System::UInt32 GetDefaultAsatPramadDiceReferenceAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETDEFAULTASATPRAMADDICEREFERENCEAVATARID_OFFSET))(this);
		}

		::System::Boolean IsAsatPramadDiceRelicAllowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISASATPRAMADDICERELICALLOWED_OFFSET))(this, a1);
		}

		::System::Boolean IsAsatPramadDiceSetAllowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISASATPRAMADDICESETALLOWED_OFFSET))(this, a1);
		}

		static ::System::Boolean IsAsatPramadDicePlanarRelicType(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISASATPRAMADDICEPLANARRELICTYPE_OFFSET))(a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemSetOption*>* GetAsatPramadDiceSetOptions(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemSetOption*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETOPTIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemRelicTypeOption*>* GetAsatPramadDiceRelicTypeOptions(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemRelicTypeOption*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICERELICTYPEOPTIONS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AsatPramadDiceItemSetDetail* GetAsatPramadDiceSetDetail(::System::UInt32 a1)
		{
			return ((::RPG::Client::AsatPramadDiceItemSetDetail*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETDETAIL_OFFSET))(this, a1);
		}

		::System::UInt32 GetAsatPramadDiceSetIDByRelicID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESETIDBYRELICID_OFFSET))(this, a1);
		}

		static ::System::String* _BuildAsatPramadDiceSetDescription(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__BUILDASATPRAMADDICESETDESCRIPTION_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CompareAsatPramadDiceSetOption(::RPG::Client::AsatPramadDiceItemSetOption* a1, ::RPG::Client::AsatPramadDiceItemSetOption* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AsatPramadDiceItemSetOption*, ::RPG::Client::AsatPramadDiceItemSetOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__COMPAREASATPRAMADDICESETOPTION_OFFSET))(a1, a2);
		}

		::System::Boolean _IsAsatPramadDiceRecommendSet(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ISASATPRAMADDICERECOMMENDSET_OFFSET))(this, a1, a2);
		}

		::System::Void EnsureAsatPramadDiceDefaultMainAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ENSUREASATPRAMADDICEDEFAULTMAINAFFIX_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemAffixOption*>* GetAsatPramadDiceMainAffixOptions()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemAffixOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEMAINAFFIXOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemAffixOption*>* GetAsatPramadDiceSubAffixOptions()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::AsatPramadDiceItemAffixOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICESUBAFFIXOPTIONS_OFFSET))(this);
		}

		::System::Boolean SetAsatPramadDiceMainAffix(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SETASATPRAMADDICEMAINAFFIX_OFFSET))(this, a1);
		}

		::System::Void ToggleAsatPramadDiceSubAffix(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_TOGGLEASATPRAMADDICESUBAFFIX_OFFSET))(this, a1);
		}

		::RPG::GameCore::RelicConfigRow* _GetSelectedRelicConfig()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__GETSELECTEDRELICCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _GetSelectedMainAffixProperty(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__GETSELECTEDMAINAFFIXPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveSubAffixesConflictWithMain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__REMOVESUBAFFIXESCONFLICTWITHMAIN_OFFSET))(this);
		}

		::System::Boolean _IsSubAffixConflictWithMain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ISSUBAFFIXCONFLICTWITHMAIN_OFFSET))(this, a1);
		}

		::System::Boolean _IsSubAffixConflictWithMain_1(::RPG::GameCore::RelicConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ISSUBAFFIXCONFLICTWITHMAIN_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _GetMainAffixRecommendInfo(::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*, ::RPG::GameCore::AvatarPropertyType, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__GETMAINAFFIXRECOMMENDINFO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _IsRecommendSubAffix(::RPG::Client::RelicRecommendData* a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicRecommendData*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ISRECOMMENDSUBAFFIX_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CompareMainAffixSortItem(::RPG::Client::RelicModule__MainAffixSortItem a1, ::RPG::Client::RelicModule__MainAffixSortItem a2)
		{
			return ((::System::Int32(*)(::RPG::Client::RelicModule__MainAffixSortItem, ::RPG::Client::RelicModule__MainAffixSortItem))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__COMPAREMAINAFFIXSORTITEM_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CompareSubAffixOption(::RPG::Client::AsatPramadDiceItemAffixOption* a1, ::RPG::Client::AsatPramadDiceItemAffixOption* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AsatPramadDiceItemAffixOption*, ::RPG::Client::AsatPramadDiceItemAffixOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__COMPARESUBAFFIXOPTION_OFFSET))(a1, a2);
		}

		::RPG::Client::RelicItemData* GetAsatPramadDicePreviewRelic()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GETASATPRAMADDICEPREVIEWRELIC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SendAsatPramadDiceItemCraft()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SENDASATPRAMADDICEITEMCRAFT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _InitAsatPramadDiceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__INITASATPRAMADDICEITEM_OFFSET))(this);
		}

		::System::Void _OnItemChangedForAsatPramadDiceNew(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONITEMCHANGEDFORASATPRAMADDICENEW_OFFSET))(this, a1);
		}

		::System::Boolean _HasAsatPramadDiceNewItemID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__HASASATPRAMADDICENEWITEMID_OFFSET))(this, a1);
		}

		::System::Boolean _AddAsatPramadDiceNewItemID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDASATPRAMADDICENEWITEMID_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveAsatPramadDiceNewItemID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__REMOVEASATPRAMADDICENEWITEMID_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlersForAsatPramadDiceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORASATPRAMADDICEITEM_OFFSET))(this);
		}

		::System::Void _OnCmdRelicCraftScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICCRAFTSCRSP_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CreateCraftRewardItems(::CKBLLFPNCGA* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::CKBLLFPNCGA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__CREATECRAFTREWARDITEMS_OFFSET))(a1);
		}

		::System::Void _OnReconnectForAsatPramadDiceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONRECONNECTFORASATPRAMADDICEITEM_OFFSET))(this);
		}

		::System::Void _DisposeAsatPramadDiceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__DISPOSEASATPRAMADDICEITEM_OFFSET))(this);
		}

		::System::Void _RejectPendingAsatPramadDiceItemCraft(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__REJECTPENDINGASATPRAMADDICEITEMCRAFT_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetReleaseVersionLimit(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__TRYGETRELEASEVERSIONLIMIT_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _TryParseReleaseVersion(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__TRYPARSERELEASEVERSION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsInReforging(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET))(a1);
		}

		::System::Boolean IsSubAffixBlockerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET))(this);
		}

		::System::Void SetSubAffixBlockerActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsSubAffixBlockerFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET))(this);
		}

		::System::Void ReportDataOnSwitchBlocker(::RPG::Client::RelicItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateReforgingRelicDataList(::System::Collections::Generic::IList_1<::BPGHDFAFMKH*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::BPGHDFAFMKH*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateReforgingRelicTypeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET))(this);
		}

		static ::RPG::Client::RelicModule* get_Instance()
		{
			return ((::RPG::Client::RelicModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* FetchRelicFilterPlan()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan_1(::System::UInt32 a1, ::RPG::Client::RelicFilterPlanIconData* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicFilterPlanIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* SendAddRelicFilterPlanCsReq(::RPG::Client::RelicFilterPlanData* a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>*(*)(::PVOID, ::RPG::Client::RelicFilterPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET))(this, a1);
		}

		::System::Void _OnCmdMarkRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdModifyRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAddRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLockRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdDiscardRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicSmartSuit::PlanDataManager* get_PlanDataManager()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_PlanDataManager(::RPG::Client::RelicSmartSuit::PlanDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET))(this);
		}

		::System::Void set_PinInfoRecorder(::RPG::Client::RelicSmartSuit::PinInfoRecorder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinInfoRecorder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestRelicSmartSuitPageDatas(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_REQUESTRELICSMARTSUITPAGEDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OpenRelicSmartSuitDialog(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_OPENRELICSMARTSUITDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void _OnReconnectForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlersForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _OnCmdRelicSmartWearGetPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearAddPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearDeletePlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearGetPinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearDeletePinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET))(this, a1, a2);
		}

	};
}
