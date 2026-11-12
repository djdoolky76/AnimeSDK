#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63E9E0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E63DDA0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E63DC30)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E63D920)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E63DBD0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E63DEF0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E63D9A0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E63DF30)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E63E100)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E63E6C0)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E63E060)
#define RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E63DFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyExcelTable_TypeDefinitionIndex = 12813;

	class AvatarPropertyExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPropertyExcelTable")->GetStaticField(0x48010);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPropertyExcelTable")->GetStaticField(0x48018);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPropertyExcelTable")->GetStaticField(0x48020);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarPropertyExcelTable")->GetStaticField(0xEE30);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AvatarPropertyExcelTable")->GetStaticField(0xEE31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPropertyRow* GetData(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AvatarPropertyRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPropertyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPropertyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
