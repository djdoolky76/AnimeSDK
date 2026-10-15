#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSpecialSkillTreeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4312D0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4309E0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D430870)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D430560)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D430810)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D430B80)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4305E0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D430BC0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D430D90)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D430F70)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D430CF0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D430C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex = 12731;

	class AvatarSpecialSkillTreeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarSpecialSkillTreeExcelTable")->GetStaticField(0x52950);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "AvatarSpecialSkillTreeExcelTable")->GetStaticField(0x52958);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarSpecialSkillTreeExcelTable")->GetStaticField(0x52960);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AvatarSpecialSkillTreeExcelTable")->GetStaticField(0x12500);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarSpecialSkillTreeExcelTable")->GetStaticField(0x12501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSpecialSkillTreeRow* GetData(::System::UInt32 a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
		{
			return ((::RPG::GameCore::AvatarSpecialSkillTreeRow*(*)(::System::UInt32, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSpecialSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSpecialSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
