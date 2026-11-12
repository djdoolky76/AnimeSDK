#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89F710)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E89EEA0)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E89ED70)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E89EA60)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E89ED10)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E89EFF0)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E89EAE0)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E89F030)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E89F200)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E89F3F0)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E89F160)
#define RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E89F0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionGroupExcelTable_TypeDefinitionIndex = 13330;

	class ExpeditionGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "ExpeditionGroupExcelTable")->GetStaticField(0x16EB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ExpeditionGroupExcelTable")->GetStaticField(0x16EB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ExpeditionGroupExcelTable")->GetStaticField(0x16EC0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ExpeditionGroupExcelTable")->GetStaticField(0x4BF0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ExpeditionGroupExcelTable")->GetStaticField(0x4BF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpeditionGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
