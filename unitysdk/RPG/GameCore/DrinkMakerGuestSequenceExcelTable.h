#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85E420)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E85DBA0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E85DA30)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E85D720)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E85D9D0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E85DCF0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E85D7A0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E85DD30)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E85DF00)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E85E100)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E85DE60)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E85DDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex = 13255;

	class DrinkMakerGuestSequenceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerGuestSequenceExcelTable")->GetStaticField(0x19D90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerGuestSequenceExcelTable")->GetStaticField(0x19D98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerGuestSequenceExcelTable")->GetStaticField(0x19DA0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerGuestSequenceExcelTable")->GetStaticField(0x5460);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerGuestSequenceExcelTable")->GetStaticField(0x5461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerGuestSequenceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerGuestSequenceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestSequenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
