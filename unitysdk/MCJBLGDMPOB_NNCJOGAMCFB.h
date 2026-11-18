#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }

#define MCJBLGDMPOB_NNCJOGAMCFB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11F30310)
#define MCJBLGDMPOB_NNCJOGAMCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F30300)

inline static constexpr unsigned int MCJBLGDMPOB_NNCJOGAMCFB_TypeDefinitionIndex = 66987;

class MCJBLGDMPOB_NNCJOGAMCFB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_NNCJOGAMCFB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGachaPerformanceLights* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_NNCJOGAMCFB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
