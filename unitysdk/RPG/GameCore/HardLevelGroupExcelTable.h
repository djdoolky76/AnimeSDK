#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7557F0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D754BA0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D754A30)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D754720)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7549D0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D754D40)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7547A0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D754D80)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D754F50)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D755490)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D754EB0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D754E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HardLevelGroupExcelTable_TypeDefinitionIndex = 14183;

	class HardLevelGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HardLevelGroupExcelTable")->GetStaticField(0x2AD90);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "HardLevelGroupExcelTable")->GetStaticField(0x2AD98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "HardLevelGroupExcelTable")->GetStaticField(0x2ADA0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HardLevelGroupExcelTable")->GetStaticField(0x8770);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HardLevelGroupExcelTable")->GetStaticField(0x8771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HardLevelGroupRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::HardLevelGroupRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HardLevelGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HardLevelGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
