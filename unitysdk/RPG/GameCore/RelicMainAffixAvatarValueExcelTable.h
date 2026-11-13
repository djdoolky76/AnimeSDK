#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23ABD0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F23A090)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F239F20)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F239C10)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F239EC0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F23A220)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F239C90)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23A260)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F23A430)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F23A860)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F23A390)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F23A2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex = 10896;

	class RelicMainAffixAvatarValueExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixAvatarValueExcelTable")->GetStaticField(0x2EE90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixAvatarValueExcelTable")->GetStaticField(0x2EE98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>**)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixAvatarValueExcelTable")->GetStaticField(0x2EEA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixAvatarValueExcelTable")->GetStaticField(0x94C0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RelicMainAffixAvatarValueExcelTable")->GetStaticField(0x94C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicMainAffixAvatarValueRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicMainAffixAvatarValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicMainAffixAvatarValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
