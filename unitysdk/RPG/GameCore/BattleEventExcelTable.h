#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/BattleEventExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D45CA60)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D45B370)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D45B120)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D45AD60)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D45AE80)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D45B0B0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D45B670)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D45AF00)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D45B8A0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D45AE10)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D45B400)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D45B6B0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D45C590)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D45C5E0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D45C530)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D45B840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventExcelTable_TypeDefinitionIndex = 12854;

	class BattleEventExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384D0);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384E0);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x384F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0x38500);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0xC070);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleEventExcelTable")->GetStaticField(0xC071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::BattleEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::BattleEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleEventRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::BattleEventExcelTable_IndexKey a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
