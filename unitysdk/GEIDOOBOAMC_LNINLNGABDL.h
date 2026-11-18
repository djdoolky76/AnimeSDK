#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GEIDOOBOAMC_LNINLNGABDL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15CE0480)
#define GEIDOOBOAMC_LNINLNGABDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0470)

inline static constexpr unsigned int GEIDOOBOAMC_LNINLNGABDL_TypeDefinitionIndex = 54484;

class GEIDOOBOAMC_LNINLNGABDL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigRealtimeQTE*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_LNINLNGABDL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigRealtimeQTE* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_LNINLNGABDL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
