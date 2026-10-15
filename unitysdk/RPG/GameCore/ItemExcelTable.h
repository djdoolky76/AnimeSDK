#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ItemExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7982B0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D7965F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7963A0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D795FE0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D796100)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET UNITYSDK_OFFSET(0x1D798060)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET UNITYSDK_OFFSET(0x1D798110)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x1D798230)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET UNITYSDK_OFFSET(0x1D798290)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D796330)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D796900)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1D7980C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET UNITYSDK_OFFSET(0x1D798170)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET UNITYSDK_OFFSET(0x1D7982A0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x1D7981D0)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D796180)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D796B30)
#define RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D796090)
#define RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D796680)
#define RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D796940)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D797B90)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D797BE0)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D797B30)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D796AD0)

namespace RPG::GameCore
{
	class ItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7D0);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7D8);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7E0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::ItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::ItemRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7E8);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::ItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::ItemRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D7F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x2D800);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x9490);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemExcelTable")->GetStaticField(0x9491);
		}

		// static const ::System::Object _CREDIT_ITEM_ID; // 0x0
		// static const ::System::Object _TRACK_OF_DESTINY_ITEM_ID; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::ItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::ItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::ItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::ItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::ItemExcelTable_IndexKey a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarExp(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarRank(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET))(a1);
		}

		static ::System::Boolean IsTracePath(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsWeeklyMonsterDrop(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsCommonMonsterDrop(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsCredit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET))(a1);
		}

		static ::System::Boolean IsTrackOfDestiny(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET))(a1);
		}

		static ::System::Boolean IsItemSubType(::System::UInt32 a1, ::RPG::GameCore::ItemSubType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET))(a1, a2);
		}

	};
}
