#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlaneEventExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D91FDF0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D91EB60)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D91E910)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D91E550)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D91E670)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D91E8A0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D91EF10)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91E6F0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D91F140)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D91E600)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D91EC10)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91EF50)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91F8C0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D91F910)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D91F860)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91F0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaneEventExcelTable_TypeDefinitionIndex = 14069;

	class PlaneEventExcelTable : public ::System::Object
	{
	public:
		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48760);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48768);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48770);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48778);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48780);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48788);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x48790);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x111B0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlaneEventExcelTable")->GetStaticField(0x111B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PlaneEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlaneEventRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlaneEventRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::PlaneEventRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PlaneEventExcelTable_IndexKey a1, ::RPG::GameCore::PlaneEventRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlaneEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
