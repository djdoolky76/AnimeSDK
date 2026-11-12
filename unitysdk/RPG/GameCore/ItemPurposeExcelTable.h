#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemPurposeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DDD90)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E9DD4B0)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9DD340)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9DD030)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E9DD2E0)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E9DD640)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9DD0B0)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9DD680)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9DD850)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E9DDA20)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9DD7B0)
#define RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9DD710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemPurposeExcelTable_TypeDefinitionIndex = 14033;

	class ItemPurposeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ItemPurposeExcelTable")->GetStaticField(0x37600);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemPurposeExcelTable")->GetStaticField(0x37608);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemPurposeExcelTable")->GetStaticField(0x37610);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ItemPurposeExcelTable")->GetStaticField(0xBF50);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemPurposeExcelTable")->GetStaticField(0xBF51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemPurposeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemPurposeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemPurposeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemPurposeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemPurposeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
