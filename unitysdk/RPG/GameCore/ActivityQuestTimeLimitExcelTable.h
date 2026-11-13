#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestTimeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F3E0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA8E930)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA8E800)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA8E4F0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA8E7A0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA8EA80)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8E570)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8EAC0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8EC90)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA8F0C0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA8EBF0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8EB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex = 12370;

	class ActivityQuestTimeLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestTimeLimitExcelTable")->GetStaticField(0x4D280);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestTimeLimitExcelTable")->GetStaticField(0x4D288);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestTimeLimitExcelTable")->GetStaticField(0x4D290);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityQuestTimeLimitExcelTable")->GetStaticField(0xEB90);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityQuestTimeLimitExcelTable")->GetStaticField(0xEB91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestTimeLimitRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityQuestTimeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityQuestTimeLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
