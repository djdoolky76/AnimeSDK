#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class FightFestPaperRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPAPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FE0F0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADDESC_OFFSET UNITYSDK_OFFSET(0x1B307640)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1B3075F0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONBGPATH_OFFSET UNITYSDK_OFFSET(0x1B3075A0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONFGPATH_OFFSET UNITYSDK_OFFSET(0x1B307550)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2FE590)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWBGPATH_OFFSET UNITYSDK_OFFSET(0x1B307500)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWFGPATH_OFFSET UNITYSDK_OFFSET(0x1B3074B0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x1B307710)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0x1B3072C0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBER_OFFSET UNITYSDK_OFFSET(0x1B307250)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B2FE5E0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINBGPATHS_OFFSET UNITYSDK_OFFSET(0x1B307460)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINFGPATHS_OFFSET UNITYSDK_OFFSET(0x1B307410)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGEDESC_OFFSET UNITYSDK_OFFSET(0x1B3073A0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGETITLE_OFFSET UNITYSDK_OFFSET(0x1B307330)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1B3076B0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B306860)
#define RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x1B307870)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPaper_TypeDefinitionIndex = 65621;

	class FightFestPaper : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPaperRow* _Row; // 0x10
		::System::Void _ctor(::RPG::GameCore::FightFestPaperRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPaperRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_IssueNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_IssueNumberText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBERTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainPageTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainPageDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MainFgPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINFGPATHS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MainBgPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINBGPATHS_OFFSET))(this);
		}

		::System::String* get_InterviewFgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWFGPATH_OFFSET))(this);
		}

		::System::String* get_InterviewBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWBGPATH_OFFSET))(this);
		}

		::System::String* get_CollectionFgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONFGPATH_OFFSET))(this);
		}

		::System::String* get_CollectionBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONBGPATH_OFFSET))(this);
		}

		::System::String* get_AdFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ADFIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AdDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ADDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET))(this, a1);
		}

	};
}
