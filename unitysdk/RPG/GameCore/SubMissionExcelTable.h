#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SubMissionExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB30AD0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB2FB30)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB2F8E0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1DB2F520)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB2F640)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB2F870)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB2FE60)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB2F6C0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1DB30090)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1DB2F5D0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1DB2FBC0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB2FEA0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB305F0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB30650)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB30590)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB30030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionExcelTable_TypeDefinitionIndex = 14140;

	class SubMissionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F850);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F858);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F860);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F868);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F870);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F878);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>**)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x1F880);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x7330);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SubMissionExcelTable")->GetStaticField(0x7331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::SubMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::SubMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SubMissionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SubMissionExcelTable_IndexKey a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
