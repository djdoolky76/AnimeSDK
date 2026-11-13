#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamLimitConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5C2430)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F5C22E0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F5C2170)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F5C2090)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F5C2110)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F5C1670)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5C16B0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5C18E0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5C1AB0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F5C1D70)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F5C1A10)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5C1970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitConditionExcelTable_TypeDefinitionIndex = 15435;

	class TeamLimitConditionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TeamLimitConditionExcelTable")->GetStaticField(0x22860);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TeamLimitConditionExcelTable")->GetStaticField(0x22868);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>**)UnitySDK::FromName("RPG.GameCore", "TeamLimitConditionExcelTable")->GetStaticField(0x22870);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TeamLimitConditionExcelTable")->GetStaticField(0x7D70);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TeamLimitConditionExcelTable")->GetStaticField(0x7D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TeamLimitConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamLimitConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TeamLimitConditionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeamLimitConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
