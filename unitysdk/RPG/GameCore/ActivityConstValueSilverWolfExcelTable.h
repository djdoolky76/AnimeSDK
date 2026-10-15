#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityConstValueSilverWolfRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D34F780)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D34EF80)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D34EE10)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D34EB00)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D34EDB0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D34F0F0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D34EB80)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D34F130)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34F300)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D34F460)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D34F260)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D34F1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex = 12356;

	class ActivityConstValueSilverWolfExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityConstValueSilverWolfExcelTable")->GetStaticField(0x3E250);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ActivityConstValueSilverWolfExcelTable")->GetStaticField(0x3E258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityConstValueSilverWolfExcelTable")->GetStaticField(0x3E260);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityConstValueSilverWolfExcelTable")->GetStaticField(0xD500);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityConstValueSilverWolfExcelTable")->GetStaticField(0xD501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityConstValueSilverWolfRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ActivityConstValueSilverWolfRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityConstValueSilverWolfRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConstValueSilverWolfRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
