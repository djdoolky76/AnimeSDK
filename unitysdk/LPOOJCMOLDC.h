#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIAPCHALLMF;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir::Legacy { class PixAirEquipDisplayData; }

#define LPOOJCMOLDC_ANKLNOMFLCD_OFFSET UNITYSDK_OFFSET(0xB836010)
#define LPOOJCMOLDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8360D0)
#define LPOOJCMOLDC_HILENJOHPAL_OFFSET UNITYSDK_OFFSET(0xB835E50)
#define LPOOJCMOLDC_JOOGDKEKEMF_OFFSET UNITYSDK_OFFSET(0xB835F30)
#define LPOOJCMOLDC_START_OFFSET UNITYSDK_OFFSET(0xB835DD0)
#define LPOOJCMOLDC_STOP_OFFSET UNITYSDK_OFFSET(0xB835E10)

	class LPOOJCMOLDC : public ::System::Object
	{
	public:
		::JIAPCHALLMF* NMLAOCMPPPP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_STOP_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* HILENJOHPAL()
		{
			return ((::RPG::Client::PixAir::PixAirBattleEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_HILENJOHPAL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBagEquipsViewModel* JOOGDKEKEMF()
		{
			return ((::RPG::Client::PixAir::PixAirBagEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_JOOGDKEKEMF_OFFSET))(this);
		}

		::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData* ANKLNOMFLCD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LPOOJCMOLDC_ANKLNOMFLCD_OFFSET))(this, a1, a2);
		}

	};
