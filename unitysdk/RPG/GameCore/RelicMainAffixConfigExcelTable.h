#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23BD00)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F23B350)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F23B220)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F23AF10)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F23B1C0)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F23B4F0)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23AF90)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23B530)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F23B700)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F23B9A0)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F23B660)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23B5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixConfigExcelTable_TypeDefinitionIndex = 14790;

	class RelicMainAffixConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixConfigExcelTable")->GetStaticField(0x44780);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixConfigExcelTable")->GetStaticField(0x44788);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixConfigExcelTable")->GetStaticField(0x44790);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixConfigExcelTable")->GetStaticField(0xDA60);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixConfigExcelTable")->GetStaticField(0xDA61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicMainAffixConfigRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RelicMainAffixConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicMainAffixConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
