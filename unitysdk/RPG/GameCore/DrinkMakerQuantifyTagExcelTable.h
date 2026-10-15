#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6247B0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D623F70)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D623E40)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D623B30)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D623DE0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D6240C0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D623BB0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D624100)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6242D0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D624490)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D624230)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D624190)

namespace RPG::GameCore
{
	class DrinkMakerQuantifyTagExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerQuantifyTagExcelTable")->GetStaticField(0x22170);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerQuantifyTagExcelTable")->GetStaticField(0x22178);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerQuantifyTagExcelTable")->GetStaticField(0x22180);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerQuantifyTagExcelTable")->GetStaticField(0x7A50);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerQuantifyTagExcelTable")->GetStaticField(0x7A51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerQuantifyTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerQuantifyTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerQuantifyTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
