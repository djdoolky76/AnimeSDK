#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define CEFFHDKFCPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC784160)
#define CEFFHDKFCPN_HHPLMJPLDHE_OFFSET UNITYSDK_OFFSET(0xC784000)
#define CEFFHDKFCPN_MFDKJKMBHPD_OFFSET UNITYSDK_OFFSET(0xC7840B0)

inline static constexpr unsigned int CEFFHDKFCPN_TypeDefinitionIndex = 65839;

	class CEFFHDKFCPN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MCLLALGABAB; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID KPBHKDHAOLD; // 0x20
		::System::UInt32 ODMPMJCAHPN; // 0x30
		::System::Single NEMDKBKDFDN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFFHDKFCPN_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TextID HHPLMJPLDHE(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEFFHDKFCPN_HHPLMJPLDHE_OFFSET))(a1);
		}

		static ::RPG::Client::TextID MFDKJKMBHPD(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEFFHDKFCPN_MFDKJKMBHPD_OFFSET))(a1);
		}

	};
