#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LPGCDGJIMND;
namespace System { class String; }

#define LPGCDGJIMND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12A720)
#define LPGCDGJIMND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D12A3B0)

inline static constexpr unsigned int LPGCDGJIMND_TypeDefinitionIndex = 12471;

	class LPGCDGJIMND : public ::System::Object
	{
	public:
		::System::String* OHANIOHKHMG; // 0x10
		::System::String* IOLJNBOEIPI; // 0x18
		::System::String* EBLHFPKFNOB; // 0x20
		::System::UInt32 HPJHKACDIMB; // 0x28
		::System::UInt32 GMCBNNKJAGJ; // 0x2C
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::UInt32 DIFINBBBPHM; // 0x34
		::RPG::Client::TextID OENAMINOLLF; // 0x38
		::RPG::Client::TextID HKPPAJKICII; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGCDGJIMND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPGCDGJIMND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPGCDGJIMND*))((::PBYTE)hIl2Cpp + LPGCDGJIMND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
