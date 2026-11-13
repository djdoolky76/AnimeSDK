#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F236B50)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F2358D0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F2357A0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET UNITYSDK_OFFSET(0x1F236840)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET UNITYSDK_OFFSET(0x1F236400)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F235490)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F235740)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F235A20)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F235510)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1F236310)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F235A60)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F235C30)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F235FF0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET UNITYSDK_OFFSET(0x1F236A80)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET UNITYSDK_OFFSET(0x1F2368B0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F235B90)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F235AF0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F2364D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicConfigExcelTable_TypeDefinitionIndex = 14788;

	class RelicConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>** StaticGet__SetIDAndTypeAndRarityToRelicID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x17620);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>** StaticGet__SetIDToRelicTypeItemDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x17628);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x17630);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x17638);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x17640);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x54A0);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x54A1);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicConfigExcelTable")->GetStaticField(0x54A2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* GetSetRelicTypeItemDict(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET))(a1);
		}

		static ::System::UInt32 GetRelicIDBySetIDAndTypeAndRarity(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _InitSetIDToRelicTypeItem(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET))(a1);
		}

		static ::System::Void _InitSetIDAndTypeAndRarityToRelicID(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET))(a1);
		}

	};
}
