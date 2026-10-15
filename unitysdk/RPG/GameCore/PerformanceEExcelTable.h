#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PerformanceEExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8FB990)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8FA670)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8FA420)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D8FA060)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8FA180)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8FA3B0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8FA980)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8FA200)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D8FABB0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D8FA110)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x1D8FB960)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D8FA700)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8FA9C0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FB490)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8FB4E0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8FB430)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8FAB50)

namespace RPG::GameCore
{
	class PerformanceEExcelTable : public ::System::Object
	{
	public:
		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455B0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455C0);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455D8);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x455E0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x107C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x107C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceERow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceERow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceERow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PerformanceEExcelTable_IndexKey a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void SetRowData(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETROWDATA_OFFSET))(a1);
		}

	};
}
