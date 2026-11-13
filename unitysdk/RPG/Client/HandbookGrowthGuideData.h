#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HandbookGrowthGuideData; }
namespace RPG::Client { class HandbookGrowthGuideEquipmentData; }
namespace RPG::Client { class HandbookGrowthGuideMaterialData; }
namespace RPG::Client { class HandbookGuideData; }
namespace RPG::Client { class RogueAreaData; }
namespace RPG::Client { class RogueProgressInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C5CA310)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CA430)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C5CAA50)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C5CADD0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C5CB030)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1C5CB910)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB950)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C5CB990)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB930)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB970)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C5CA4E0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1C5CB920)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB960)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C5CB9A0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB940)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C5CB980)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET UNITYSDK_OFFSET(0x1C5CD1C0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0x1C5CBBF0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1C5CB2A0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1C5CB800)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1C5CC100)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1C5CCA40)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData_TypeDefinitionIndex = 67541;

	class HandbookGrowthGuideData : public ::System::Object
	{
	public:
		::RPG::Client::HandbookGrowthGuideEquipmentData* _OuterSetGuideData_k__BackingField; // 0x10
		::RPG::Client::HandbookGrowthGuideMaterialData* _MaterialGuideData_k__BackingField; // 0x18
		::RPG::Client::HandbookGrowthGuideEquipmentData* _InnerSetGuideData_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _RelicSetIDToGuideDataMap; // 0x28
		::System::Boolean _IsRelicExtractUnlocked_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _AvatarID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookGrowthGuideData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookGrowthGuideData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET))(this);
		}

		::System::Void FakeRelicRecommend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET))(this);
		}

		::System::Single GetRecommendPercentageByGuideID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET))(this, a1);
		}

		::System::Single GetRecommendPercentage(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideMaterialData* get_MaterialGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideMaterialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_MaterialGuideData(::RPG::Client::HandbookGrowthGuideMaterialData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideMaterialData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_InnerSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_InnerSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_OuterSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_OuterSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRelicExtractUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsRelicExtractUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void _InitRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueTournRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET))(this, a1);
		}

		::System::Void _InitVanillaRogueRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAreaData* _GetDisplayRogueAreaData(::RPG::Client::RogueProgressInfo* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID, ::RPG::Client::RogueProgressInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetSuitSetIDByItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET))(this, a1);
		}

	};
}
