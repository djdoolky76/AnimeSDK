#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CKBIKDBNKEO_CTOR_OFFSET UNITYSDK_OFFSET(0xD74D640)
#define CKBIKDBNKEO_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD74D600)
#define CKBIKDBNKEO_GET_CONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xD74D5E0)
#define CKBIKDBNKEO_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xD74D5C0)
#define CKBIKDBNKEO_GET_TRID_OFFSET UNITYSDK_OFFSET(0xD74D5A0)
#define CKBIKDBNKEO_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0xD74D620)
#define CKBIKDBNKEO_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD74D610)
#define CKBIKDBNKEO_SET_CONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xD74D5F0)
#define CKBIKDBNKEO_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xD74D5D0)
#define CKBIKDBNKEO_SET_TRID_OFFSET UNITYSDK_OFFSET(0xD74D5B0)
#define CKBIKDBNKEO_SET_VOICEID_OFFSET UNITYSDK_OFFSET(0xD74D630)

inline static constexpr unsigned int CKBIKDBNKEO_TypeDefinitionIndex = 81721;

	class CKBIKDBNKEO : public ::System::Object
	{
	public:
		::System::String* _AvatarIconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _ContentText_k__BackingField; // 0x18
		::System::UInt32 _VoiceID_k__BackingField; // 0x28
		::System::UInt32 _TrID_k__BackingField; // 0x2C
		::RPG::Client::TextID _TitleText_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TrID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_GET_TRID_OFFSET))(this);
		}

		::System::Void set_TrID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_SET_TRID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ContentText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_GET_CONTENTTEXT_OFFSET))(this);
		}

		::System::Void set_ContentText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_SET_CONTENTTEXT_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_GET_AVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_AvatarIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_SET_AVATARICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_VoiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_GET_VOICEID_OFFSET))(this);
		}

		::System::Void set_VoiceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKBIKDBNKEO_SET_VOICEID_OFFSET))(this, a1);
		}

	};
