#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }

#define CKBKJCCHCHG_EIHENPBELIL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x159DE850)
#define CKBKJCCHCHG_EIHENPBELIL__CTOR_OFFSET UNITYSDK_OFFSET(0x159DE840)

inline static constexpr unsigned int CKBKJCCHCHG_EIHENPBELIL_TypeDefinitionIndex = 51154;

class CKBKJCCHCHG_EIHENPBELIL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_EIHENPBELIL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAutoBattleAccessoryEffect* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAutoBattleAccessoryEffect*))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_EIHENPBELIL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
