#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipUpgradeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D72D8F0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D72D0F0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D72CFC0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D72CCB0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D72CF60)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D72D280)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D72CD30)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D72D2C0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D72D490)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D72D5D0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D72D3F0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D72D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex = 13456;

	class GridFightEquipUpgradeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "GridFightEquipUpgradeConfigExcelTable")->GetStaticField(0x2600);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GridFightEquipUpgradeConfigExcelTable")->GetStaticField(0x2608);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "GridFightEquipUpgradeConfigExcelTable")->GetStaticField(0x2610);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GridFightEquipUpgradeConfigExcelTable")->GetStaticField(0x1E10);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GridFightEquipUpgradeConfigExcelTable")->GetStaticField(0x1E11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipUpgradeConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEquipUpgradeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GridFightEquipUpgradeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipUpgradeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
