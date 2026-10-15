#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class PJLPLELHIHL;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class MarbleModule; }
namespace System { class String; }

#define DJLFKMLAHCK_BAECPKOFOCJ_OFFSET UNITYSDK_OFFSET(0xF23A0A0)
#define DJLFKMLAHCK_BFDDGGCBHAI_OFFSET UNITYSDK_OFFSET(0xF23A440)
#define DJLFKMLAHCK_BJNDICMCKIF_OFFSET UNITYSDK_OFFSET(0xF23A170)
#define DJLFKMLAHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xF239C60)
#define DJLFKMLAHCK_DDLCEIHGIHN_OFFSET UNITYSDK_OFFSET(0xF239E70)
#define DJLFKMLAHCK_HAKAPFJPKNN_OFFSET UNITYSDK_OFFSET(0xF239FD0)
#define DJLFKMLAHCK_HKEGAOLALGH_OFFSET UNITYSDK_OFFSET(0xF239F90)
#define DJLFKMLAHCK_HNNDGELHHLE_OFFSET UNITYSDK_OFFSET(0xF23A100)
#define DJLFKMLAHCK_JMJMDEFNDIA_OFFSET UNITYSDK_OFFSET(0xF239EC0)
#define DJLFKMLAHCK_KDHMAKGDCIL_OFFSET UNITYSDK_OFFSET(0xF239C70)
#define DJLFKMLAHCK_KKKPCGHMCAK_OFFSET UNITYSDK_OFFSET(0xF239F00)
#define DJLFKMLAHCK_OCOLPDGEAMD_OFFSET UNITYSDK_OFFSET(0xF239F50)

	class DJLFKMLAHCK : public ::System::Object
	{
	public:
		::RPG::Client::MarbleModule* OJMMJIALPON; // 0x10
		::System::Void _ctor(::RPG::Client::MarbleModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleModule*))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KDHMAKGDCIL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_KDHMAKGDCIL_OFFSET))(this, a1);
		}

		::System::UInt32 DDLCEIHGIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_DDLCEIHGIHN_OFFSET))(this);
		}

		::System::Boolean JMJMDEFNDIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_JMJMDEFNDIA_OFFSET))(this);
		}

		::System::Void KKKPCGHMCAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_KKKPCGHMCAK_OFFSET))(this);
		}

		::System::Void OCOLPDGEAMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_OCOLPDGEAMD_OFFSET))(this);
		}

		::PJLPLELHIHL* HKEGAOLALGH()
		{
			return ((::PJLPLELHIHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_HKEGAOLALGH_OFFSET))(this);
		}

		::System::Boolean HAKAPFJPKNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_HAKAPFJPKNN_OFFSET))(this);
		}

		::System::Boolean BAECPKOFOCJ(::FJPMJPEKLJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_BAECPKOFOCJ_OFFSET))(this, a1);
		}

		::System::String* HNNDGELHHLE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_HNNDGELHHLE_OFFSET))(this);
		}

		::System::Boolean BJNDICMCKIF(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_BJNDICMCKIF_OFFSET))(this, a1);
		}

		::System::String* BFDDGGCBHAI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLFKMLAHCK_BFDDGGCBHAI_OFFSET))(this);
		}

	};
