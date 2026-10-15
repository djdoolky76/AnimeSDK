#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MonsterExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8B4850)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8B2070)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8B1E20)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D8B1A60)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x1D8B4750)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D8B4820)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8B1B80)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8B1DB0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8B2370)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B1C00)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D8B25A0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D8B1B10)
#define RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D8B2100)
#define RPG_GAMECORE_MONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B23B0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B4280)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8B42D0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8B4220)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8B2540)

namespace RPG::GameCore
{
	class MonsterExcelTable : public ::System::Object
	{
	public:
		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C70);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MonsterRow*>**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C88);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C90);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MonsterRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MonsterRow*>**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25C98);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x25CA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x82F0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MonsterExcelTable")->GetStaticField(0x82F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MonsterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MonsterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MonsterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MonsterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MonsterExcelTable_IndexKey a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::RPG::GameCore::MonsterRank GetMonsterRank(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET))(a1);
		}

		static ::System::UInt32 GetMonsterUniqueID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET))(a1);
		}

	};
}
