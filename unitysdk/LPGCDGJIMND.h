#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LPGCDGJIMND;
namespace System { class String; }

#define LPGCDGJIMND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E329740)
#define LPGCDGJIMND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3293D0)

inline static constexpr unsigned int LPGCDGJIMND_TypeDefinitionIndex = 12538;

	class LPGCDGJIMND : public ::System::Object
	{
	public:
		::System::String* IOLJNBOEIPI; // 0x10
		::System::String* OHANIOHKHMG; // 0x18
		::System::String* EBLHFPKFNOB; // 0x20
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::RPG::Client::TextID HKPPAJKICII; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x48
		::System::UInt32 DIFINBBBPHM; // 0x4C
		::System::UInt32 HPJHKACDIMB; // 0x50
		::System::UInt32 GMCBNNKJAGJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGCDGJIMND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPGCDGJIMND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPGCDGJIMND*))((::PBYTE)hIl2Cpp + LPGCDGJIMND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
