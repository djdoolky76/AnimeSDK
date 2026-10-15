#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"
#include "unitysdk/System/Object.h"

#define GFNPHMMMEIL_CTOR_OFFSET UNITYSDK_OFFSET(0x159FEF80)
#define GFNPHMMMEIL_GILPDKAEMGP_OFFSET UNITYSDK_OFFSET(0x159FEC50)
#define GFNPHMMMEIL_JPGNDIGABFC_OFFSET UNITYSDK_OFFSET(0x159FED90)
#define GFNPHMMMEIL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x159FEB00)
#define GFNPHMMMEIL_LEMGFGLHNMN_OFFSET UNITYSDK_OFFSET(0x159FEDE0)
#define GFNPHMMMEIL_NOPPNEMIEPG_OFFSET UNITYSDK_OFFSET(0x159FED30)

	class GFNPHMMMEIL : public ::System::Object
	{
	public:
		::System::UInt32 EMGKHLEIMKL; // 0x10
		::RPG::Client::StoryLineSwitchReason LADCPOJOHGE; // 0x14
		::System::UInt32 AMONCEBIPLM; // 0x18
		::System::UInt32 AMANDGCGBCC; // 0x1C
		::System::UInt32 APANKMLKKPF; // 0x20
		::System::UInt32 HBFBKIEEEKA; // 0x24
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
