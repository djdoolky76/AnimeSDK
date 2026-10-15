#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBEIDNCLJFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB859770)
#define MBEIDNCLJFC_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB859FF0)
#define MBEIDNCLJFC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB859E60)
#define MBEIDNCLJFC_LNKHHIDJDKJ_OFFSET UNITYSDK_OFFSET(0xB859780)
#define MBEIDNCLJFC_MPJJFIKPGOK_OFFSET UNITYSDK_OFFSET(0xB859F50)
#define MBEIDNCLJFC_SET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB85A000)

	class MBEIDNCLJFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* _VoiceEntryList_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::AvatarVoiceArchiveEntry* MPJJFIKPGOK(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarVoiceArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_MPJJFIKPGOK_OFFSET))(this, a1);
		}

		::System::Void LNKHHIDJDKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_LNKHHIDJDKJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* get_VoiceEntryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_GET_VOICEENTRYLIST_OFFSET))(this);
		}

		::System::Void set_VoiceEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*))((::PBYTE)hIl2Cpp + MBEIDNCLJFC_SET_VOICEENTRYLIST_OFFSET))(this, a1);
		}

	};
