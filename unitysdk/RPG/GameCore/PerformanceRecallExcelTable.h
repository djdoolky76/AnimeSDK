#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB19BA0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB182B0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB18180)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1EB18E60)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1EB194A0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EB19560)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EB195E0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1EB193E0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB17E70)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB18120)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB18400)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB17EF0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1EB199C0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB18440)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1EB197F0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB18610)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB18B40)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB18570)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB184D0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB19620)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB18F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallExcelTable_TypeDefinitionIndex = 14493;

	class PerformanceRecallExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF240);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__RecallHeight()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF248);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__SubCategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF258);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF260);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF268);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__UnlockMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF270);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToSubCategoryIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0xF278);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0x31E0);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0x31E1);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PerformanceRecallExcelTable")->GetStaticField(0x31E2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceRecallRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceRecallRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsByCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSubCategoryIDsByCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsBySubCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET))(a1);
		}

		static ::System::UInt32 GetRecallItemHeight(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallUnlockMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _SafeAddToDictionary(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddConditionMainMission(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
