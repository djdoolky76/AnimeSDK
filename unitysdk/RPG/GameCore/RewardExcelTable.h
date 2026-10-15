#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RewardExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_REWARDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D99BBA0)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D99A170)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D999F20)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D999B60)
#define RPG_GAMECORE_REWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D999C80)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D999EB0)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D99A480)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D999D00)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D99A6B0)
#define RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D999C10)
#define RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D99A200)
#define RPG_GAMECORE_REWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D99A4C0)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D99B6D0)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D99B720)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D99B670)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D99A650)

namespace RPG::GameCore
{
	class RewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RewardRow*>**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531D8);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531E0);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531E8);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x531F8);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::RewardRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::RewardRow*>**)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x53200);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x12760);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RewardExcelTable")->GetStaticField(0x12761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::RewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::RewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::RewardRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::RewardExcelTable_IndexKey a1, ::RPG::GameCore::RewardRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
