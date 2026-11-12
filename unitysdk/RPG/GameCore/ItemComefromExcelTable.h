#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemComefromRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2B90)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E9A2080)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9A1F10)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9A1C00)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E9A1EB0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E9A2250)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A1C80)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A2290)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9A2460)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E9A27F0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9A23C0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9A2320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromExcelTable_TypeDefinitionIndex = 14022;

	class ItemComefromExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemComefromExcelTable")->GetStaticField(0x35A50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ItemComefromExcelTable")->GetStaticField(0x35A58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemComefromExcelTable")->GetStaticField(0x35A60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ItemComefromExcelTable")->GetStaticField(0xB670);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemComefromExcelTable")->GetStaticField(0xB671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComefromRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemComefromRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
