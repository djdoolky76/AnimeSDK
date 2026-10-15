#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkTalentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C70B0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5C66E0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5C6570)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5C6260)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5C6510)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5C6870)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5C62E0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5C68B0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C6A80)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5C6D40)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5C69E0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5C6940)

namespace RPG::GameCore
{
	class ClockParkTalentExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ClockParkTalentExcelTable")->GetStaticField(0x1B380);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkTalentExcelTable")->GetStaticField(0x1B388);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkTalentExcelTable")->GetStaticField(0x1B390);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ClockParkTalentExcelTable")->GetStaticField(0x6210);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ClockParkTalentExcelTable")->GetStaticField(0x6211);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkTalentRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
