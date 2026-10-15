#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBEIDNCLJFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB852F30)
#define MBEIDNCLJFC_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB8537B0)
#define MBEIDNCLJFC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB853620)
#define MBEIDNCLJFC_LNKHHIDJDKJ_OFFSET UNITYSDK_OFFSET(0xB852F40)
#define MBEIDNCLJFC_MPJJFIKPGOK_OFFSET UNITYSDK_OFFSET(0xB853710)
#define MBEIDNCLJFC_SET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB8537C0)

inline static constexpr unsigned int MBEIDNCLJFC_TypeDefinitionIndex = 62427;

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
