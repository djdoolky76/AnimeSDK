#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpType.h"
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }

#define IPKGHGJPNKB_BHLGOFHCJLA_OFFSET UNITYSDK_OFFSET(0x1C4A4EB0)
#define IPKGHGJPNKB_JFOJDKCCMNB_OFFSET UNITYSDK_OFFSET(0x1C4A4E40)

	struct alignas(8) IPKGHGJPNKB
	{
		::System::String* GKHIHPGCLIK; // 0x10
		::System::Type* EPGPJMHNBON; // 0x18
		::RPG::Client::OpType NCKLLHBKJCE; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::OnAssetOperationDelegate* BLPGAACJCMP; // 0x28
		/*
		static ::IPKGHGJPNKB JFOJDKCCMNB(::System::String* a1, ::System::Type* a2)
		{
			return ((::IPKGHGJPNKB(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + IPKGHGJPNKB_JFOJDKCCMNB_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IPKGHGJPNKB BHLGOFHCJLA(::System::String* a1, ::System::Type* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::IPKGHGJPNKB(*)(::System::String*, ::System::Type*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + IPKGHGJPNKB_BHLGOFHCJLA_OFFSET))(a1, a2, a3);
		}
		*/

	};
