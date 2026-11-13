#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8D390)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA8CA90)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA8C920)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA8C610)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA8C8C0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA8CBE0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8C690)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8CC20)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8CDF0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA8D070)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA8CD50)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA8CCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardDataExcelTable_TypeDefinitionIndex = 12365;

	class ActivityQuestRewardDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestRewardDataExcelTable")->GetStaticField(0x3E360);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestRewardDataExcelTable")->GetStaticField(0x3E368);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ActivityQuestRewardDataExcelTable")->GetStaticField(0x3E370);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityQuestRewardDataExcelTable")->GetStaticField(0xC6D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityQuestRewardDataExcelTable")->GetStaticField(0xC6D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestRewardDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityQuestRewardDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityQuestRewardDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
