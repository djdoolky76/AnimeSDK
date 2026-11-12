#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StatusExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED34630)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1ED34290)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED34200)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED33FE0)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1ED33DD0)
#define RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1ED33EF0)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED33F70)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1ED32810)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED32850)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1ED32BF0)
#define RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1ED33E80)
#define RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1ED33170)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1ED345F0)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED32A00)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED33900)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1ED33950)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1ED338A0)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED32B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusExcelTable_TypeDefinitionIndex = 15337;

	class StatusExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DD80);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__ModifierToStatusMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DD88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DD90);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DD98);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DDA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StatusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StatusRow*>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DDA8);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::StatusRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::StatusRow*>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DDB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x1DDB8);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x6740);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StatusExcelTable")->GetStaticField(0x6741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::StatusExcelTable_IndexKey a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StatusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::StatusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::StatusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::StatusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::StatusRow* GetByModifierName(::System::String* a1)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
