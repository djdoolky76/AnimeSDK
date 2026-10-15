#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D87A660)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8793F0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8791A0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D878DE0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D878F00)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D879130)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D879700)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D878F80)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D879930)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D878E90)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D879480)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D879740)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87A190)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D87A1E0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D87A130)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8798D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemExcelTable_TypeDefinitionIndex = 14464;

	class MessageItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D090);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D098);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D0A0);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D0A8);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D0B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D0B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x3D0C0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0xD1C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0xD1C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MessageItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::MessageItemRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MessageItemExcelTable_IndexKey a1, ::RPG::GameCore::MessageItemRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
