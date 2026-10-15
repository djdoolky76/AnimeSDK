#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
class LJMKNOKMPKC;
class LMKIOMMDEJI;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF995A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCF9AB20)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCF9AB00)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0xCF9AAE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0xCF9AAC0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET UNITYSDK_OFFSET(0xCF9AB90)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0xCF9AAA0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xCF9AA80)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET UNITYSDK_OFFSET(0xCF9AC80)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCF9AB10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0xCF9AAF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0xCF9AAD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0xCF9AAB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xCF9AA90)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xCF9AE10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xCF9ACD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0xCF9AEC0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCF9AE70)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET UNITYSDK_OFFSET(0xCF9AC00)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamViewModel_TypeDefinitionIndex = 80816;

	class TeamViewModel : public ::System::Object
	{
	public:
		::LMKIOMMDEJI* _CaseBoardService; // 0x10
		::System::String* _TeamName_k__BackingField; // 0x18
		::LJMKNOKMPKC* _AvatarFactory; // 0x20
		::System::String* _OverrideServantClass_k__BackingField; // 0x28
		::RPG::GameCore::FateRinCaseBoardTeamType _TeamType_k__BackingField; // 0x30
		::System::Boolean _IsShow_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _OverrideServantTab_k__BackingField; // 0x38
		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1, ::LMKIOMMDEJI* a2, ::LJMKNOKMPKC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*, ::LMKIOMMDEJI*, ::LJMKNOKMPKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FateRinCaseBoardTeamType get_TeamType()
		{
			return ((::RPG::GameCore::FateRinCaseBoardTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET))(this);
		}

		::System::Void set_TeamType(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET))(this, a1);
		}

		::System::String* get_TeamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET))(this);
		}

		::System::Void set_TeamName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OverrideServantTab()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET))(this);
		}

		::System::Void set_OverrideServantTab(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET))(this, a1);
		}

		::System::String* get_OverrideServantClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET))(this);
		}

		::System::Void set_OverrideServantClass(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_RinRoast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET))(this);
		}

		::System::Void SetShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET))(this, a1);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}

		::System::Void ShowDetailPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET))(this);
		}

		::System::Void _OnUpdate(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET))(this, a1);
		}

		::System::String* _GetTeamName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET))(this, a1);
		}

		::System::Void _SetupBasicInfo(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET))(this, a1);
		}

	};
}
