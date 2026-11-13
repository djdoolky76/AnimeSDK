#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionVersionConstRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EF6D0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E6EEE80)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E6EED50)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E6EEA40)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E6EECF0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6EF010)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6EEAC0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6EF050)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6EF220)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E6EF3B0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E6EF180)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6EF0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionVersionConstExcelTable_TypeDefinitionIndex = 14322;

	class MissionVersionConstExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>**)UnitySDK::FromName("RPG.GameCore", "MissionVersionConstExcelTable")->GetStaticField(0x411D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MissionVersionConstExcelTable")->GetStaticField(0x411D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MissionVersionConstExcelTable")->GetStaticField(0x411E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MissionVersionConstExcelTable")->GetStaticField(0xD120);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MissionVersionConstExcelTable")->GetStaticField(0xD121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionVersionConstRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MissionVersionConstRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionVersionConstRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionVersionConstRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
