#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentExpItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F5330)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F0F4AE0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F0F4970)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F0F4660)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F0F4910)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F0F4C70)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F0F46E0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F0F4CB0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F0F4E80)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F0F5010)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F0F4DE0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F0F4D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpItemExcelTable_TypeDefinitionIndex = 13319;

	class EquipmentExpItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "EquipmentExpItemExcelTable")->GetStaticField(0x1F2E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>**)UnitySDK::FromName("RPG.GameCore", "EquipmentExpItemExcelTable")->GetStaticField(0x1F2E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "EquipmentExpItemExcelTable")->GetStaticField(0x1F2F0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "EquipmentExpItemExcelTable")->GetStaticField(0x6990);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "EquipmentExpItemExcelTable")->GetStaticField(0x6991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentExpItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EquipmentExpItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentExpItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentExpItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
