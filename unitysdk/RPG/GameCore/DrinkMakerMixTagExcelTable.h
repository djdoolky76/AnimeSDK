#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerMixTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5F4F40)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5F4760)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5F4630)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5F4320)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5F45D0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5F48B0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5F43A0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5F48F0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5F4AC0)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5F4C20)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5F4A20)
#define RPG_GAMECORE_DRINKMAKERMIXTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5F4980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerMixTagExcelTable_TypeDefinitionIndex = 13161;

	class DrinkMakerMixTagExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x207A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x207A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerMixTagRow*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x207B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x7420);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerMixTagExcelTable")->GetStaticField(0x7421);
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
