#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CDEKGDOGOPN_ICKCOEIAECK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16941950)
#define CDEKGDOGOPN_ICKCOEIAECK__CTOR_OFFSET UNITYSDK_OFFSET(0x16941940)

inline static constexpr unsigned int CDEKGDOGOPN_ICKCOEIAECK_TypeDefinitionIndex = 77469;

class CDEKGDOGOPN_ICKCOEIAECK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigOverShoulderCamera*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_ICKCOEIAECK__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigOverShoulderCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_ICKCOEIAECK_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
