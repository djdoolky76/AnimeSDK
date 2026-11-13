#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HudTemplateConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE7F610)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE7ED30)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE7EBC0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE7E8B0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE7EB60)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE7EE80)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE7E930)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE7EEC0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE7F090)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE7F2F0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE7EFF0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE7EF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HudTemplateConfigExcelTable_TypeDefinitionIndex = 13930;

	class HudTemplateConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HudTemplateConfigExcelTable")->GetStaticField(0x34DB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "HudTemplateConfigExcelTable")->GetStaticField(0x34DB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "HudTemplateConfigExcelTable")->GetStaticField(0x34DC0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HudTemplateConfigExcelTable")->GetStaticField(0xA4B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HudTemplateConfigExcelTable")->GetStaticField(0xA4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HudTemplateConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HudTemplateConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HudTemplateConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HudTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
