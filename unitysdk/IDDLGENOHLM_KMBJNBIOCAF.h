#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }

#define IDDLGENOHLM_KMBJNBIOCAF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x140D9CD0)
#define IDDLGENOHLM_KMBJNBIOCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9CC0)

inline static constexpr unsigned int IDDLGENOHLM_KMBJNBIOCAF_TypeDefinitionIndex = 47722;

class IDDLGENOHLM_KMBJNBIOCAF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDLGENOHLM_KMBJNBIOCAF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigTeamInspireZone* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamInspireZone*))((::PBYTE)hIl2Cpp + IDDLGENOHLM_KMBJNBIOCAF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
