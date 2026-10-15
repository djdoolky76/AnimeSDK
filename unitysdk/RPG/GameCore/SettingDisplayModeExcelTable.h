#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SettingDisplayModeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DACB180)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DACAFD0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DACAE60)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DACAD80)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DACAE00)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DACA400)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACA440)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACA670)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DACA840)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DACAA10)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DACA7A0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACA700)

namespace RPG::GameCore
{
	class SettingDisplayModeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>**)UnitySDK::FromName("RPG.GameCore", "SettingDisplayModeExcelTable")->GetStaticField(0x162D0);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "SettingDisplayModeExcelTable")->GetStaticField(0x162D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SettingDisplayModeExcelTable")->GetStaticField(0x162E0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SettingDisplayModeExcelTable")->GetStaticField(0x53D0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SettingDisplayModeExcelTable")->GetStaticField(0x53D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingDisplayModeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingDisplayModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SettingDisplayModeRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::SettingDisplayModeRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
