#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"
#include "unitysdk/System/Object.h"

#define GFNPHMMMEIL_CTOR_OFFSET UNITYSDK_OFFSET(0x169394E0)
#define GFNPHMMMEIL_GILPDKAEMGP_OFFSET UNITYSDK_OFFSET(0x169391B0)
#define GFNPHMMMEIL_JPGNDIGABFC_OFFSET UNITYSDK_OFFSET(0x169392F0)
#define GFNPHMMMEIL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16939060)
#define GFNPHMMMEIL_LEMGFGLHNMN_OFFSET UNITYSDK_OFFSET(0x16939340)
#define GFNPHMMMEIL_NOPPNEMIEPG_OFFSET UNITYSDK_OFFSET(0x16939290)

inline static constexpr unsigned int GFNPHMMMEIL_TypeDefinitionIndex = 69942;

	class GFNPHMMMEIL : public ::System::Object
	{
	public:
		::System::UInt32 APANKMLKKPF; // 0x10
		::RPG::Client::StoryLineSwitchReason LADCPOJOHGE; // 0x14
		::System::UInt32 AMONCEBIPLM; // 0x18
		::System::UInt32 HBFBKIEEEKA; // 0x1C
		::System::UInt32 EMGKHLEIMKL; // 0x20
		::System::UInt32 AMANDGCGBCC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NOPPNEMIEPG(::RPG::Client::StoryLineSwitchReason a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_NOPPNEMIEPG_OFFSET))(this, a1, a2);
		}

		::System::Void JPGNDIGABFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_JPGNDIGABFC_OFFSET))(this);
		}

		::System::Void LEMGFGLHNMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_LEMGFGLHNMN_OFFSET))(this);
		}

		::System::UInt32 GILPDKAEMGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNPHMMMEIL_GILPDKAEMGP_OFFSET))(this);
		}

	};
