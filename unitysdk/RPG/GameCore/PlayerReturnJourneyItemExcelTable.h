#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnJourneyItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB53090)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB52520)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB523B0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB520A0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB52350)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB526B0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB52120)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB526F0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB528C0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB52D20)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB52820)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB52780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex = 14694;

	class PlayerReturnJourneyItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlayerReturnJourneyItemExcelTable")->GetStaticField(0x578B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>**)UnitySDK::FromName("RPG.GameCore", "PlayerReturnJourneyItemExcelTable")->GetStaticField(0x578B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PlayerReturnJourneyItemExcelTable")->GetStaticField(0x578C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlayerReturnJourneyItemExcelTable")->GetStaticField(0x10980);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PlayerReturnJourneyItemExcelTable")->GetStaticField(0x10981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnJourneyItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnJourneyItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnJourneyItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnJourneyItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
