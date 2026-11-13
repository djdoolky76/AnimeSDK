#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23F510)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F23EB20)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F23E9F0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F23E6E0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F23E990)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F23ECC0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23E760)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23ED00)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F23EED0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F23F1B0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F23EE30)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23ED90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixConfigExcelTable_TypeDefinitionIndex = 14792;

	class RelicSubAffixConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "RelicSubAffixConfigExcelTable")->GetStaticField(0x449B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RelicSubAffixConfigExcelTable")->GetStaticField(0x449B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RelicSubAffixConfigExcelTable")->GetStaticField(0x449C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicSubAffixConfigExcelTable")->GetStaticField(0xDA80);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RelicSubAffixConfigExcelTable")->GetStaticField(0xDA81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicSubAffixConfigRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RelicSubAffixConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicSubAffixConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSubAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
