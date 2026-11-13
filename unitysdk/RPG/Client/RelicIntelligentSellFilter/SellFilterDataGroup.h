#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCNPBIMBLMG;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicIntelligentSellFilter { class RelicMainPropertyFilter; }
namespace RPG::Client::RelicIntelligentSellFilter { class RelicRecommendSubPropertyFilter; }
namespace RPG::Client::RelicIntelligentSellFilter { class SellFilterDataGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D0912A0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x1D090070)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0900F0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET UNITYSDK_OFFSET(0x1D091250)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D090310)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D090260)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET UNITYSDK_OFFSET(0x1D090B60)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET UNITYSDK_OFFSET(0x1D0911E0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET UNITYSDK_OFFSET(0x1D0902C0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0905B0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET UNITYSDK_OFFSET(0x1D090EC0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET UNITYSDK_OFFSET(0x1D091010)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET UNITYSDK_OFFSET(0x1D0908F0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET UNITYSDK_OFFSET(0x1D090D60)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0x1D090620)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int SellFilterDataGroup_TypeDefinitionIndex = 76592;

	class SellFilterDataGroup : public ::System::Object
	{
	public:
		::RPG::Client::RelicIntelligentSellFilter::RelicMainPropertyFilter* RelicMainPropertyFilter; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MCNPBIMBLMG*>* _RelicPropertyFilterCache; // 0x18
		::RPG::Client::RelicIntelligentSellFilter::RelicRecommendSubPropertyFilter* RecommendSubPropertyFilter; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicItemData*, ::System::UInt32>* _RelicItemDataMatchTypeCache; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreReleaseAvatarRecommendSetIDs; // 0x30
		::System::UInt32 _LowRarity; // 0x38
		::System::Boolean IsOpenProtect; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicIntelligentSellFilter::SellFilterDataGroup* Create()
		{
			return ((::RPG::Client::RelicIntelligentSellFilter::SellFilterDataGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET))();
		}

		::System::UInt32 get_FilterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET))(this);
		}

		::System::Void OpenProtect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetFilterItemList(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET))(this, a1, a2);
		}

		::System::Void InitPrereleaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET))(this);
		}

		::System::Void _PrecomputeFilterCache(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRelicMatchType(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurrentVersionRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET))(this, a1);
		}

		::System::Boolean _IsFilterMatch(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET))(this, a1);
		}

		::System::Boolean _IsRelicItemDataValid(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET))(this, a1);
		}

		::System::Void StartFilterCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCloseAllFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET))(this);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET))(this);
		}

	};
}
