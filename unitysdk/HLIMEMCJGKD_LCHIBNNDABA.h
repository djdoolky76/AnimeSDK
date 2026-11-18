#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }

#define HLIMEMCJGKD_LCHIBNNDABA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x19E2F4B0)
#define HLIMEMCJGKD_LCHIBNNDABA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F4A0)

inline static constexpr unsigned int HLIMEMCJGKD_LCHIBNNDABA_TypeDefinitionIndex = 38484;

class HLIMEMCJGKD_LCHIBNNDABA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_LCHIBNNDABA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigTeleportSelections* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_LCHIBNNDABA_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
