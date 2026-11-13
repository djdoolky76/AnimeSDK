#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MenuItemExtraInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D8440)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E6D7B00)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E6D7990)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E6D7680)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E6D7930)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6D7C90)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D7700)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D7CD0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6D7EA0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E6D80D0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E6D7E00)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemExtraInfoExcelTable_TypeDefinitionIndex = 13213;

	class MenuItemExtraInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MenuItemExtraInfoExcelTable")->GetStaticField(0x3E950);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MenuItemExtraInfoExcelTable")->GetStaticField(0x3E958);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>**)UnitySDK::FromName("RPG.GameCore", "MenuItemExtraInfoExcelTable")->GetStaticField(0x3E960);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MenuItemExtraInfoExcelTable")->GetStaticField(0xC880);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MenuItemExtraInfoExcelTable")->GetStaticField(0xC881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MenuItemExtraInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MenuItemExtraInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MenuItemExtraInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MenuItemExtraInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
