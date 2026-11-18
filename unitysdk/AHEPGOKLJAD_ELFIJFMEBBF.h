#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }

#define AHEPGOKLJAD_ELFIJFMEBBF_ODIPEOFAAFP_OFFSET UNITYSDK_OFFSET(0x135E2220)
#define AHEPGOKLJAD_ELFIJFMEBBF__CTOR_OFFSET UNITYSDK_OFFSET(0x135E2210)

inline static constexpr unsigned int AHEPGOKLJAD_ELFIJFMEBBF_TypeDefinitionIndex = 78476;

class AHEPGOKLJAD_ELFIJFMEBBF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_ELFIJFMEBBF__CTOR_OFFSET))(this);
	}

	::System::Void ODIPEOFAAFP(::MoleMole::Config::ConfigUITriDiceOracle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_ELFIJFMEBBF_ODIPEOFAAFP_OFFSET))(this, DFMKILICPFB);
	}
};
