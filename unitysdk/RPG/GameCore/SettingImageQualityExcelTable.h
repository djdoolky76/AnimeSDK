#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SettingImageQualityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DACC050)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DACBEA0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DACBD30)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DACBC50)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DACBCD0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DACB2D0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACB310)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACB540)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DACB710)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DACB8E0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DACB670)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DACB5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingImageQualityExcelTable_TypeDefinitionIndex = 15096;

	class SettingImageQualityExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SettingImageQualityExcelTable")->GetStaticField(0x16360);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SettingImageQualityExcelTable")->GetStaticField(0x16368);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>**)UnitySDK::FromName("RPG.GameCore", "SettingImageQualityExcelTable")->GetStaticField(0x16370);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SettingImageQualityExcelTable")->GetStaticField(0x53E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SettingImageQualityExcelTable")->GetStaticField(0x53E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingImageQualityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingImageQualityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SettingImageQualityRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::SettingImageQualityRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
