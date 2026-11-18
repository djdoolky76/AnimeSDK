#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace System { class Action; }

#define LMEADKJEPOB_OOOLAKOADLA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14DC9240)
#define LMEADKJEPOB_OOOLAKOADLA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC9230)

inline static constexpr unsigned int LMEADKJEPOB_OOOLAKOADLA_TypeDefinitionIndex = 45442;

class LMEADKJEPOB_OOOLAKOADLA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADKJEPOB_OOOLAKOADLA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigDynamicAccessories* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + LMEADKJEPOB_OOOLAKOADLA_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
