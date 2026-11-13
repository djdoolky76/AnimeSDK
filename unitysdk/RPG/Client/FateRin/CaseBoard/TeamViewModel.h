#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
class LJMKNOKMPKC;
class LMKIOMMDEJI;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BD940)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E0BEE70)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1E0BEE50)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1E0BEE30)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1E0BEE10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET UNITYSDK_OFFSET(0x1E0BEEE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1E0BEDF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1E0BEDD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET UNITYSDK_OFFSET(0x1E0BAF60)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1E0BEE60)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1E0BEE40)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1E0BEE20)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1E0BEE00)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1E0BEDE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x1E0BF110)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E0BEFD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0x1E0BF1C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E0BF170)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET UNITYSDK_OFFSET(0x1E0BEF50)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamViewModel_TypeDefinitionIndex = 83595;

	class TeamViewModel : public ::System::Object
	{
	public:
		::LJMKNOKMPKC* _AvatarFactory; // 0x10
		::System::String* _OverrideServantClass_k__BackingField; // 0x18
		::LMKIOMMDEJI* _CaseBoardService; // 0x20
		::System::String* _TeamName_k__BackingField; // 0x28
		::RPG::Client::TextID _OverrideServantTab_k__BackingField; // 0x30
		::RPG::GameCore::FateRinCaseBoardTeamType _TeamType_k__BackingField; // 0x40
		::System::Boolean _IsShow_k__BackingField; // 0x44
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
