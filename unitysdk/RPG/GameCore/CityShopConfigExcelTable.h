#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CityShopConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5B42B0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5B3850)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5B36E0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5B33D0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5B3680)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5B39E0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B3450)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B3A20)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B3BF0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5B3F40)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5B3B50)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B3AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopConfigExcelTable_TypeDefinitionIndex = 13061;

	class CityShopConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "CityShopConfigExcelTable")->GetStaticField(0x190B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "CityShopConfigExcelTable")->GetStaticField(0x190B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "CityShopConfigExcelTable")->GetStaticField(0x190C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "CityShopConfigExcelTable")->GetStaticField(0x5C70);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "CityShopConfigExcelTable")->GetStaticField(0x5C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CityShopConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CityShopConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CityShopConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CityShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
