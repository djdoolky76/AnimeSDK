#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhoneThemeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE4D8E0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE4CF40)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE4CDD0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE4CAC0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE4CD70)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE4D0D0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE4CB40)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE4D110)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE4D2E0)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE4D570)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE4D240)
#define RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE4D1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneThemeExcelTable_TypeDefinitionIndex = 14643;

	class PhoneThemeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PhoneThemeExcelTable")->GetStaticField(0x3B180);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PhoneThemeExcelTable")->GetStaticField(0x3B188);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>**)UnitySDK::FromName("RPG.GameCore", "PhoneThemeExcelTable")->GetStaticField(0x3B190);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PhoneThemeExcelTable")->GetStaticField(0xBC20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PhoneThemeExcelTable")->GetStaticField(0xBC21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneThemeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PhoneThemeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PhoneThemeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PhoneThemeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhoneThemeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
