#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PerformanceEExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8CDFD0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8CCCB0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8CCA60)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D8CC6A0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8CC7C0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8CC9F0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8CCFC0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CC840)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D8CD1F0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D8CC750)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x1D8CDFA0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D8CCD40)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CD000)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CDAD0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8CDB20)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8CDA70)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CD190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEExcelTable_TypeDefinitionIndex = 14333;

	class PerformanceEExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53620);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53628);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53630);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53638);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53640);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceERow*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53648);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x53650);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x129D0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PerformanceEExcelTable")->GetStaticField(0x129D1);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
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
