#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class String; }

#define EHGMEDDCHLH_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x2E72A70)

inline static constexpr unsigned int EHGMEDDCHLH_TypeDefinitionIndex = 57671;

	struct alignas(8) EHGMEDDCHLH
	{
		::System::Boolean AIABGNPIEJP; // 0x10
		::System::Boolean EKGDOELGLFK; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID CIDCEJCGOGB; // 0x18
		::RPG::Client::TextID AGOHEFBOPNO; // 0x28
		::RPG::Client::TextID IGKJBKKDNEM; // 0x38
		::System::String* COIHAMIJMFH; // 0x48
		::System::String* BPDKDMHNGKD; // 0x50
		::RPG::Client::TextID OHLBMAGECPM; // 0x58
		::RPG::Client::TextID EAGPLPPMPPB; // 0x68
		::System::Nullable_1<::System::Boolean> EJFIGKPDPBJ; // 0x78
		::System::Nullable_1<::RPG::GameCore::AttackDamageType> PAIECOBACKB; // 0x7C
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x88
		::Il2CppArray<::RPG::GameCore::FixPoint>* GBLMPIFJBPI; // 0x90
		::System::Nullable_1<::RPG::GameCore::FixPoint> JFFOACKMGNC; // 0x98
		::System::Byte _padding2[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> BIFBJDKMKDL; // 0xA8
		::System::Byte _padding3[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> OAPBIIMFPEJ; // 0xB8
		::System::Byte _padding4[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> OIEBGFOEOKG; // 0xC8
		::System::Byte _padding5[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> EBDJIBKABGA; // 0xD8
		::System::Byte _padding6[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> DCFJMKBJDPD; // 0xE8
		::System::Byte _padding7[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> ANLGHKHLFDE; // 0xF8
		/*
		::System::Void KDPEDNKCMEB(::EHGMEDDCHLH a1, ::EHGMEDDCHLH a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHGMEDDCHLH, ::EHGMEDDCHLH))((::PBYTE)hIl2Cpp + EHGMEDDCHLH_KDPEDNKCMEB_OFFSET))(this, a1, a2);
		}
		*/

	};
