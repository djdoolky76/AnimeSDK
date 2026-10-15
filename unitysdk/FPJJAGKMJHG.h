#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerWayType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define FPJJAGKMJHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1591D7A0)
#define FPJJAGKMJHG_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x1591D710)
#define FPJJAGKMJHG_FPMOHGAEKBD_OFFSET UNITYSDK_OFFSET(0x1591D6D0)
#define FPJJAGKMJHG_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1591D760)
#define FPJJAGKMJHG_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1591D630)

	class FPJJAGKMJHG : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyEffectTriggerWayType KJELCKIDLOE; // 0x10
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x14
		::System::UInt32 AIKAPJELHNK; // 0x18
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + FPJJAGKMJHG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJJAGKMJHG_TRIGGER_OFFSET))(this);
		}

		::RPG::Client::MonopolyEffectTriggerWayType FPMOHGAEKBD()
		{
			return ((::RPG::Client::MonopolyEffectTriggerWayType(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJJAGKMJHG_FPMOHGAEKBD_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPJJAGKMJHG_EIMIIHEDKFM_OFFSET))(this, a1);
		}

		::System::UInt32 MNGGAOFNGIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJJAGKMJHG_MNGGAOFNGIP_OFFSET))(this);
		}

	};
