#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFLJIEBFMOF.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define LNAAGIHIKDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D4EA0)
#define LNAAGIHIKDJ_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB7D4E60)
#define LNAAGIHIKDJ_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB7D4E70)
#define LNAAGIHIKDJ_GET_SENDERICON_OFFSET UNITYSDK_OFFSET(0xB7D4E90)
#define LNAAGIHIKDJ_GET_SENDERNAME_OFFSET UNITYSDK_OFFSET(0xB7D4E80)

	class LNAAGIHIKDJ : public ::MFLJIEBFMOF
	{
	public:
		::System::String* _SenderIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _Content_k__BackingField; // 0x20
		::RPG::Client::TextID _SenderName_k__BackingField; // 0x30
		::System::UInt32 _Rarity_k__BackingField; // 0x40
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LNAAGIHIKDJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAGIHIKDJ_GET_CONTENT_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAGIHIKDJ_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_SenderName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAGIHIKDJ_GET_SENDERNAME_OFFSET))(this);
		}

		::System::String* get_SenderIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAGIHIKDJ_GET_SENDERICON_OFFSET))(this);
		}

	};
