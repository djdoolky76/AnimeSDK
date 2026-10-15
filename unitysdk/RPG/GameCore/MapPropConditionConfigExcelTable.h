#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D82E700)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D82DDC0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D82DC90)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D82D980)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D82DC30)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D82DF10)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D82DA00)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D82DF50)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82E120)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D82E3E0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D82E080)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D82DFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapPropConditionConfigExcelTable_TypeDefinitionIndex = 12577;

	class MapPropConditionConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "MapPropConditionConfigExcelTable")->GetStaticField(0x36A40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MapPropConditionConfigExcelTable")->GetStaticField(0x36A48);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MapPropConditionConfigExcelTable")->GetStaticField(0x36A50);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MapPropConditionConfigExcelTable")->GetStaticField(0xB820);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MapPropConditionConfigExcelTable")->GetStaticField(0xB821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapPropConditionConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapPropConditionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapPropConditionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
