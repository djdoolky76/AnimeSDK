#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5B9F10)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5B93F0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5B9280)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5B8F70)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5B9220)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5B9580)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B8FF0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B95C0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B9790)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5B9BA0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5B96F0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5B9650)

namespace RPG::GameCore
{
	class ClockParkBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkBuffExcelTable")->GetStaticField(0x19B90);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ClockParkBuffExcelTable")->GetStaticField(0x19B98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkBuffExcelTable")->GetStaticField(0x19BA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ClockParkBuffExcelTable")->GetStaticField(0x5D70);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ClockParkBuffExcelTable")->GetStaticField(0x5D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkBuffRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
