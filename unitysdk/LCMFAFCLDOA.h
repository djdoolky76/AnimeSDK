#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIPADIDNFL;
class JIAPCHALLMF;
class OBJANKHLNGO;
namespace RPG::Client::PixAir { class PixAirGhostManager; }

#define LCMFAFCLDOA_AJACCJLJGEH_OFFSET UNITYSDK_OFFSET(0xB618FD0)
#define LCMFAFCLDOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB619080)
#define LCMFAFCLDOA_KJNHGPLHHBD_OFFSET UNITYSDK_OFFSET(0xB618E40)
#define LCMFAFCLDOA_OOMGPNFBKMO_OFFSET UNITYSDK_OFFSET(0xB618DF0)
#define LCMFAFCLDOA_START_OFFSET UNITYSDK_OFFSET(0xB618D70)
#define LCMFAFCLDOA_STOP_OFFSET UNITYSDK_OFFSET(0xB618DB0)

	class LCMFAFCLDOA : public ::System::Object
	{
	public:
		::JIAPCHALLMF* NMLAOCMPPPP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_STOP_OFFSET))(this);
		}

		::System::Void OOMGPNFBKMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_OOMGPNFBKMO_OFFSET))(this, a1);
		}

		::System::Void KJNHGPLHHBD(::HGIPADIDNFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIPADIDNFL*))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_KJNHGPLHHBD_OFFSET))(this, a1);
		}

		::System::Void AJACCJLJGEH(::RPG::Client::PixAir::PixAirGhostManager* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGhostManager*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LCMFAFCLDOA_AJACCJLJGEH_OFFSET))(this, a1, a2);
		}

	};
