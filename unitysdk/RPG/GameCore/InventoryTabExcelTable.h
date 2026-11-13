#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InventoryTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE98440)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE97940)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE97810)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE97500)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE977B0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE97A90)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE97580)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE97AD0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE97CA0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE98120)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE97C00)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE97B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabExcelTable_TypeDefinitionIndex = 13991;

	class InventoryTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "InventoryTabExcelTable")->GetStaticField(0xC8A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>**)UnitySDK::FromName("RPG.GameCore", "InventoryTabExcelTable")->GetStaticField(0xC8A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "InventoryTabExcelTable")->GetStaticField(0xC8B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "InventoryTabExcelTable")->GetStaticField(0x2AF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "InventoryTabExcelTable")->GetStaticField(0x2AF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InventoryTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::InventoryTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InventoryTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InventoryTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
