#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarStoryArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHODMJBHEMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF60E50)
#define CHODMJBHEMJ_DPEFMPMDMNL_OFFSET UNITYSDK_OFFSET(0xCF60E60)
#define CHODMJBHEMJ_GET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0xCF616D0)
#define CHODMJBHEMJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCF61540)
#define CHODMJBHEMJ_NILCFIFPNLN_OFFSET UNITYSDK_OFFSET(0xCF61630)
#define CHODMJBHEMJ_SET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0xCF616E0)

	class CHODMJBHEMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* _StoryEntryList_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::AvatarStoryArchiveEntry* NILCFIFPNLN(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarStoryArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_NILCFIFPNLN_OFFSET))(this, a1);
		}

		::System::Void DPEFMPMDMNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_DPEFMPMDMNL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* get_StoryEntryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_GET_STORYENTRYLIST_OFFSET))(this);
		}

		::System::Void set_StoryEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*))((::PBYTE)hIl2Cpp + CHODMJBHEMJ_SET_STORYENTRYLIST_OFFSET))(this, a1);
		}

	};
