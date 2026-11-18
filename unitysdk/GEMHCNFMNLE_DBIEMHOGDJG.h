#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace System { class Action; }

#define GEMHCNFMNLE_DBIEMHOGDJG_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x16CBEF00)
#define GEMHCNFMNLE_DBIEMHOGDJG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBEEF0)

inline static constexpr unsigned int GEMHCNFMNLE_DBIEMHOGDJG_TypeDefinitionIndex = 48167;

class GEMHCNFMNLE_DBIEMHOGDJG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_DBIEMHOGDJG__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::Config::ConfigHackerDrone* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHackerDrone*))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_DBIEMHOGDJG_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};
