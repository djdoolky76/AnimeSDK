#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client::Achievement { class AchievementViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCCE49C0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCCE4F20)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_ACHIEVEMENTICONPATH_OFFSET UNITYSDK_OFFSET(0xCCE51F0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xCCE5170)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xCCE5190)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xCCE51B0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCCE51D0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCCE5150)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_VIEWINDEX_OFFSET UNITYSDK_OFFSET(0xCCE5100)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_ACHIEVEMENTICONPATH_OFFSET UNITYSDK_OFFSET(0xCCE5200)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xCCE5180)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xCCE51A0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xCCE51C0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCCE51E0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xCCE5160)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementViewModel_TypeDefinitionIndex = 84990;

	class AchievementViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _RewardItems_k__BackingField; // 0x10
		::System::String* _AchievementIconPath_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::RPG::Client::TextID _HiddenDescription_k__BackingField; // 0x38
		::RPG::Client::TextID _Description_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Achievement::AchievementViewModel* Create(::RPG::Client::AchievementData* a1)
		{
			return ((::RPG::Client::Achievement::AchievementViewModel*(*)(::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Int32 get_ViewIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_VIEWINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_HiddenDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_HIDDENDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_HiddenDescription(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_HIDDENDESCRIPTION_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_REWARDITEMS_OFFSET))(this, a1);
		}

		::System::String* get_AchievementIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_GET_ACHIEVEMENTICONPATH_OFFSET))(this);
		}

		::System::Void set_AchievementIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTVIEWMODEL_SET_ACHIEVEMENTICONPATH_OFFSET))(this, a1);
		}

	};
}
