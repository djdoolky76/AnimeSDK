#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8E90)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E9A8A10)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9A88A0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9A8590)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E9A8840)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E9A8BE0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A8610)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A8C20)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9A8DF0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E9D8AF0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9A8D50)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A8CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemCureInfoDataExcelTable_TypeDefinitionIndex = 14037;

	class ItemCureInfoDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ItemCureInfoDataExcelTable")->GetStaticField(0x36170);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemCureInfoDataExcelTable")->GetStaticField(0x36178);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemCureInfoDataExcelTable")->GetStaticField(0x36180);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemCureInfoDataExcelTable")->GetStaticField(0xB8C0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ItemCureInfoDataExcelTable")->GetStaticField(0xB8C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemCureInfoDataRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemCureInfoDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemCureInfoDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemCureInfoDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
