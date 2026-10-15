#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkProgressRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5BFB90)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5BF390)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5BF260)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5BEF50)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5BF200)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5BF520)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BEFD0)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BF560)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BF730)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5BF870)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5BF690)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BF5F0)

namespace RPG::GameCore
{
	class ClockParkProgressRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkProgressRewardExcelTable")->GetStaticField(0x1A5E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkProgressRewardExcelTable")->GetStaticField(0x1A5E8);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ClockParkProgressRewardExcelTable")->GetStaticField(0x1A5F0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ClockParkProgressRewardExcelTable")->GetStaticField(0x5FB0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ClockParkProgressRewardExcelTable")->GetStaticField(0x5FB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkProgressRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkProgressRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkProgressRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkProgressRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
