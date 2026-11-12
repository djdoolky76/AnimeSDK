#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA94CA0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA93A30)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA937E0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1EA93420)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA93540)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA93770)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA93D40)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA935C0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1EA93F70)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1EA934D0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1EA93AC0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA93D80)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA947D0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA94820)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA94770)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA93F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemExcelTable_TypeDefinitionIndex = 14619;

	class MessageItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48CE0);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48CE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48CF0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MessageItemRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48CF8);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48D00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48D08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0x48D10);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0xEF80);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemExcelTable")->GetStaticField(0xEF81);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MessageItemRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
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
