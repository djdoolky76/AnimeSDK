#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleConditionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C30AFE0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C30A5E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C30A470)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C30A160)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C30A410)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C30A770)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C30A1E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C30A7B0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C30A980)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C30AC70)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C30A8E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C30A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleConditionConfigExcelTable_TypeDefinitionIndex = 12917;

	class BattleConditionConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "BattleConditionConfigExcelTable")->GetStaticField(0x59500);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "BattleConditionConfigExcelTable")->GetStaticField(0x59508);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "BattleConditionConfigExcelTable")->GetStaticField(0x59510);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleConditionConfigExcelTable")->GetStaticField(0x13030);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "BattleConditionConfigExcelTable")->GetStaticField(0x13031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleConditionConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleConditionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleConditionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
