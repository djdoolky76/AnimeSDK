#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define CEFFHDKFCPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC780BB0)
#define CEFFHDKFCPN_HHPLMJPLDHE_OFFSET UNITYSDK_OFFSET(0xC780A50)
#define CEFFHDKFCPN_MFDKJKMBHPD_OFFSET UNITYSDK_OFFSET(0xC780B00)

inline static constexpr unsigned int CEFFHDKFCPN_TypeDefinitionIndex = 65839;

	class CEFFHDKFCPN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MCLLALGABAB; // 0x10
		::RPG::Client::TextID KPBHKDHAOLD; // 0x18
		::System::Single IEHPFADHJFD; // 0x28
		::System::Single NEMDKBKDFDN; // 0x2C
		::System::UInt32 ODMPMJCAHPN; // 0x30
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
