#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameplayGuideDataConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9252E0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETALLITEMIDSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1E924380)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E9238A0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E923770)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETTYPEALLENTRANCEIDS_OFFSET UNITYSDK_OFFSET(0x1E925060)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1E925120)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1E925160)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E923460)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E923710)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E9239F0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9234E0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1E9251A0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E923A30)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E923C00)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E924060)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E923B60)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E923AC0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E924440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideDataConfigExcelTable_TypeDefinitionIndex = 13448;

	class GameplayGuideDataConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29520);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TypeEntranceIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29528);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29530);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__ConditionSubMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29538);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__GuideItems()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29548);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__ConditionMainMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x29550);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x85B0);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x85B1);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GameplayGuideDataConfigExcelTable")->GetStaticField(0x85B2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideDataConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameplayGuideDataConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideDataConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllItemIDsByType(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETALLITEMIDSBYTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetTypeAllEntranceIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETTYPEALLENTRANCEIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_ConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONMAINMISSIONIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_ConditionSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONSUBMISSIONIDS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
