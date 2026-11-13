#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidLimitConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F225B80)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F225140)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F224FD0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F224CC0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F224F70)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F2252D0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F224D40)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F225310)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F2254E0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F225810)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F225440)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F2253A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidLimitConditionExcelTable_TypeDefinitionIndex = 14751;

	class RaidLimitConditionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RaidLimitConditionExcelTable")->GetStaticField(0x434C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>**)UnitySDK::FromName("RPG.GameCore", "RaidLimitConditionExcelTable")->GetStaticField(0x434C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RaidLimitConditionExcelTable")->GetStaticField(0x434D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RaidLimitConditionExcelTable")->GetStaticField(0xD7E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RaidLimitConditionExcelTable")->GetStaticField(0xD7E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RaidLimitConditionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RaidLimitConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RaidLimitConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidLimitConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
