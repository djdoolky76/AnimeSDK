#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerMixTagRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6229C0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D6221E0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D6220B0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D621DA0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D622050)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D622330)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D621E20)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D622370)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D622540)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D6226A0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D6224A0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D622400)

namespace RPG::GameCore
{
	class DrinkMakerMixTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x220A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x220A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x220B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x7A30);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x7A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerMixTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerMixTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerMixTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerMixTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
