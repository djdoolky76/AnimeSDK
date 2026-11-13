#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemUseBuffDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D922F60)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9221A0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D922030)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D921D20)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D921FD0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D922330)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D921DA0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D922370)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D922540)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D922BF0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9224A0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D922400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseBuffDataExcelTable_TypeDefinitionIndex = 14035;

	class ItemUseBuffDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ItemUseBuffDataExcelTable")->GetStaticField(0x30AB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ItemUseBuffDataExcelTable")->GetStaticField(0x30AB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>**)UnitySDK::FromName("RPG.GameCore", "ItemUseBuffDataExcelTable")->GetStaticField(0x30AC0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ItemUseBuffDataExcelTable")->GetStaticField(0x9970);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ItemUseBuffDataExcelTable")->GetStaticField(0x9971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemUseBuffDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemUseBuffDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemUseBuffDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemUseBuffDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
