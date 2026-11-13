#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageItemType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"
class BNEJEFALJIP;
class FCOEMCEDLNL;
namespace System { class String; }

#define BNEJEFALJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF85E0)
#define BNEJEFALJIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAF8180)

inline static constexpr unsigned int BNEJEFALJIP_TypeDefinitionIndex = 14106;

	class BNEJEFALJIP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BHNIBPKLDKO; // 0x10
		::System::String* FBKAMIHGLFK; // 0x18
		::System::UInt32 NJFABJDCPNC; // 0x20
		::RPG::GameCore::LimaoNewsMessageItemType LINLNNHIBAK; // 0x24
		::System::Boolean BGOCHGHFOLJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 JAKLCIIEDON; // 0x2C
		::System::UInt32 LDLDCLEIFML; // 0x30
		::RPG::GameCore::LimaoNewsMessageSenderType GEFCMECLLIJ; // 0x34
		::System::UInt32 IJBDLNLOJKK; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID HMGLFJABIII; // 0x40
		::RPG::Client::TextID JGMIOKAJMFB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEJEFALJIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNEJEFALJIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNEJEFALJIP*))((::PBYTE)hIl2Cpp + BNEJEFALJIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
