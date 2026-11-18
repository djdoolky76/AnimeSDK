#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { class Action; }

#define EANHNKOAPNL_BMDKPOODLEI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13496350)
#define EANHNKOAPNL_BMDKPOODLEI__CTOR_OFFSET UNITYSDK_OFFSET(0x13496340)

inline static constexpr unsigned int EANHNKOAPNL_BMDKPOODLEI_TypeDefinitionIndex = 60024;

class EANHNKOAPNL_BMDKPOODLEI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANHNKOAPNL_BMDKPOODLEI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigDamageStaggerLevel* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDamageStaggerLevel*))((::PBYTE)hIl2Cpp + EANHNKOAPNL_BMDKPOODLEI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
