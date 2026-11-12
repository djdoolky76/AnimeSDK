#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE4B320)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETCONDITIONMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1EE4B020)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE4A6E0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE4A5B0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETLOCKVISITORIDS_OFFSET UNITYSDK_OFFSET(0x1EE4AF60)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETUNLOCKVISITORIDS_OFFSET UNITYSDK_OFFSET(0x1EE4A830)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE4A4D0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE4A550)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE49980)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE499C0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1EE4B060)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE49BF0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE49DC0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE4A1B0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE49D20)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE49C80)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEADDTODICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EE4B150)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EE4A8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigExcelTable_TypeDefinitionIndex = 15524;

	class TrainVisitorConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A700);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__MissionLockVisitors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A708);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A710);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A718);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__MissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A720);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__MissionUnlockVisitors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x2A728);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x8A10);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x8A11);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TrainVisitorConfigExcelTable")->GetStaticField(0x8A12);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TrainVisitorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TrainVisitorConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainVisitorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockVisitorIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETUNLOCKVISITORIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetLockVisitorIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETLOCKVISITORIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetConditionMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETCONDITIONMISSIONIDS_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _SafeAddToDictionary(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEADDTODICTIONARY_OFFSET))(a1, a2, a3);
		}

	};
}
