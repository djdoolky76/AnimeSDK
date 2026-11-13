#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA9D0D0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA9C7C0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA9C650)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA9C340)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA9C5F0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA9C910)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA9C3C0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA9C950)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA9CB20)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA9CDB0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA9CA80)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA9C9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionQuestExcelTable_TypeDefinitionIndex = 12574;

	class ActivityTelevisionQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ActivityTelevisionQuestExcelTable")->GetStaticField(0xBD60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityTelevisionQuestExcelTable")->GetStaticField(0xBD68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityTelevisionQuestExcelTable")->GetStaticField(0xBD70);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityTelevisionQuestExcelTable")->GetStaticField(0x1770);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityTelevisionQuestExcelTable")->GetStaticField(0x1771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityTelevisionQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
