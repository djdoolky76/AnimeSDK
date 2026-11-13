#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HandbookGrowthGuideEquipmentData; }
namespace RPG::Client { class HandbookGrowthGuideEquipmentDataItem; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicRecommendSuitData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFORINNERSET_OFFSET UNITYSDK_OFFSET(0x1C5CA690)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFOROUTERSET_OFFSET UNITYSDK_OFFSET(0x1C5CA870)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CD3B0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_FAKERECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C5CAAD0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C5CAF70)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C5CB0E0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0x1C5CE510)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_EXISTINGRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C5CE530)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_VALIDRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5CE550)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0x1C5CE520)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_EXISTINGRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C5CE540)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_VALIDRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5CE560)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__BUILDSETPERCENTMAP_OFFSET UNITYSDK_OFFSET(0x1C5CE210)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CALCULATERELICPERCENT_OFFSET UNITYSDK_OFFSET(0x1C5CD510)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__PREPAREDATALIST_OFFSET UNITYSDK_OFFSET(0x1C5CDBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentData_TypeDefinitionIndex = 67545;

	class HandbookGrowthGuideEquipmentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _GuideIDToRelicInfoDict; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* _DataList_k__BackingField; // 0x18
		::System::UInt32 _ValidRelicCount_k__BackingField; // 0x20
		::System::Single _RecommendLimit; // 0x24
		::System::Boolean _ExistingRecommend_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::Client::RelicRecommendData* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::HandbookGrowthGuideEquipmentData* CreateForInnerSet(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFORINNERSET_OFFSET))(a1, a2);
		}

		static ::RPG::Client::HandbookGrowthGuideEquipmentData* CreateForOuterSet(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFOROUTERSET_OFFSET))(a1, a2);
		}

		::System::Void FakeRecommend(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_FAKERECOMMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetRecommendPercentageByGuideID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET))(this, a1);
		}

		::System::Single GetRecommendPercentage(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGE_OFFSET))(this, a1);
		}

		::System::Void _CalculateRelicPercent(::RPG::Client::RelicRecommendData* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CALCULATERELICPERCENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _BuildSetPercentMap(::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__BUILDSETPERCENTMAP_OFFSET))(this, a1, a2);
		}

		::System::Void _PrepareDataList(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__PREPAREDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* get_DataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_DATALIST_OFFSET))(this);
		}

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_DATALIST_OFFSET))(this, a1);
		}

		::System::Boolean get_ExistingRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_EXISTINGRECOMMEND_OFFSET))(this);
		}

		::System::Void set_ExistingRecommend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_EXISTINGRECOMMEND_OFFSET))(this, a1);
		}

		::System::UInt32 get_ValidRelicCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_VALIDRELICCOUNT_OFFSET))(this);
		}

		::System::Void set_ValidRelicCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_VALIDRELICCOUNT_OFFSET))(this, a1);
		}

	};
}
