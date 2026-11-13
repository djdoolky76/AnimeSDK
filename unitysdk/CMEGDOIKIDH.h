#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGILMOEBHPN;
namespace RPG::Client { class FeatureSwitchModule; }
namespace RPG::Client { class ScheduleData; }

#define CMEGDOIKIDH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B18F6F0)
#define CMEGDOIKIDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B18F6A0)
#define CMEGDOIKIDH_EKNAANPELAI_OFFSET UNITYSDK_OFFSET(0x1B18F8B0)
#define CMEGDOIKIDH_ELDFLEAPCCD_OFFSET UNITYSDK_OFFSET(0x1B18F990)

inline static constexpr unsigned int CMEGDOIKIDH_TypeDefinitionIndex = 77251;

	class CMEGDOIKIDH : public ::System::Object
	{
	public:
		::RPG::Client::FeatureSwitchModule* OOBAFGIEEPM; // 0x10
		::System::Void _ctor(::RPG::Client::FeatureSwitchModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FeatureSwitchModule*))((::PBYTE)hIl2Cpp + CMEGDOIKIDH_CTOR_OFFSET))(this, a1);
		}

		::EGILMOEBHPN* BPLPBPMEODA(::System::UInt32 a1, ::RPG::Client::ScheduleData* a2)
		{
			return ((::EGILMOEBHPN*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CMEGDOIKIDH_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::EGILMOEBHPN* EKNAANPELAI(::System::UInt32 a1)
		{
			return ((::EGILMOEBHPN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMEGDOIKIDH_EKNAANPELAI_OFFSET))(this, a1);
		}

		::EGILMOEBHPN* ELDFLEAPCCD(::RPG::Client::ScheduleData* a1)
		{
			return ((::EGILMOEBHPN*(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CMEGDOIKIDH_ELDFLEAPCCD_OFFSET))(this, a1);
		}

	};
