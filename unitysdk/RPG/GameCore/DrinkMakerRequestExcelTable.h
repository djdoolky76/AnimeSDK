#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8637B0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E862D80)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E862C10)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E862900)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E862BB0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E862ED0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E862980)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E862F10)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8630E0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E863490)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E863040)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E862FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerRequestExcelTable_TypeDefinitionIndex = 13225;

	class DrinkMakerRequestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerRequestExcelTable")->GetStaticField(0x1A040);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerRequestExcelTable")->GetStaticField(0x1A048);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "DrinkMakerRequestExcelTable")->GetStaticField(0x1A050);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerRequestExcelTable")->GetStaticField(0x54E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "DrinkMakerRequestExcelTable")->GetStaticField(0x54E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerRequestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerRequestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerRequestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerRequestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
