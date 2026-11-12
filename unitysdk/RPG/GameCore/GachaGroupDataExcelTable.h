#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaGroupDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9068D0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E905970)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E905800)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETGROUPIDBYGACHAID_OFFSET UNITYSDK_OFFSET(0x1E906240)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9054F0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E9057A0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E905AC0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E905570)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1E906840)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E905B00)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E905CD0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E905F20)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E905C30)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E905B90)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E9063C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupDataExcelTable_TypeDefinitionIndex = 13434;

	class GachaGroupDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x284C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x284C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>**)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x284D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__GachaIDToGroupID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x284D8);
		}

		static ::System::UInt32* StaticGet_SINGLE_GROUP_OFFSET()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x8400);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x8404);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x8405);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GachaGroupDataExcelTable")->GetStaticField(0x8406);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GachaGroupDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GachaGroupDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GachaGroupDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaGroupDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetGroupIDByGachaID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETGROUPIDBYGACHAID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
