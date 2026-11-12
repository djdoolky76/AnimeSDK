#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageItemType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"
class BNEJEFALJIP;
class FCOEMCEDLNL;
namespace System { class String; }

#define BNEJEFALJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB39F0)
#define BNEJEFALJIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBB3590)

inline static constexpr unsigned int BNEJEFALJIP_TypeDefinitionIndex = 14106;

	class BNEJEFALJIP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BHNIBPKLDKO; // 0x10
		::System::String* FBKAMIHGLFK; // 0x18
		::System::UInt32 JAKLCIIEDON; // 0x20
		::System::UInt32 LDLDCLEIFML; // 0x24
		::System::UInt32 NJFABJDCPNC; // 0x28
		::System::UInt32 IJBDLNLOJKK; // 0x2C
		::RPG::GameCore::LimaoNewsMessageItemType LINLNNHIBAK; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID JGMIOKAJMFB; // 0x38
		::RPG::Client::TextID HMGLFJABIII; // 0x48
		::RPG::GameCore::LimaoNewsMessageSenderType GEFCMECLLIJ; // 0x58
		::System::Boolean BGOCHGHFOLJ; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEJEFALJIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNEJEFALJIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNEJEFALJIP*))((::PBYTE)hIl2Cpp + BNEJEFALJIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
