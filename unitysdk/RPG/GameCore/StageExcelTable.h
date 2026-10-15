#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StageExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB0CFE0)
#define RPG_GAMECORE_STAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB0CF50)
#define RPG_GAMECORE_STAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB0CD30)
#define RPG_GAMECORE_STAGEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1DB0CB20)
#define RPG_GAMECORE_STAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB0CC40)
#define RPG_GAMECORE_STAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB0CCC0)
#define RPG_GAMECORE_STAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB0AF00)
#define RPG_GAMECORE_STAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0AF40)
#define RPG_GAMECORE_STAGEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1DB0B2E0)
#define RPG_GAMECORE_STAGEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1DB0CBD0)
#define RPG_GAMECORE_STAGEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1DB0BB80)
#define RPG_GAMECORE_STAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0B0F0)
#define RPG_GAMECORE_STAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0C640)
#define RPG_GAMECORE_STAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB0C6A0)
#define RPG_GAMECORE_STAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB0C5E0)
#define RPG_GAMECORE_STAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0B280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageExcelTable_TypeDefinitionIndex = 15147;

	class StageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BC80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BC88);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StageRow*>**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BC90);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BC98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BCA0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::StageRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::StageRow*>**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BCA8);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x1BCB0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x63B0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StageExcelTable")->GetStaticField(0x63B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::StageExcelTable_IndexKey a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::StageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::StageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
